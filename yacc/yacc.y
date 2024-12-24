%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

#include "../yacc/dmx_yacc.hpp"
#include "../lex/dmx_lex.h"

using namespace std;

int yyerror(YYLTYPE *llocp, const char *parse_string, yyscan_t scanner, const char *msg)
{
    fprintf(stderr, "Syntax error: %s\n", msg);
    return 0;
}
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
       CONSTTK    
       GETINTTK   
       PRINTFTK   
       BREAKTK    
       RETURNTK   
       CONTINUETK 
       IDENFR     
       STRCON     
       NOT        
       AND        
       OR         
       EQL        
       NEQ        
       LEQ        
       GEQ        
       LSS        
       GRE        
       ASSIGN     
       SEMICN     
       COMMA      
       LPARENT    
       RPARENT    
       LBRACE     
       RBRACE     
       LBRACK   
       RBRACK
       INTCON     
       PLUS 
       MINU
       MULT
       DIV 
       MOD
       TYPETK
       ERROR
%%

/* 编译单元，语法分析的起点 */
CompUnit:
    CompUnitList
    {
        printf("<CompUnit>\n");
    }
    ;

CompUnitList: 
    CompUnitItem 
    {

    }
    | CompUnitItem CompUnitList
    {

    }

CompUnitItem: 
    Decl
    {

    }
    | FuncDef 
    {

    }

/* 一个变量声明 */
Decl:
    ConstDecl
    {
        printf("<ConstDecl>\n");
    }
    | VarDecl
    {
        printf("<VarDecl>\n");
    }
    ;

/* 常量声明 */
ConstDecl:
    CONSTTK TYPETK ConstDef ConstDefs SEMICN
    {
        printf("<ConstDecl>\n");
    }
    ;

/* 若干个常量定义 */
ConstDefs:
    {

    }
    | COMMA ConstDef ConstDefs
    {

    }
    ;

/* 一个常量定义 */
ConstDef:
    IDENFR L_ConstExps_R ASSIGN ConstInitVal
    {
        printf("<ConstDef>\n");
    }
    ;

/* 若干个 [ ConstExp ] */
L_ConstExps_R:
    {

    }
    | L_ConstExps_R LBRACK ConstExp RBRACK
    {

    }
    ;

/* 一个常量初值 */
ConstInitVal:
    ConstExp
    {

    }
    | LBRACE RBRACE
    {

    }
    | LBRACE ConstInitVal ConstInitVals RBRACE
    {

    }
    ;

/* 若干个常量初值 */
ConstInitVals:
    {

    }
    | COMMA ConstInitVal ConstInitVals
    {

    }
    ;

/* 一个变量声明 */
VarDecl:
    TYPETK VarDef VarDefs SEMICN
    {

    }
    ;

/* 若干个变量定义 */
VarDefs:
    {

    }
    | COMMA VarDef VarDefs
    {

    }
    ;

/* 一个变量定义 */
VarDef:
    IDENFR L_ConstExps_R
    {

    }
    | IDENFR L_ConstExps_R ASSIGN InitVal
    {

    }
    ;

InitVal:
    Exp
    {

    }
    | LBRACE RBRACE
    {

    }
    | LBRACE InitVal InitVals RBRACE
    {

    }
    ;

InitVals:
    {

    }
    | COMMA InitVal InitVals
    {

    }
    ;

/* 一个函数定义 */
FuncDef:
    TYPETK IDENFR LPARENT RPARENT Block
    {
        printf("<FuncDef>\n");
    }
    | TYPETK IDENFR LPARENT FuncFParam FuncFParams RPARENT Block
    {
        printf("<FuncDef>\n");
    }
    ;

FuncFParams:
    {

    }
    | COMMA FuncFParam FuncFParams
    {

    }
    ;

FuncFParam:
    TYPETK IDENFR
    {

    }
    | TYPETK IDENFR LBRACK RBRACK L_ConstExps_R
    {

    }
    ;

Block:
    LBRACE BlockItems RBRACE
    {

    }
    ;

BlockItem:
    Decl
    {

    }
    | Stmt
    {

    }
    ;

BlockItems:
    {

    }
    | BlockItem BlockItems
    {

    }
    ;

Stmt:
    LVal ASSIGN Exp SEMICN
    {

    }
    | SEMICN
    {

    }
    | Exp SEMICN
    {

    }
    | Block
    {

    }
    | IFTK LPARENT Cond RPARENT Stmt ELSETK Stmt
    {

    }
    | IFTK LPARENT Cond RPARENT Stmt %prec IFTK
    {

    }
    | WHILETK LPARENT Cond RPARENT Stmt
    {

    }
    | BREAKTK SEMICN
    {

    }
    | CONTINUETK SEMICN
    {

    }
    | RETURNTK SEMICN
    {

    }
    | RETURNTK Exp SEMICN
    {

    }
    | LVal ASSIGN GETINTTK LPARENT RPARENT SEMICN
    {

    }
    | PRINTFTK LPARENT STRCON Exps RPARENT SEMICN
    {

    }
    ;

Exps:
    {

    }
    | COMMA Exp Exps
    {

    }
    ;

Exp:
    AddExp
    ;

Cond:
    LOrExp
    {

    }
    ;

LVal:
    IDENFR L_Exps_R
    {

    }
    ;

L_Exps_R:
    {

    }
    | L_Exps_R LBRACK Exp RBRACK 
    {

    }
    ;

PrimaryExp:
    LPARENT Exp RPARENT
    {

    }
    | LVal
    {

    }
    | Number
    {

    }
    ;

Number:
    INTCON
    {

    }
    ;

UnaryExp:
    PrimaryExp
    {

    }
    | IDENFR LPARENT RPARENT
    {

    }
    | IDENFR LPARENT FuncRParams RPARENT
    {

    }
    | UnaryOp UnaryExp
    {

    }
    ;

UnaryOp:
    PLUS
    {

    }
    | MINU
    {

    }
    | NOT
    {

    }
    ;

FuncRParams:
    Exp Exps
    {

    }
    ;

MulExp:
    UnaryExp
    | MulExp MULT UnaryExp
    | MulExp DIV UnaryExp
    | MulExp MOD UnaryExp
    ;

AddExp:
    MulExp
    | AddExp PLUS MulExp
    | AddExp MINU MulExp
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

int SysY_parse(const char* parse_string)
{
    printf("%s\n", "--------- code ---------");
    printf("%s", parse_string);

    printf("%s\n", "--------- result ---------");

    yyscan_t scanner;
    yylex_init(&scanner);

    scan_string(parse_string, scanner);

    int result = yyparse(parse_string, scanner);

    yylex_destroy(scanner); 
    return result;
}