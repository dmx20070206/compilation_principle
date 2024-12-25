%top{
#include <string.h>
#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <fstream>
using namespace std;

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
#include "../yacc/dmx_yacc.hpp"

unordered_map<int, char *> token_map = {
    {258, (char *)"IFTK "},                    // IFTK
    {259, (char *)"ELSETK "},                  // ELSETK
    {260, (char *)"WHILETK "},                 // WHILETK
    {261, (char *)"CONSTTK "},                 // CONSTTK
    {262, (char *)"GETINTTK "},                // GETINTTK
    {263, (char *)"PRINTFTK "},                // PRINTFTK
    {264, (char *)"BREAKTK "},                 // BREAKTK
    {265, (char *)"RETURNTK "},                // RETURNTK
    {266, (char *)"CONTINUETK "},              // CONTINUETK
    {267, (char *)"IDENFR "},                  // IDENFR
    {268, (char *)"STRCON "},                  // STRCON
    {269, (char *)"NOT "},                     // NOT
    {270, (char *)"AND "},                     // AND
    {271, (char *)"OR "},                      // OR
    {272, (char *)"EQL "},                     // EQL
    {273, (char *)"NEQ "},                     // NEQ
    {274, (char *)"LEQ "},                     // LEQ
    {275, (char *)"GEQ "},                     // GEQ
    {276, (char *)"LSS "},                     // LSS
    {277, (char *)"GRE "},                     // GRE
    {278, (char *)"ASSIGN "},                  // ASSIGN
    {279, (char *)"SEMICN "},                  // SEMICN
    {280, (char *)"COMMA "},                   // COMMA
    {281, (char *)"LPARENT "},                 // LPARENT
    {282, (char *)"RPARENT "},                 // RPARENT
    {283, (char *)"LBRACE "},                  // LBRACE
    {284, (char *)"RBRACE "},                  // RBRACE
    {285, (char *)"LBRACK "},                  // LBRACK
    {286, (char *)"RBRACK "},                  // RBRACK
    {287, (char *)"INTCON "},                  // INTCON
    {288, (char *)"PLUS "},                    // PLUS
    {289, (char *)"MINU "},                    // MINU
    {290, (char *)"MULT "},                    // MULT
    {291, (char *)"DIV "},                     // DIV
    {292, (char *)"MOD "},                     // MOD
    {293, (char *)"TYPETK "},                  // TYPETK
    {294, (char *)"MAINTK "},                  // TYPETK
    {295, (char *)"ERROR "}                    // ERROR
};

extern ofstream output_file;

void output(int token, char *text) 
{
    char *temp = nullptr;

    // TYPETK 的特殊判断
    if(strcmp((char *)token_map[token], (char *)"TYPETK ") == 0)
    {
        temp = strcmp((char *)"int", text) == 0 ? strdup((char *)"INTTK ") : strdup((char *)"VOIDTK ");
    }
    else
    {
        temp = strdup((char *)token_map[token]); 
    }
    output_file << temp << text << "\n";
    strcat(temp, text); 
    printf("%s\n", temp);
    delete[] temp;
}

#define RETURN_TOKEN(token) return token;
%}

%%
"while"                            { output(WHILETK, yytext);    RETURN_TOKEN(WHILETK);    }
"const"                            { output(CONSTTK, yytext);    RETURN_TOKEN(CONSTTK);    }
"getint"                           { output(GETINTTK, yytext);   RETURN_TOKEN(GETINTTK);   }
"printf"                           { output(PRINTFTK, yytext);   RETURN_TOKEN(PRINTFTK);   }
"break"                            { output(BREAKTK, yytext);    RETURN_TOKEN(BREAKTK);    }
"return"                           { output(RETURNTK, yytext);   RETURN_TOKEN(RETURNTK);   }
"continue"                         { output(CONTINUETK, yytext); RETURN_TOKEN(CONTINUETK); }
"if"                               { output(IFTK, yytext);       RETURN_TOKEN(IFTK);       }
"else"                             { output(ELSETK, yytext);     RETURN_TOKEN(ELSETK);     }
"void"                             { output(TYPETK, yytext);     RETURN_TOKEN(TYPETK);     }
"int"                              { output(TYPETK, yytext);     RETURN_TOKEN(TYPETK);     }
"main"                             { output(MAINTK, yytext);     RETURN_TOKEN(MAINTK);     }    
"/*"[^*]*"*"+([^*/][^*]*"*"+)*"/"  
"//".*                             

[a-zA-Z_][a-zA-Z0-9_]*             { output(IDENFR, yytext);     RETURN_TOKEN(IDENFR);     }
[0-9]+                             { output(INTCON, yytext);     RETURN_TOKEN(INTCON);     }
\"([^\\\"]|\\.)*\"                 { output(STRCON, yytext);     RETURN_TOKEN(STRCON);     }

"!"                                { output(NOT, yytext);        RETURN_TOKEN(NOT);        }
"*"                                { output(MULT, yytext);       RETURN_TOKEN(MULT);       }
"+"                                { output(PLUS, yytext);       RETURN_TOKEN(PLUS);       }
"-"                                { output(MINU, yytext);       RETURN_TOKEN(MINU);       }
"/"                                { output(DIV, yytext);        RETURN_TOKEN(DIV);        }
"%"                                { output(MOD, yytext);        RETURN_TOKEN(MOD);        }
"&&"                               { output(AND, yytext);        RETURN_TOKEN(AND);        }
"||"                               { output(OR, yytext);         RETURN_TOKEN(OR);         }
"=="                               { output(EQL, yytext);        RETURN_TOKEN(EQL);        }
"!="                               { output(NEQ, yytext);        RETURN_TOKEN(NEQ);        }
"<="                               { output(LEQ, yytext);        RETURN_TOKEN(LEQ);        }
">="                               { output(GEQ, yytext);        RETURN_TOKEN(GEQ);        }
"<"                                { output(LSS, yytext);        RETURN_TOKEN(LSS);        }
">"                                { output(GRE, yytext);        RETURN_TOKEN(GRE);        }

"="                                { output(ASSIGN, yytext);     RETURN_TOKEN(ASSIGN);     }
";"                                { output(SEMICN, yytext);     RETURN_TOKEN(SEMICN);     }
","                                { output(COMMA, yytext);      RETURN_TOKEN(COMMA);      } 
"("                                { output(LPARENT, yytext);    RETURN_TOKEN(LPARENT);    }
")"                                { output(RPARENT, yytext);    RETURN_TOKEN(RPARENT);    }
"["                                { output(LBRACK, yytext);     RETURN_TOKEN(LBRACK);     }
"]"                                { output(RBRACK, yytext);     RETURN_TOKEN(RBRACK);     }
"{"                                { output(LBRACE, yytext);     RETURN_TOKEN(LBRACE);     }
"}"                                { output(RBRACE, yytext);     RETURN_TOKEN(RBRACE);     }

[\ \t\n\b\f]                       
.                                 

%%
void scan_string(const char *str, yyscan_t scanner)
{
    yy_switch_to_buffer(yy_scan_string(str, scanner), scanner);
}