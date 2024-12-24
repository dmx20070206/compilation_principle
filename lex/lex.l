%top{
#define YY_TYPEDEF_YY_SIZE_T
typedef int yy_size_t;
#define YY_USER_INIT                                         \
  yycolumn = 0;
#define YY_USER_ACTION                                       \
do {                                                         \
  yylloc->first_line   = yylloc->last_line = yylineno;       \
  yylloc->first_column = yycolumn;                           \
  yylloc->last_column  = yylloc->first_column + yyleng - 1;  \
  yycolumn += yyleng;                                        \
}                                                            \
while (0);
}

/* 词法分析器的基础设置 */
/* Prevent the need for linking with -lfl */
%option noyywrap
%option nounput
%option noinput
/* 与yacc的接口,生成与 Bison 的纯解析器(pure parser)兼容的代码 */
%option bison-bridge   
%option reentrant
/* 支持位置跟踪 */
%option bison-locations

%{
#include <string.h>
#include <stdio.h>

#ifndef register
#define register 
#endif // register

#include "../yacc/dmx_yacc.hpp"

#define RETURN_TOKEN(token) printf("%s ", yytext); return token;
%}

%%
"while"                            { RETURN_TOKEN(WHILETK);    }
"const"                            { RETURN_TOKEN(CONSTTK);    }
"getint"                           { RETURN_TOKEN(GETINTTK);   }
"printf"                           { RETURN_TOKEN(PRINTFTK);   }
"break"                            { RETURN_TOKEN(BREAKTK);    }
"return"                           { RETURN_TOKEN(RETURNTK);   }
"continue"                         { RETURN_TOKEN(CONTINUETK); }
"if"                               { RETURN_TOKEN(IFTK);       }
"else"                             { RETURN_TOKEN(ELSETK);     }
"void"                             { RETURN_TOKEN(TYPETK);     }
"int"                              { RETURN_TOKEN(TYPETK);     }
"/*"[^*]*"*"+([^*/][^*]*"*"+)*"/"  
"//".*                             

[a-zA-Z_][a-zA-Z0-9_]*             { RETURN_TOKEN(IDENFR);     }
[0-9]+                             { RETURN_TOKEN(INTCON);     }
\"([^\\\"]|\\.)*\"                 { RETURN_TOKEN(STRCON);     }

"!"                                { RETURN_TOKEN(NOT);        }
"*"                                { RETURN_TOKEN(MULT);       }
"+"                                { RETURN_TOKEN(PLUS);       }
"-"                                { RETURN_TOKEN(MINU);       }
"/"                                { RETURN_TOKEN(DIV);        }
"%"                                { RETURN_TOKEN(MOD);        }
"&&"                               { RETURN_TOKEN(AND);        }
"||"                               { RETURN_TOKEN(OR);         }
"=="                               { RETURN_TOKEN(EQL);        }
"!="                               { RETURN_TOKEN(NEQ);        }
"<="                               { RETURN_TOKEN(LEQ);        }
">="                               { RETURN_TOKEN(GEQ);        }
"<"                                { RETURN_TOKEN(LSS);        }
">"                                { RETURN_TOKEN(GRE);        }

"="                                { RETURN_TOKEN(ASSIGN);     }
";"                                { RETURN_TOKEN(SEMICN);     }
","                                { RETURN_TOKEN(COMMA);      } 
"("                                { RETURN_TOKEN(LPARENT);    }
")"                                { RETURN_TOKEN(RPARENT);    }
"["                                { RETURN_TOKEN(LBRACK);     }
"]"                                { RETURN_TOKEN(RBRACK);     }
"{"                                { RETURN_TOKEN(LBRACE);     }
"}"                                { RETURN_TOKEN(RBRACE);     }

[\ \t\n\b\f]                       
.                                  { RETURN_TOKEN(ERROR);      }

%%
void scan_string(const char *str, yyscan_t scanner)
{
    yy_switch_to_buffer(yy_scan_string(str, scanner), scanner);
}