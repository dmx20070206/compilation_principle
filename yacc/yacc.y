%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <algorithm>

#include "../yacc/dmx_yacc.hpp"
#include "../lex/dmx_lex.h"

using namespace std;

FILE *output_yacc = fopen("output_first.txt", "w");
extern unordered_map<int, char *> token_map;

int yyerror(YYLTYPE *llocp, const char *parse_string, yyscan_t scanner, const char *msg)
{
    fprintf(output_yacc, "Syntax error: %s\n", msg);
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

int cur_token = -1;
%}

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
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<CompUnit>");
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
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<ConstDecl>");
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
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<ConstDef>");
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
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<ConstInitVal>");
        printf("%s\n", "<ConstInitVal>");
    }
    | LBRACE RBRACE
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<ConstInitVal>");
        printf("%s\n", "<ConstInitVal>");
    }
    | LBRACE ConstInitVal ConstInitVals RBRACE
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<ConstInitVal>");
        printf("%s\n", "<ConstInitVal>");
    }
    ;

/* 若干个常量初值 */
ConstInitVals:
    | COMMA ConstInitVal ConstInitVals
    ;

/* 一个变量声明 */
VarDecl:
    TYPETK VarDef VarDefs SEMICN
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<VarDecl>");
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
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<VarDef>");
        printf("%s\n", "<VarDef>");
    }
    | IDENFR L_ConstExps_R ASSIGN InitVal
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<VarDef>");
        printf("%s\n", "<VarDef>");
    }
    ;

InitVal:
    Exp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<InitVal>");
        printf("%s\n", "<InitVal>");
    }
    | LBRACE RBRACE
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<InitVal>");
        printf("%s\n", "<InitVal>");
    }
    | LBRACE InitVal InitVals RBRACE
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<InitVal>");
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
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<FuncDef>");
        printf("%s\n", "<FuncDef>");
    }
    | TYPETK IDENFR LPARENT FuncFParam FuncFParams RPARENT Block
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<FuncDef>");
        printf("%s\n", "<FuncDef>");
    }
    | TYPETK MAINTK LPARENT RPARENT Block
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<MainFuncDef>");
        printf("%s\n", "<MainFuncDef>");
    }
    | TYPETK MAINTK LPARENT FuncFParam FuncFParams RPARENT Block
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<MainFuncDef>");
        printf("%s\n", "<MainFuncDef>");
    }
    ;

FuncFParams:
    | COMMA FuncFParam FuncFParams
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<FuncFParams>");
        printf("%s\n", "<FuncFParams>");
    }
    ;

FuncFParam:
    TYPETK IDENFR
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<FuncFParam>");
        printf("%s\n", "<FuncFParam>");
    }
    | TYPETK IDENFR LBRACK RBRACK L_ConstExps_R
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<FuncFParam>");
        printf("%s\n", "<FuncFParam>");
    }
    ;

Block:
    LBRACE BlockItems RBRACE
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Block>");
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
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | SEMICN
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | Exp SEMICN
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | Block
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | IFTK LPARENT Cond RPARENT Stmt ELSETK Stmt
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | IFTK LPARENT Cond RPARENT Stmt %prec IFTK
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | WHILETK LPARENT Cond RPARENT Stmt
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | BREAKTK SEMICN
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | CONTINUETK SEMICN
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | RETURNTK SEMICN
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | RETURNTK Exp SEMICN
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | LVal ASSIGN GETINTTK LPARENT RPARENT SEMICN
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    | PRINTFTK LPARENT STRCON Exps RPARENT SEMICN
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Stmt>");
        printf("%s\n", "<Stmt>");
    }
    ;

Exps:
    | COMMA Exp Exps
    ;

Exp:
    AddExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Exp>");
        printf("%s\n", "<Exp>");
    }
    ;

Cond:
    LOrExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Cond>");
        printf("%s\n", "<Cond>");
    }
    ;

LVal:
    IDENFR L_Exps_R
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<LVal>");
        printf("%s\n", "<LVal>");
    }
    ;

L_Exps_R:
    | L_Exps_R LBRACK Exp RBRACK 
    ;

PrimaryExp:
    LPARENT Exp RPARENT
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<PrimaryExp>");
        printf("%s\n", "<PrimaryExp>");
    }
    | LVal
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<PrimaryExp>");
        printf("%s\n", "<PrimaryExp>");
    }
    | Number
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<PrimaryExp>");
        printf("%s\n", "<PrimaryExp>");
    }
    ;

Number:
    INTCON
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<Number>");
        printf("%s\n", "<Number>");
    }
    ;

UnaryExp:
    PrimaryExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<UnaryExp>");
        printf("%s\n", "<UnaryExp>");
    }
    | IDENFR LPARENT RPARENT
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<UnaryExp>");
        printf("%s\n", "<UnaryExp>");
    }
    | IDENFR LPARENT FuncRParams RPARENT
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<UnaryExp>");
        printf("%s\n", "<UnaryExp>");
    }
    | UnaryOp UnaryExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<UnaryExp>");
        printf("%s\n", "<UnaryExp>");
    }

UnaryOp:
    PLUS
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<UnaryOp>");
        printf("%s\n", "<UnaryOp>");
    }
    | MINU
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<UnaryOp>");
        printf("%s\n", "<UnaryOp>");
    }
    | NOT
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<UnaryOp>");
        printf("%s\n", "<UnaryOp>");
    }
    ;

FuncRParams:
    Exp Exps
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<FuncRParams>");
        printf("%s\n", "<FuncRParams>");
    }
    ;

MulExp:
    UnaryExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<MulExp>");
        printf("%s\n", "<MulExp>");
    }
    | MulExp MULT UnaryExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<MulExp>");
        printf("%s\n", "<MulExp>");
    }
    | MulExp DIV UnaryExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<MulExp>");
        printf("%s\n", "<MulExp>");
    }
    | MulExp MOD UnaryExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<MulExp>");
        printf("%s\n", "<MulExp>");
    }
    ;

AddExp:
    MulExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<AddExp>");
        printf("%s\n", "<AddExp>");
    }
    | AddExp PLUS MulExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<AddExp>");
        printf("%s\n", "<AddExp>");
    }
    | AddExp MINU MulExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<AddExp>");
        printf("%s\n", "<AddExp>");
    }
    ;

RelExp:
    AddExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<RelExp>");
        printf("%s\n", "<RelExp>");
    }
    | RelExp LSS AddExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<RelExp>");
        printf("%s\n", "<RelExp>");
    }
    | RelExp GRE AddExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<RelExp>");
        printf("%s\n", "<RelExp>");
    }
    | RelExp LEQ AddExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<RelExp>");
        printf("%s\n", "<RelExp>");
    }
    | RelExp GEQ AddExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<RelExp>");
        printf("%s\n", "<RelExp>");
    }
    ;

EqExp:
    RelExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<EqExp>");
        printf("%s\n", "<EqExp>");
    }
    | EqExp EQL RelExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<EqExp>");
        printf("%s\n", "<EqExp>");
    }
    | EqExp NEQ RelExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<EqExp>");
        printf("%s\n", "<EqExp>");
    }
    ;

LAndExp:
    EqExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<LAndExp>");
        printf("%s\n", "<LAndExp>");
    }
    | LAndExp AND EqExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<LAndExp>");
        printf("%s\n", "<LAndExp>");
    }
    ;

LOrExp:
    LAndExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<LOrExp>");
        printf("%s\n", "<LOrExp>");
    }
    | LOrExp OR LAndExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<LOrExp>");
        printf("%s\n", "<LOrExp>");
    }
    ;

ConstExp:
    AddExp
    {
        cur_token = yychar;
        fprintf(output_yacc, "%s\n", "<ConstExp>");
        printf("%s\n", "<ConstExp>");
    }
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

    fclose(output_yacc);
    return result;
}