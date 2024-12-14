%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

#include "yacc/dmx_yacc.hpp"
#include "lex/dmx_lex.h"

using namespace std;

int yyerror(YYLTYPE *llocp, const char *parse_string, yyscan_t scanner, const char *msg)
{
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

%left  PLUS MINU
%left  MULT DIV MOD
%left  ELSETK
       INTTK

%token MAINTK     
       WHILETK    
       CONSTTK    
       GETINTTK   
       PRINTFTK   
       BREAKTK    
       RETURNTK   
       CONTINUETK 
       IFTK       
       VOIDTK     
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
%%

/* 编译单元，语法分析的起点 */
CompUnit:
    Decls FuncDefs MainFuncDef 
    {

    }
    ;

/* 一个函数声明 */
Decl:
    ConstDecl
    {

    }
    | VarDecl
    {

    }
    ;

/* 若干个函数声明 */
Decls:
    {

    }
    | Decl Decls
    {

    }
    ;

/* 若干个函数定义 */
FuncDefs:
    {

    }
    | FuncDef FuncDefs
    {

    }
    ;

/* 主函数定义 */
MainFuncDef:
    INTTK MAINTK LBRACE RBRACE Block
    {

    }
    ;

/* 常量声明 */
ConstDecl:
    CONSTTK BType ConstDef ConstDefs SEMICN
    {

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

/* 基本类型 */
BType:
    INTTK
    {

    }
    ;

/* 一个常量定义 */
ConstDef:
    IDENFR L_ConstExps_R ASSIGN ConstInitVal
    {

    }
    ;

/* 若干个 [ ConstExp ] */
L_ConstExps_R:
    {

    }
    | LBRACK ConstExp RBRACK L_ConstExps_R
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
    BType VarDef VarDefs SEMICN
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
    FuncType IDENFR LBRACE RBRACE Block
    {

    }
    | FuncType IDENFR LBRACE FuncFParam FuncFParams RBRACE Block
    {

    }
    ;

FuncType:
    VOIDTK
    {

    }
    | INTTK
    {

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
    BType IDENFR
    {

    }
    | BType IDENFR LBRACK RBRACK L_ConstExps_R
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
    | Exp SEMICN
    {

    }
    | SEMICN
    {

    }
    | Block
    {

    }
    | IFTK LPARENT Cond RPARENT Stmt ELSETK Stmt
    {

    }
    | IFTK LPARENT Cond RPARENT Stmt
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
    | LBRACK Exp RBRACK L_Exps_R
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

Exp:
    AddExp
    ;
%%

int yywrap(){
    return 1;
}
extern void scan_string(const char *str, yyscan_t scanner);

int SysY_parse(const char* parse_string)
{
    yyscan_t scanner;
    yylex_init(&scanner);
    scan_string(parse_string, scanner);
    int result = yyparse(parse_string, scanner);
    yylex_destroy(scanner);
    return result;
}