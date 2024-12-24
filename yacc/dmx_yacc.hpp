/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_YACC_DMX_YACC_HPP_INCLUDED
# define YY_YY_YACC_DMX_YACC_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IFTK = 258,                    /* IFTK  */
    ELSETK = 259,                  /* ELSETK  */
    WHILETK = 260,                 /* WHILETK  */
    CONSTTK = 261,                 /* CONSTTK  */
    GETINTTK = 262,                /* GETINTTK  */
    PRINTFTK = 263,                /* PRINTFTK  */
    BREAKTK = 264,                 /* BREAKTK  */
    RETURNTK = 265,                /* RETURNTK  */
    CONTINUETK = 266,              /* CONTINUETK  */
    IDENFR = 267,                  /* IDENFR  */
    STRCON = 268,                  /* STRCON  */
    NOT = 269,                     /* NOT  */
    AND = 270,                     /* AND  */
    OR = 271,                      /* OR  */
    EQL = 272,                     /* EQL  */
    NEQ = 273,                     /* NEQ  */
    LEQ = 274,                     /* LEQ  */
    GEQ = 275,                     /* GEQ  */
    LSS = 276,                     /* LSS  */
    GRE = 277,                     /* GRE  */
    ASSIGN = 278,                  /* ASSIGN  */
    SEMICN = 279,                  /* SEMICN  */
    COMMA = 280,                   /* COMMA  */
    LPARENT = 281,                 /* LPARENT  */
    RPARENT = 282,                 /* RPARENT  */
    LBRACE = 283,                  /* LBRACE  */
    RBRACE = 284,                  /* RBRACE  */
    LBRACK = 285,                  /* LBRACK  */
    RBRACK = 286,                  /* RBRACK  */
    INTCON = 287,                  /* INTCON  */
    PLUS = 288,                    /* PLUS  */
    MINU = 289,                    /* MINU  */
    MULT = 290,                    /* MULT  */
    DIV = 291,                     /* DIV  */
    MOD = 292,                     /* MOD  */
    TYPETK = 293,                  /* TYPETK  */
    ERROR = 294                    /* ERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int yyparse (const char * parse_string, void * scanner);


#endif /* !YY_YY_YACC_DMX_YACC_HPP_INCLUDED  */
