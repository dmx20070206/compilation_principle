%top{
#include <stdio.h>
FILE *out;
FILE *in;
}

%{
#define RETURN_TOKEN(token) return token;
#define MAINTK            1
#define WHILETK           2
#define CONSTTK           3
#define GETINTTK          4
#define PRINTFTK          5
#define BREAKTK           6
#define RETURNTK          7
#define CONTINUETK        8
#define IFTK              9
#define ELSETK            10
#define VOIDTK            11
#define IDENFR            12
#define INTTK             13
#define STRCON            14
#define NOT               15
#define MULT              16
#define PLUS              17
#define MINU              18
#define DIV               19
#define MOD               20
#define AND               21
#define OR                22
#define EQL               23
#define NEQ               24
#define LEQ               25
#define GEQ               26
#define LSS               27
#define GRE               28
#define ASSIGN            29
#define SEMICN            30
#define COMMA             31
#define LPARENT           32
#define RPARENT           33
#define LBRACK            34
#define RBRACK            35
#define LBRACE            36
#define RBRACE            37
#define INTCON            38
#define ERROR             39
#define SPACE             40
%}

%%
"main"                    { fprintf(out, "MAINTK %s\n", yytext);     RETURN_TOKEN(MAINTK);     }
"while"                   { fprintf(out, "WHILETK %s\n", yytext);    RETURN_TOKEN(WHILETK);    }
"const"                   { fprintf(out, "CONSTTK %s\n", yytext);    RETURN_TOKEN(CONSTTK);    }
"getint"                  { fprintf(out, "GETINTTK %s\n", yytext);   RETURN_TOKEN(GETINTTK);   }
"printf"                  { fprintf(out, "PRINTFTK %s\n", yytext);   RETURN_TOKEN(PRINTFTK);   }
"break"                   { fprintf(out, "BREAKTK %s\n", yytext);    RETURN_TOKEN(BREAKTK);    }
"return"                  { fprintf(out, "RETURNTK %s\n", yytext);   RETURN_TOKEN(RETURNTK);   }
"continue"                { fprintf(out, "CONTINUETK %s\n", yytext); RETURN_TOKEN(CONTINUETK); }
"if"                      { fprintf(out, "IFTK %s\n", yytext);       RETURN_TOKEN(IFTK);       }
"else"                    { fprintf(out, "ELSETK %s\n", yytext);     RETURN_TOKEN(ELSETK);     }
"void"                    { fprintf(out, "VOIDTK %s\n", yytext);     RETURN_TOKEN(VOIDTK);     }
"int"                     { fprintf(out, "INTTK %s\n", yytext);      RETURN_TOKEN(INTTK);      }


[a-zA-Z_][a-zA-Z0-9_]*    { fprintf(out, "IDENFR %s\n", yytext);     RETURN_TOKEN(IDENFR);     }
[0-9]+                    { fprintf(out, "INTCON %s\n", yytext);     RETURN_TOKEN(INTCON);     }
\"([^\\\"]|\\.)*\"        { fprintf(out, "STRCON %s\n", yytext);     RETURN_TOKEN(STRCON);     }

"\!"                      { fprintf(out, "NOT %s\n", yytext);        RETURN_TOKEN(NOT);        }
"\*"                      { fprintf(out, "MULT %s\n", yytext);       RETURN_TOKEN(MULT);       }
"\+"                      { fprintf(out, "PLUS %s\n", yytext);       RETURN_TOKEN(PLUS);       }
"-"                       { fprintf(out, "MINU %s\n", yytext);       RETURN_TOKEN(MINU);       }
"/"                       { fprintf(out, "DIV %s\n", yytext);        RETURN_TOKEN(DIV);        }
"%"                       { fprintf(out, "MOD %s\n", yytext);        RETURN_TOKEN(MOD);        }
"&&"                      { fprintf(out, "AND %s\n", yytext);        RETURN_TOKEN(AND);        }
"||"                      { fprintf(out, "OR %s\n", yytext);         RETURN_TOKEN(OR);         }
"=="                      { fprintf(out, "EQL %s\n", yytext);        RETURN_TOKEN(EQL);        }
"!="                      { fprintf(out, "NEQ %s\n", yytext);        RETURN_TOKEN(NEQ);        }
"<="                      { fprintf(out, "LEQ %s\n", yytext);        RETURN_TOKEN(LEQ);        }
">="                      { fprintf(out, "GEQ %s\n", yytext);        RETURN_TOKEN(GEQ);        }
"<"                       { fprintf(out, "LSS %s\n", yytext);        RETURN_TOKEN(LSS);        }
">"                       { fprintf(out, "GRE %s\n", yytext);        RETURN_TOKEN(GRE);        }

"="                       { fprintf(out, "ASSIGN %s\n", yytext);    RETURN_TOKEN(ASSIGN);      }
";"                       { fprintf(out, "SEMICN %s\n", yytext);    RETURN_TOKEN(SEMICN);      }
","                       { fprintf(out, "COMMA %s\n", yytext);     RETURN_TOKEN(COMMA);       } 
"\("                      { fprintf(out, "LPARENT %s\n", yytext);   RETURN_TOKEN(LPARENT);     }
"\)"                      { fprintf(out, "RPARENT %s\n", yytext);   RETURN_TOKEN(RPARENT);     }
"\["                      { fprintf(out, "LBRACK %s\n", yytext);    RETURN_TOKEN(LBRACK);      }
"\]"                      { fprintf(out, "RBRACK %s\n", yytext);    RETURN_TOKEN(RBRACK);      }
"\{"                      { fprintf(out, "LBRACE %s\n", yytext);    RETURN_TOKEN(LBRACE);      }
"\}"                      { fprintf(out, "RBRACE %s\n", yytext);    RETURN_TOKEN(RBRACE);      }

[ \t\n]                   {                                                              }
.                         { fprintf(out, "RBRACE %s\n", yytext);    RETURN_TOKEN(ERROR);       }

%%
int main()
{
    in = fopen("./input/testfile.txt", "r");
    out = fopen("./output/output.txt", "w");
    yyin = in;
    yyout = out;

    int token;
    while ((token = yylex()) != 0);

    return 0;
}