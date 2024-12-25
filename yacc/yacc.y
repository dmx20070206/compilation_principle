%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <fstream>

#include "../yacc/dmx_yacc.hpp"
#include "../lex/dmx_lex.h"

using namespace std;

ofstream output_file("output_first.txt");
extern unordered_map<int, char *> token_map;

int yyerror(YYLTYPE *llocp, const char *parse_string, yyscan_t scanner, const char *msg)
{
    output_file << "Syntax error: %s\n" << msg;
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
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";  
        output_file << "<CompUnit>" << "\n";
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
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstDecl>" << "\n";
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
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstDef>" << "\n";
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
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstInitVal>" << "\n";
        printf("%s\n", "<ConstInitVal>");
    }
    | LBRACE RBRACE
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstInitVal>" << "\n";
        printf("%s\n", "<ConstInitVal>");
    }
    | LBRACE ConstInitVal ConstInitVals RBRACE
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstInitVal>" << "\n";
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
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<VarDecl>" << "\n";
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
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<VarDef>" << "\n";
        printf("%s\n", "<VarDef>");
    }
    | IDENFR L_ConstExps_R ASSIGN InitVal
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<VarDef>" << "\n";
        printf("%s\n", "<VarDef>");
    }
    ;

InitVal:
    Exp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<InitVal>" << "\n";
        printf("%s\n", "<InitVal>");
    }
    | LBRACE RBRACE
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<InitVal>" << "\n";
        printf("%s\n", "<InitVal>");
    }
    | LBRACE InitVal InitVals RBRACE
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<InitVal>" << "\n";
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
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncDef>" << "\n";
        printf("%s\n", "<FuncDef>");
    }
    | TYPETK IDENFR LPARENT FuncFParam FuncFParams RPARENT Block
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncDef>" << "\n";
        printf("%s\n", "<FuncDef>");
    }
    | TYPETK MAINTK LPARENT RPARENT Block
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MainFuncDef>" << "\n";
        printf("%s\n", "<MainFuncDef>");
    }
    | TYPETK MAINTK LPARENT FuncFParam FuncFParams RPARENT Block
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MainFuncDef>" << "\n";
        printf("%s\n", "<MainFuncDef>");
    }
    ;

FuncFParams:
    | COMMA FuncFParam FuncFParams
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncFParams>" << "\n";
        printf("%s\n", "<FuncFParams>");
    }
    ;

FuncFParam:
    TYPETK IDENFR
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncFParam>" << "\n";
        printf("%s\n", "<FuncFParam>");
    }
    | TYPETK IDENFR LBRACK RBRACK L_ConstExps_R
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncFParam>" << "\n";
        printf("%s\n", "<FuncFParam>");
    }
    ;

Block:
    LBRACE BlockItems RBRACE
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Block>" << "\n";
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
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | SEMICN
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | Exp SEMICN
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | Block
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | IFTK LPARENT Cond RPARENT Stmt ELSETK Stmt
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | IFTK LPARENT Cond RPARENT Stmt %prec IFTK
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | WHILETK LPARENT Cond RPARENT Stmt
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | BREAKTK SEMICN
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | CONTINUETK SEMICN
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | RETURNTK SEMICN
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | RETURNTK Exp SEMICN
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | LVal ASSIGN GETINTTK LPARENT RPARENT SEMICN
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    | PRINTFTK LPARENT STRCON Exps RPARENT SEMICN
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
    ;

Exps:
    | COMMA Exp Exps
    ;

Exp:
    AddExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Exp>" << "\n";
        printf("%s\n", "<Exp>");
    }
    ;

Cond:
    LOrExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Cond>" << "\n";
        printf("%s\n", "<Cond>");
    }
    ;

LVal:
    IDENFR L_Exps_R
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<LVal>" << "\n";
        printf("%s\n", "<LVal>");
    }
    ;

L_Exps_R:
    | L_Exps_R LBRACK Exp RBRACK 
    ;

PrimaryExp:
    LPARENT Exp RPARENT
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<PrimaryExp>" << "\n";
        printf("%s\n", "<PrimaryExp>");
    }
    | LVal
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<PrimaryExp>" << "\n";
        printf("%s\n", "<PrimaryExp>");
    }
    | Number
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<PrimaryExp>" << "\n";
        printf("%s\n", "<PrimaryExp>");
    }
    ;

Number:
    INTCON
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Number>" << "\n";
        printf("%s\n", "<Number>");
    }
    ;

UnaryExp:
    PrimaryExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryExp>" << "\n";
        printf("%s\n", "<UnaryExp>");
    }
    | IDENFR LPARENT RPARENT
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryExp>" << "\n";
        printf("%s\n", "<UnaryExp>");
    }
    | IDENFR LPARENT FuncRParams RPARENT
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryExp>" << "\n";
        printf("%s\n", "<UnaryExp>");
    }
    | UnaryOp UnaryExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryExp>" << "\n";
        printf("%s\n", "<UnaryExp>");
    }

UnaryOp:
    PLUS
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryOp>" << "\n";
        printf("%s\n", "<UnaryOp>");
    }
    | MINU
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryOp>" << "\n";
        printf("%s\n", "<UnaryOp>");
    }
    | NOT
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryOp>" << "\n";
        printf("%s\n", "<UnaryOp>");
    }
    ;

FuncRParams:
    Exp Exps
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncRParams>" << "\n";
        printf("%s\n", "<FuncRParams>");
    }
    ;

MulExp:
    UnaryExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MulExp>" << "\n";
        printf("%s\n", "<MulExp>");
    }
    | MulExp MULT UnaryExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MulExp>" << "\n";
        printf("%s\n", "<MulExp>");
    }
    | MulExp DIV UnaryExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MulExp>" << "\n";
        printf("%s\n", "<MulExp>");
    }
    | MulExp MOD UnaryExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MulExp>" << "\n";
        printf("%s\n", "<MulExp>");
    }
    ;

AddExp:
    MulExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<AddExp>" << "\n";
        printf("%s\n", "<AddExp>");
    }
    | AddExp PLUS MulExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<AddExp>" << "\n";
        printf("%s\n", "<AddExp>");
    }
    | AddExp MINU MulExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<AddExp>" << "\n";
        printf("%s\n", "<AddExp>");
    }
    ;

RelExp:
    AddExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<RelExp>" << "\n";
        printf("%s\n", "<RelExp>");
    }
    | RelExp LSS AddExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<RelExp>" << "\n";
        printf("%s\n", "<RelExp>");
    }
    | RelExp GRE AddExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<RelExp>" << "\n";
        printf("%s\n", "<RelExp>");
    }
    | RelExp LEQ AddExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<RelExp>" << "\n";
        printf("%s\n", "<RelExp>");
    }
    | RelExp GEQ AddExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<RelExp>" << "\n";
        printf("%s\n", "<RelExp>");
    }
    ;

EqExp:
    RelExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<EqExp>" << "\n";
        printf("%s\n", "<EqExp>");
    }
    | EqExp EQL RelExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<EqExp>" << "\n";
        printf("%s\n", "<EqExp>");
    }
    | EqExp NEQ RelExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<EqExp>" << "\n";
        printf("%s\n", "<EqExp>");
    }
    ;

LAndExp:
    EqExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<LAndExp>" << "\n";
        printf("%s\n", "<LAndExp>");
    }
    | LAndExp AND EqExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<LAndExp>" << "\n";
        printf("%s\n", "<LAndExp>");
    }
    ;

LOrExp:
    LAndExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<LOrExp>" << "\n";
        printf("%s\n", "<LOrExp>");
    }
    | LOrExp OR LAndExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<LOrExp>" << "\n";
        printf("%s\n", "<LOrExp>");
    }
    ;

ConstExp:
    AddExp
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstExp>" << "\n";
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

    output_file.close();
    return result;
}