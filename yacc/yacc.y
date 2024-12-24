%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <algorithm>

#include "../yacc/dmx_yacc.hpp"
#include "../lex/dmx_lex.h"

using namespace std;

int yyerror(YYLTYPE *llocp, const char *parse_string, yyscan_t scanner, const char *msg)
{
    fprintf(stderr, "Syntax error: %s\n", msg);
    return 0;
}

char *token_name(const char *parse_string, YYLTYPE *llocp)
{
    size_t length = llocp->last_column - llocp->first_column + 1;
    char* result = new char[length + 1];
    strncpy(result, parse_string + llocp->first_column, length);
    result[length] = '\0';
    return result;
}

char *output_format(char *name, char* parse_string)
{
    int len = 0;
    for(int i = strlen(parse_string) - 1; i >= 0; i--)
    {
        if(parse_string[i] == ' ' || parse_string[i] == '\n')
            break;
        len++;
    }

    char *temp = new char[len + 1];
    strncpy(temp, parse_string + strlen(parse_string) - len, len);

    char *result = new char[strlen(name) + strlen(temp) + 1];
    strcpy(result, name);
    strcat(result, temp);

    // printf("dmx %d :", strlen(parse_string));
    return result;
}

FILE *output_yacc;

vector<char *> all_outputs;
%}

%union {
  char * string;
}

%define api.pure full
%define parse.error verbose
/** 启用位置标识 **/
%locations
%lex-param { yyscan_t scanner }
/** 这些定义了在 yyparse 函数中的参数 **/
%parse-param { const char * parse_string }
%parse-param { void * scanner }

%precedence IFTK
%precedence ELSETK

%token WHILETK    
%token CONSTTK    
%token GETINTTK   
%token PRINTFTK   
%token BREAKTK    
%token RETURNTK   
%token CONTINUETK 
%token IDENFR     
%token STRCON     
%token NOT        
%token AND        
%token OR         
%token EQL        
%token NEQ        
%token LEQ        
%token GEQ        
%token LSS        
%token GRE        
%token ASSIGN     
%token SEMICN     
%token COMMA      
%token LPARENT    
%token RPARENT    
%token LBRACE     
%token RBRACE     
%token LBRACK   
%token RBRACK
%token INTCON     
%token PLUS 
%token MINU
%token MULT
%token DIV 
%token MOD
%token TYPETK
%token MAINTK
%token ERROR
%%

/* 编译单元，语法分析的起点 */
CompUnit:
    CompUnitList
    {
        char *result = output_format((char *)"<CompUnit>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<CompUnit>");
    }
    ;

CompUnitList: 
    CompUnitItem 
    | CompUnitItem CompUnitList
    ;

CompUnitItem: 
    Decl
    | FuncDef 
    ;

/* 一个变量声明 */
Decl:
    ConstDecl
    | VarDecl
    ;

/* 常量声明 */
ConstDecl:
    CONSTTK TYPETK ConstDef ConstDefs SEMICN
    {
        char *result = output_format((char *)"<ConstDecl>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<ConstDecl>");
    }
    ;

/* 若干个常量定义 */
ConstDefs:
    | COMMA ConstDef ConstDefs
    ;

/* 一个常量定义 */
ConstDef:
    IDENFR L_ConstExps_R ASSIGN ConstInitVal
    {
        char *result = output_format((char *)"<ConstDef>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<ConstDef>");
    }
    ;

/* 若干个 [ ConstExp ] */
L_ConstExps_R:
    | L_ConstExps_R LBRACK ConstExp RBRACK
    ;

/* 一个常量初值 */
ConstInitVal:
    ConstExp
    | LBRACE RBRACE
    | LBRACE ConstInitVal ConstInitVals RBRACE
    ;

/* 若干个常量初值 */
ConstInitVals:
    | COMMA ConstInitVal ConstInitVals
    ;

/* 一个变量声明 */
VarDecl:
    TYPETK VarDef VarDefs SEMICN
    {
        char *result = output_format((char *)"<VarDecl>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<VarDecl>");
    }
    ;

/* 若干个变量定义 */
VarDefs:
    | COMMA VarDef VarDefs
    ;

/* 一个变量定义 */
VarDef:
    IDENFR L_ConstExps_R
    {
        char *result = output_format((char *)"<VarDef>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<VarDef>");
    }
    | IDENFR L_ConstExps_R ASSIGN InitVal
    {
        char *result = output_format((char *)"<VarDef>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<VarDef>");
    }
    ;

InitVal:
    Exp
    {
        char *result = output_format((char *)"<InitVal>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<InitVal>");
    }
    | LBRACE RBRACE
    {
        char *result = output_format((char *)"<InitVal>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<InitVal>");
    }
    | LBRACE InitVal InitVals RBRACE
    {
        char *result = output_format((char *)"<InitVal>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<InitVal>");
    }
    ;

InitVals:
    | COMMA InitVal InitVals
    ;

/* 一个函数定义 */
FuncDef:
    TYPETK IDENFR LPARENT RPARENT Block
    {
        char *result = output_format((char *)"<FuncDef>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<FuncDef>");
    }
    | TYPETK IDENFR LPARENT FuncFParam FuncFParams RPARENT Block
    {
        char *result = output_format((char *)"<FuncDef>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<FuncDef>");
    }
    | TYPETK MAINTK LPARENT RPARENT Block
    {
        char *result = output_format((char *)"<MainFuncDef>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<MainFuncDef>");
    }
    | TYPETK MAINTK LPARENT FuncFParam FuncFParams RPARENT Block
    {
        char *result = output_format((char *)"<MainFuncDef>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<MainFuncDef>");
    }
    ;

FuncFParams:
    | COMMA FuncFParam FuncFParams
    ;

FuncFParam:
    TYPETK IDENFR
    | TYPETK IDENFR LBRACK RBRACK L_ConstExps_R
    ;

Block:
    LBRACE BlockItems RBRACE
    {
        char *result = output_format((char *)"<Block>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Block>");
    }
    ;

BlockItem:
    Decl
    | Stmt
    ;

BlockItems:
    | BlockItem BlockItems
    ;

Stmt:
    LVal ASSIGN Exp SEMICN
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | SEMICN
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | Exp SEMICN
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | Block
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | IFTK LPARENT Cond RPARENT Stmt ELSETK Stmt
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | IFTK LPARENT Cond RPARENT Stmt %prec IFTK
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | WHILETK LPARENT Cond RPARENT Stmt
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | BREAKTK SEMICN
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | CONTINUETK SEMICN
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | RETURNTK SEMICN
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | RETURNTK Exp SEMICN
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | LVal ASSIGN GETINTTK LPARENT RPARENT SEMICN
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    | PRINTFTK LPARENT STRCON Exps RPARENT SEMICN
    {
        char *result = output_format((char *)"<Stmt>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Stmt>");
    }
    ;

Exps:
    | COMMA Exp Exps
    ;

Exp:
    AddExp
    {
        char *result = output_format((char *)"<Exp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<Exp>");
    }
    ;

Cond:
    LOrExp
    ;

LVal:
    IDENFR L_Exps_R
    {
        char *result = output_format((char *)"<LVal>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<LVal>");
    }
    ;

L_Exps_R:
    | L_Exps_R LBRACK Exp RBRACK 
    ;

PrimaryExp:
    LPARENT Exp RPARENT
    {
        char *result = output_format((char *)"<PrimaryExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<PrimaryExp>");
    }
    | LVal
    {
        char *result = output_format((char *)"<PrimaryExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<PrimaryExp>");
    }
    | Number
    {
        char *result = output_format((char *)"<PrimaryExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<PrimaryExp>");
    }
    ;

Number:
    INTCON
    ;

UnaryExp:
    PrimaryExp
    {
        char *result = output_format((char *)"<UnaryExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<UnaryExp>");
    }
    | IDENFR LPARENT RPARENT
    {
        char *result = output_format((char *)"<UnaryExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<UnaryExp>");
    }
    | IDENFR LPARENT FuncRParams RPARENT
    {
        char *result = output_format((char *)"<UnaryExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<UnaryExp>");
    }
    | UnaryOp UnaryExp
    {
        char *result = output_format((char *)"<UnaryExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<UnaryExp>");
    }

UnaryOp:
    PLUS
    | MINU
    | NOT
    ;

FuncRParams:
    Exp Exps
    ;

MulExp:
    UnaryExp
    {
        char *result = output_format((char *)"<MulExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<MulExp>");
    }
    | MulExp MULT UnaryExp
    {
        char *result = output_format((char *)"<MulExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<MulExp>");
    }
    | MulExp DIV UnaryExp
    {
        char *result = output_format((char *)"<MulExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<MulExp>");
    }
    | MulExp MOD UnaryExp
    {
        char *result = output_format((char *)"<MulExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<MulExp>");
    }
    ;

AddExp:
    MulExp
    {
        char *result = output_format((char *)"<AddExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<AddExp>");
    }
    | AddExp PLUS MulExp
    {
        char *result = output_format((char *)"<AddExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<AddExp>");
    }
    | AddExp MINU MulExp
    {
        char *result = output_format((char *)"<AddExp>", token_name(parse_string, &@$));
        all_outputs.push_back(result);
        printf("%s\n", "<AddExp>");
    }
    ;

RelExp:
    AddExp
    | RelExp LSS AddExp
    | RelExp GRE AddExp
    | RelExp LEQ AddExp
    | RelExp GEQ AddExp
    ;

EqExp:
    RelExp
    | EqExp EQL RelExp
    | EqExp NEQ RelExp
    ;

LAndExp:
    EqExp
    | LAndExp AND EqExp
    ;

LOrExp:
    LAndExp
    | LOrExp OR LAndExp
    ;

ConstExp:
    AddExp
    ;
%%

int yywrap(){
    return 1;
}
extern void scan_string(const char *str, yyscan_t scanner);

int SysY_parse(const char* parse_string, const char* path)
{
    printf("from file %s\n", path);
    printf("%s\n", "--------- code ---------");
    printf("%s", parse_string);

    printf("%s\n", "--------- result ---------");

    yyscan_t scanner;
    yylex_init(&scanner);

    scan_string(parse_string, scanner);

    int result = yyparse(parse_string, scanner);

    yylex_destroy(scanner); 

    // 将输出的结果保留，准备进行下一步处理
    printf("%s\n", "--------- test ---------");
    for(size_t i = 0; i < all_outputs.size(); i++)
    {
        printf("%s\n", all_outputs[i]);
    }

    // yacc 是 LALR(1) 机制，会提前阅读下一个 token，需要进行前移处理
    for(int i = 0; i < all_outputs.size(); i++)
    {
        // 如果是词法输出，跳过
        if(all_outputs[i][0] != '<' || i == 0)
            continue;

        // 判断是否需要前移
        char *first = all_outputs[i];
        int num = 0;
        while(*first != '>' && *first != '\0')
        {
            first++;
            num++;
        }
        
        // 排除 < 打头的 token
        if(*first == '\0')
            continue;
        
        // 找到上一个语法输出
        int pos = 1;
        while(i - pos > 0 && all_outputs[i - pos][0] == '<')
            pos++;
        
        // 非法
        if(pos == i)
            continue;

        first++;
        char *second = all_outputs[i - pos] + strlen(all_outputs[i - pos]) - 1;

        // 词法分析也需要筛选出最后一个单词
        while(*second != ' ' && second >= all_outputs[i - pos])
            second--;
        second++;

        // 判断 first =? *second
        int len1 = strlen(first);
        int len2 = strlen(second);

        if(len1 < len2)
        {
            // 前移操作
            swap(all_outputs[i], all_outputs[i - pos]);
            // 删除无用信息
            all_outputs[i - pos][num + 1] = '\0';
            continue;
        }

        while(len2 >= 0)
        {
            if(first[len1] != second[len2])
                break;
            len1--;
            len2--;
        }

        if(len2 >= 0)
        {
            // 前移操作
            swap(all_outputs[i], all_outputs[i - 1]);
            // 删除无用信息
            all_outputs[i - pos][num + 1] = '\0';
            continue;
        }
        
        // 删除无用信息
        all_outputs[i][num + 1] = '\0';
    }

    // 最终的输出
    printf("%s\n", "--------- final answer ---------");
    for(size_t i = 0; i < all_outputs.size(); i++)
    {
        printf("%s\n", all_outputs[i]);
    }

    // 写入 output.txt
    output_yacc = fopen(path, "w");
    for(size_t i = 0; i < all_outputs.size(); i++)
    {
        fprintf(output_yacc, "%s\n", all_outputs[i]);
    }

    return result;
}