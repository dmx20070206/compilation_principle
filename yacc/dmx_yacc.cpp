/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yacc/yacc.y"

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

#line 105 "yacc/dmx_yacc.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "dmx_yacc.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IFTK = 3,                       /* IFTK  */
  YYSYMBOL_ELSETK = 4,                     /* ELSETK  */
  YYSYMBOL_WHILETK = 5,                    /* WHILETK  */
  YYSYMBOL_CONSTTK = 6,                    /* CONSTTK  */
  YYSYMBOL_GETINTTK = 7,                   /* GETINTTK  */
  YYSYMBOL_PRINTFTK = 8,                   /* PRINTFTK  */
  YYSYMBOL_BREAKTK = 9,                    /* BREAKTK  */
  YYSYMBOL_RETURNTK = 10,                  /* RETURNTK  */
  YYSYMBOL_CONTINUETK = 11,                /* CONTINUETK  */
  YYSYMBOL_IDENFR = 12,                    /* IDENFR  */
  YYSYMBOL_STRCON = 13,                    /* STRCON  */
  YYSYMBOL_NOT = 14,                       /* NOT  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_EQL = 17,                       /* EQL  */
  YYSYMBOL_NEQ = 18,                       /* NEQ  */
  YYSYMBOL_LEQ = 19,                       /* LEQ  */
  YYSYMBOL_GEQ = 20,                       /* GEQ  */
  YYSYMBOL_LSS = 21,                       /* LSS  */
  YYSYMBOL_GRE = 22,                       /* GRE  */
  YYSYMBOL_ASSIGN = 23,                    /* ASSIGN  */
  YYSYMBOL_SEMICN = 24,                    /* SEMICN  */
  YYSYMBOL_COMMA = 25,                     /* COMMA  */
  YYSYMBOL_LPARENT = 26,                   /* LPARENT  */
  YYSYMBOL_RPARENT = 27,                   /* RPARENT  */
  YYSYMBOL_LBRACE = 28,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 29,                    /* RBRACE  */
  YYSYMBOL_LBRACK = 30,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 31,                    /* RBRACK  */
  YYSYMBOL_INTCON = 32,                    /* INTCON  */
  YYSYMBOL_PLUS = 33,                      /* PLUS  */
  YYSYMBOL_MINU = 34,                      /* MINU  */
  YYSYMBOL_MULT = 35,                      /* MULT  */
  YYSYMBOL_DIV = 36,                       /* DIV  */
  YYSYMBOL_MOD = 37,                       /* MOD  */
  YYSYMBOL_TYPETK = 38,                    /* TYPETK  */
  YYSYMBOL_MAINTK = 39,                    /* MAINTK  */
  YYSYMBOL_ERROR = 40,                     /* ERROR  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_CompUnit = 42,                  /* CompUnit  */
  YYSYMBOL_CompUnitList = 43,              /* CompUnitList  */
  YYSYMBOL_CompUnitItem = 44,              /* CompUnitItem  */
  YYSYMBOL_Decl = 45,                      /* Decl  */
  YYSYMBOL_ConstDecl = 46,                 /* ConstDecl  */
  YYSYMBOL_ConstDefs = 47,                 /* ConstDefs  */
  YYSYMBOL_ConstDef = 48,                  /* ConstDef  */
  YYSYMBOL_L_ConstExps_R = 49,             /* L_ConstExps_R  */
  YYSYMBOL_ConstInitVal = 50,              /* ConstInitVal  */
  YYSYMBOL_ConstInitVals = 51,             /* ConstInitVals  */
  YYSYMBOL_VarDecl = 52,                   /* VarDecl  */
  YYSYMBOL_VarDefs = 53,                   /* VarDefs  */
  YYSYMBOL_VarDef = 54,                    /* VarDef  */
  YYSYMBOL_InitVal = 55,                   /* InitVal  */
  YYSYMBOL_InitVals = 56,                  /* InitVals  */
  YYSYMBOL_FuncDef = 57,                   /* FuncDef  */
  YYSYMBOL_FuncFParams = 58,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 59,                /* FuncFParam  */
  YYSYMBOL_Block = 60,                     /* Block  */
  YYSYMBOL_BlockItem = 61,                 /* BlockItem  */
  YYSYMBOL_BlockItems = 62,                /* BlockItems  */
  YYSYMBOL_Stmt = 63,                      /* Stmt  */
  YYSYMBOL_Exps = 64,                      /* Exps  */
  YYSYMBOL_Exp = 65,                       /* Exp  */
  YYSYMBOL_Cond = 66,                      /* Cond  */
  YYSYMBOL_LVal = 67,                      /* LVal  */
  YYSYMBOL_L_Exps_R = 68,                  /* L_Exps_R  */
  YYSYMBOL_PrimaryExp = 69,                /* PrimaryExp  */
  YYSYMBOL_Number = 70,                    /* Number  */
  YYSYMBOL_UnaryExp = 71,                  /* UnaryExp  */
  YYSYMBOL_UnaryOp = 72,                   /* UnaryOp  */
  YYSYMBOL_FuncRParams = 73,               /* FuncRParams  */
  YYSYMBOL_MulExp = 74,                    /* MulExp  */
  YYSYMBOL_AddExp = 75,                    /* AddExp  */
  YYSYMBOL_RelExp = 76,                    /* RelExp  */
  YYSYMBOL_EqExp = 77,                     /* EqExp  */
  YYSYMBOL_LAndExp = 78,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 79,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 80                   /* ConstExp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   229

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    87,    87,    97,    98,   102,   103,   108,   109,   114,
     124,   125,   130,   140,   141,   146,   153,   160,   170,   171,
     176,   186,   187,   192,   199,   209,   216,   223,   232,   233,
     238,   245,   252,   259,   268,   269,   279,   286,   296,   306,
     307,   310,   311,   315,   322,   329,   336,   343,   350,   357,
     364,   371,   378,   385,   392,   399,   408,   409,   413,   423,
     433,   442,   443,   447,   454,   461,   471,   481,   488,   495,
     502,   511,   518,   525,   535,   545,   552,   559,   566,   576,
     583,   590,   600,   607,   614,   621,   628,   638,   645,   652,
     662,   669,   679,   686,   696
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IFTK", "ELSETK",
  "WHILETK", "CONSTTK", "GETINTTK", "PRINTFTK", "BREAKTK", "RETURNTK",
  "CONTINUETK", "IDENFR", "STRCON", "NOT", "AND", "OR", "EQL", "NEQ",
  "LEQ", "GEQ", "LSS", "GRE", "ASSIGN", "SEMICN", "COMMA", "LPARENT",
  "RPARENT", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "INTCON", "PLUS",
  "MINU", "MULT", "DIV", "MOD", "TYPETK", "MAINTK", "ERROR", "$accept",
  "CompUnit", "CompUnitList", "CompUnitItem", "Decl", "ConstDecl",
  "ConstDefs", "ConstDef", "L_ConstExps_R", "ConstInitVal",
  "ConstInitVals", "VarDecl", "VarDefs", "VarDef", "InitVal", "InitVals",
  "FuncDef", "FuncFParams", "FuncFParam", "Block", "BlockItem",
  "BlockItems", "Stmt", "Exps", "Exp", "Cond", "LVal", "L_Exps_R",
  "PrimaryExp", "Number", "UnaryExp", "UnaryOp", "FuncRParams", "MulExp",
  "AddExp", "RelExp", "EqExp", "LAndExp", "LOrExp", "ConstExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-140)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,     0,     6,    32,  -140,     5,  -140,  -140,  -140,  -140,
      29,    18,    22,    42,  -140,  -140,  -140,    44,   -11,    -6,
      -4,    67,    57,    -1,    29,    60,    62,    84,    72,   164,
     191,    62,    72,  -140,    42,  -140,   174,    44,  -140,   129,
    -140,    68,    61,    75,    78,  -140,   191,    54,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,   191,    27,    -8,
      -8,    86,  -140,    91,  -140,    77,  -140,  -140,  -140,    93,
      94,    96,   107,   187,   109,  -140,    67,  -140,  -140,   129,
     115,  -140,   112,   122,   116,    72,    62,    81,   118,   119,
    -140,   124,  -140,   191,   191,   191,   191,   191,  -140,    62,
    -140,   125,   191,   191,   138,  -140,  -140,   128,  -140,  -140,
    -140,  -140,    21,  -140,  -140,  -140,  -140,   131,   127,   191,
    -140,   164,   130,  -140,  -140,  -140,    27,    27,  -140,   174,
     136,   133,    -8,    37,    13,   143,   152,   147,   131,  -140,
     151,   155,   150,   191,  -140,  -140,   153,   124,  -140,   125,
    -140,   161,   191,   191,   191,   191,   191,   191,   191,   191,
     161,   154,   156,  -140,   131,  -140,  -140,  -140,   178,    -8,
      -8,    -8,    -8,    37,    37,    13,   143,  -140,   167,   180,
    -140,   161,  -140,  -140,  -140
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     5,     7,     8,     6,
       0,    13,     0,    21,     1,     4,    13,    10,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,    34,    13,    21,    20,     0,    10,     9,    41,
      30,    36,     0,     0,    61,    73,     0,     0,    66,    71,
      72,    24,    25,    64,    67,    65,    75,     0,    79,    58,
      94,     0,    32,     0,    22,     0,    12,    15,    11,     0,
       0,     0,     0,     0,     0,    44,     0,    39,    46,    41,
       0,    40,     0,    64,     0,    34,     0,     0,    60,     0,
      26,    28,    70,     0,     0,     0,     0,     0,    14,     0,
      16,    18,     0,     0,     0,    50,    52,     0,    51,    42,
      38,    45,     0,    13,    35,    31,    68,    56,     0,     0,
      63,     0,     0,    76,    77,    78,    80,    81,    33,     0,
       0,     0,    82,    87,    90,    92,    59,     0,    56,    53,
       0,     0,    37,     0,    74,    69,     0,    28,    27,    18,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    56,    62,    29,    19,    48,    85,
      86,    83,    84,    88,    89,    91,    93,    49,     0,     0,
      57,     0,    55,    54,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,   204,  -140,   -30,  -140,   173,   188,   -12,   -59,
      65,  -140,   181,   195,   -44,    71,  -140,   -24,    -5,   -21,
    -140,   148,  -139,  -125,   -27,   123,   -39,  -140,  -140,  -140,
     -43,  -140,  -140,   -25,   -29,   -81,    64,    69,  -140,   199
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,     7,    25,    17,    19,    66,
     130,     8,    22,    13,    51,   122,     9,    43,    28,    78,
      79,    80,    81,   144,    82,   131,    53,    88,    54,    55,
      56,    57,   118,    58,    59,   133,   134,   135,   136,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      83,    60,    52,    91,    23,    40,   101,    60,    63,    77,
      62,     1,   168,   161,    92,    32,    26,    29,    11,    89,
      52,   177,    36,    31,    30,    96,    97,    27,   140,    30,
     156,   157,    14,    44,    27,    45,    60,    85,    10,   180,
      83,    16,   184,     2,    18,    12,   107,    46,    20,    77,
     123,   124,   125,    48,    49,    50,   152,   153,   154,   155,
     117,   114,    93,    94,    95,   115,    44,    21,    45,    24,
     149,   126,   127,   132,   132,   173,   174,   147,   128,    33,
      46,    35,    47,    90,    38,   141,    48,    49,    50,    44,
      39,    45,   146,    44,    52,    45,    41,    42,    84,    27,
      60,   142,    86,    46,    87,    65,   100,    46,   116,    48,
      49,    50,    83,    48,    49,    50,   164,    98,    99,   102,
     103,    83,   104,   169,   170,   171,   172,   132,   132,   132,
     132,   105,    69,   108,    70,     1,   111,    71,    72,    73,
      74,    44,    83,    45,   110,   112,   120,   113,   119,   121,
     129,   138,   139,    75,   145,    46,   143,    39,   158,   148,
     151,    48,    49,    50,    69,   150,    70,    76,   159,    71,
      72,    73,    74,    44,   160,    45,    44,   162,    45,   163,
      30,   178,   181,   179,   165,    75,    44,    46,    45,    39,
      46,   182,    47,    48,    49,    50,    48,    49,    50,    44,
      46,    45,    65,    44,   183,    45,    48,    49,    50,    15,
      68,   106,    37,    46,   167,    64,    34,    46,   166,    48,
      49,    50,   175,    48,    49,    50,   137,   109,   176,    61
};

static const yytype_uint8 yycheck[] =
{
      39,    30,    29,    47,    16,    26,    65,    36,    32,    39,
      31,     6,   151,   138,    57,    20,    27,    23,    12,    46,
      47,   160,    23,    27,    30,    33,    34,    38,     7,    30,
      17,    18,     0,    12,    38,    14,    65,    42,    38,   164,
      79,    12,   181,    38,    26,    39,    73,    26,    26,    79,
      93,    94,    95,    32,    33,    34,    19,    20,    21,    22,
      87,    85,    35,    36,    37,    86,    12,    25,    14,    25,
     129,    96,    97,   102,   103,   156,   157,   121,    99,    12,
      26,    24,    28,    29,    24,   112,    32,    33,    34,    12,
      28,    14,   119,    12,   121,    14,    12,    25,    30,    38,
     129,   113,    27,    26,    26,    28,    29,    26,    27,    32,
      33,    34,   151,    32,    33,    34,   143,    31,    27,    26,
      26,   160,    26,   152,   153,   154,   155,   156,   157,   158,
     159,    24,     3,    24,     5,     6,    24,     8,     9,    10,
      11,    12,   181,    14,    29,    23,    27,    31,    30,    25,
      25,    13,    24,    24,    27,    26,    25,    28,    15,    29,
      27,    32,    33,    34,     3,    29,     5,    38,    16,     8,
       9,    10,    11,    12,    27,    14,    12,    26,    14,    24,
      30,    27,     4,    27,    31,    24,    12,    26,    14,    28,
      26,    24,    28,    32,    33,    34,    32,    33,    34,    12,
      26,    14,    28,    12,    24,    14,    32,    33,    34,     5,
      37,    24,    24,    26,   149,    34,    21,    26,   147,    32,
      33,    34,   158,    32,    33,    34,   103,    79,   159,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    38,    42,    43,    44,    45,    46,    52,    57,
      38,    12,    39,    54,     0,    43,    12,    48,    26,    49,
      26,    25,    53,    49,    25,    47,    27,    38,    59,    23,
      30,    27,    59,    12,    54,    24,    23,    48,    24,    28,
      60,    12,    25,    58,    12,    14,    26,    28,    32,    33,
      34,    55,    65,    67,    69,    70,    71,    72,    74,    75,
      75,    80,    60,    58,    53,    28,    50,    80,    47,     3,
       5,     8,     9,    10,    11,    24,    38,    45,    60,    61,
      62,    63,    65,    67,    30,    59,    27,    26,    68,    65,
      29,    55,    71,    35,    36,    37,    33,    34,    31,    27,
      29,    50,    26,    26,    26,    24,    24,    65,    24,    62,
      29,    24,    23,    31,    58,    60,    27,    65,    73,    30,
      27,    25,    56,    71,    71,    71,    74,    74,    60,    25,
      51,    66,    75,    76,    77,    78,    79,    66,    13,    24,
       7,    65,    49,    25,    64,    27,    65,    55,    29,    50,
      29,    27,    19,    20,    21,    22,    17,    18,    15,    16,
      27,    64,    26,    24,    65,    31,    56,    51,    63,    75,
      75,    75,    75,    76,    76,    77,    78,    63,    27,    27,
      64,     4,    24,    24,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      47,    47,    48,    49,    49,    50,    50,    50,    51,    51,
      52,    53,    53,    54,    54,    55,    55,    55,    56,    56,
      57,    57,    57,    57,    58,    58,    59,    59,    60,    61,
      61,    62,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    65,    66,
      67,    68,    68,    69,    69,    69,    70,    71,    71,    71,
      71,    72,    72,    72,    73,    74,    74,    74,    74,    75,
      75,    75,    76,    76,    76,    76,    76,    77,    77,    77,
      78,    78,    79,    79,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     5,
       0,     3,     4,     0,     4,     1,     2,     4,     0,     3,
       4,     0,     3,     2,     4,     1,     2,     4,     0,     3,
       5,     7,     5,     7,     0,     3,     2,     5,     3,     1,
       1,     0,     2,     4,     1,     2,     1,     7,     5,     5,
       2,     2,     2,     3,     6,     6,     0,     3,     1,     1,
       2,     0,     4,     3,     1,     1,     1,     1,     3,     4,
       2,     1,     1,     1,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, parse_string, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, parse_string, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, const char * parse_string, void * scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (parse_string);
  YY_USE (scanner);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, const char * parse_string, void * scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, parse_string, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, const char * parse_string, void * scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), parse_string, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, parse_string, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, const char * parse_string, void * scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (parse_string);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (const char * parse_string, void * scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* CompUnit: CompUnitList  */
#line 88 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";  
        output_file << "<CompUnit>" << "\n";
        printf("%s\n", "<CompUnit>");
    }
#line 1708 "yacc/dmx_yacc.cpp"
    break;

  case 9: /* ConstDecl: CONSTTK TYPETK ConstDef ConstDefs SEMICN  */
#line 115 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstDecl>" << "\n";
        printf("%s\n", "<ConstDecl>");
    }
#line 1719 "yacc/dmx_yacc.cpp"
    break;

  case 12: /* ConstDef: IDENFR L_ConstExps_R ASSIGN ConstInitVal  */
#line 131 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstDef>" << "\n";
        printf("%s\n", "<ConstDef>");
    }
#line 1730 "yacc/dmx_yacc.cpp"
    break;

  case 15: /* ConstInitVal: ConstExp  */
#line 147 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstInitVal>" << "\n";
        printf("%s\n", "<ConstInitVal>");
    }
#line 1741 "yacc/dmx_yacc.cpp"
    break;

  case 16: /* ConstInitVal: LBRACE RBRACE  */
#line 154 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstInitVal>" << "\n";
        printf("%s\n", "<ConstInitVal>");
    }
#line 1752 "yacc/dmx_yacc.cpp"
    break;

  case 17: /* ConstInitVal: LBRACE ConstInitVal ConstInitVals RBRACE  */
#line 161 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstInitVal>" << "\n";
        printf("%s\n", "<ConstInitVal>");
    }
#line 1763 "yacc/dmx_yacc.cpp"
    break;

  case 20: /* VarDecl: TYPETK VarDef VarDefs SEMICN  */
#line 177 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<VarDecl>" << "\n";
        printf("%s\n", "<VarDecl>");
    }
#line 1774 "yacc/dmx_yacc.cpp"
    break;

  case 23: /* VarDef: IDENFR L_ConstExps_R  */
#line 193 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<VarDef>" << "\n";
        printf("%s\n", "<VarDef>");
    }
#line 1785 "yacc/dmx_yacc.cpp"
    break;

  case 24: /* VarDef: IDENFR L_ConstExps_R ASSIGN InitVal  */
#line 200 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<VarDef>" << "\n";
        printf("%s\n", "<VarDef>");
    }
#line 1796 "yacc/dmx_yacc.cpp"
    break;

  case 25: /* InitVal: Exp  */
#line 210 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<InitVal>" << "\n";
        printf("%s\n", "<InitVal>");
    }
#line 1807 "yacc/dmx_yacc.cpp"
    break;

  case 26: /* InitVal: LBRACE RBRACE  */
#line 217 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<InitVal>" << "\n";
        printf("%s\n", "<InitVal>");
    }
#line 1818 "yacc/dmx_yacc.cpp"
    break;

  case 27: /* InitVal: LBRACE InitVal InitVals RBRACE  */
#line 224 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<InitVal>" << "\n";
        printf("%s\n", "<InitVal>");
    }
#line 1829 "yacc/dmx_yacc.cpp"
    break;

  case 30: /* FuncDef: TYPETK IDENFR LPARENT RPARENT Block  */
#line 239 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncDef>" << "\n";
        printf("%s\n", "<FuncDef>");
    }
#line 1840 "yacc/dmx_yacc.cpp"
    break;

  case 31: /* FuncDef: TYPETK IDENFR LPARENT FuncFParam FuncFParams RPARENT Block  */
#line 246 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncDef>" << "\n";
        printf("%s\n", "<FuncDef>");
    }
#line 1851 "yacc/dmx_yacc.cpp"
    break;

  case 32: /* FuncDef: TYPETK MAINTK LPARENT RPARENT Block  */
#line 253 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MainFuncDef>" << "\n";
        printf("%s\n", "<MainFuncDef>");
    }
#line 1862 "yacc/dmx_yacc.cpp"
    break;

  case 33: /* FuncDef: TYPETK MAINTK LPARENT FuncFParam FuncFParams RPARENT Block  */
#line 260 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MainFuncDef>" << "\n";
        printf("%s\n", "<MainFuncDef>");
    }
#line 1873 "yacc/dmx_yacc.cpp"
    break;

  case 35: /* FuncFParams: COMMA FuncFParam FuncFParams  */
#line 270 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncFParams>" << "\n";
        printf("%s\n", "<FuncFParams>");
    }
#line 1884 "yacc/dmx_yacc.cpp"
    break;

  case 36: /* FuncFParam: TYPETK IDENFR  */
#line 280 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncFParam>" << "\n";
        printf("%s\n", "<FuncFParam>");
    }
#line 1895 "yacc/dmx_yacc.cpp"
    break;

  case 37: /* FuncFParam: TYPETK IDENFR LBRACK RBRACK L_ConstExps_R  */
#line 287 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncFParam>" << "\n";
        printf("%s\n", "<FuncFParam>");
    }
#line 1906 "yacc/dmx_yacc.cpp"
    break;

  case 38: /* Block: LBRACE BlockItems RBRACE  */
#line 297 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Block>" << "\n";
        printf("%s\n", "<Block>");
    }
#line 1917 "yacc/dmx_yacc.cpp"
    break;

  case 43: /* Stmt: LVal ASSIGN Exp SEMICN  */
#line 316 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 1928 "yacc/dmx_yacc.cpp"
    break;

  case 44: /* Stmt: SEMICN  */
#line 323 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 1939 "yacc/dmx_yacc.cpp"
    break;

  case 45: /* Stmt: Exp SEMICN  */
#line 330 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 1950 "yacc/dmx_yacc.cpp"
    break;

  case 46: /* Stmt: Block  */
#line 337 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 1961 "yacc/dmx_yacc.cpp"
    break;

  case 47: /* Stmt: IFTK LPARENT Cond RPARENT Stmt ELSETK Stmt  */
#line 344 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 1972 "yacc/dmx_yacc.cpp"
    break;

  case 48: /* Stmt: IFTK LPARENT Cond RPARENT Stmt  */
#line 351 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 1983 "yacc/dmx_yacc.cpp"
    break;

  case 49: /* Stmt: WHILETK LPARENT Cond RPARENT Stmt  */
#line 358 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 1994 "yacc/dmx_yacc.cpp"
    break;

  case 50: /* Stmt: BREAKTK SEMICN  */
#line 365 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 2005 "yacc/dmx_yacc.cpp"
    break;

  case 51: /* Stmt: CONTINUETK SEMICN  */
#line 372 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 2016 "yacc/dmx_yacc.cpp"
    break;

  case 52: /* Stmt: RETURNTK SEMICN  */
#line 379 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 2027 "yacc/dmx_yacc.cpp"
    break;

  case 53: /* Stmt: RETURNTK Exp SEMICN  */
#line 386 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 2038 "yacc/dmx_yacc.cpp"
    break;

  case 54: /* Stmt: LVal ASSIGN GETINTTK LPARENT RPARENT SEMICN  */
#line 393 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 2049 "yacc/dmx_yacc.cpp"
    break;

  case 55: /* Stmt: PRINTFTK LPARENT STRCON Exps RPARENT SEMICN  */
#line 400 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Stmt>" << "\n";
        printf("%s\n", "<Stmt>");
    }
#line 2060 "yacc/dmx_yacc.cpp"
    break;

  case 58: /* Exp: AddExp  */
#line 414 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Exp>" << "\n";
        printf("%s\n", "<Exp>");
    }
#line 2071 "yacc/dmx_yacc.cpp"
    break;

  case 59: /* Cond: LOrExp  */
#line 424 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Cond>" << "\n";
        printf("%s\n", "<Cond>");
    }
#line 2082 "yacc/dmx_yacc.cpp"
    break;

  case 60: /* LVal: IDENFR L_Exps_R  */
#line 434 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<LVal>" << "\n";
        printf("%s\n", "<LVal>");
    }
#line 2093 "yacc/dmx_yacc.cpp"
    break;

  case 63: /* PrimaryExp: LPARENT Exp RPARENT  */
#line 448 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<PrimaryExp>" << "\n";
        printf("%s\n", "<PrimaryExp>");
    }
#line 2104 "yacc/dmx_yacc.cpp"
    break;

  case 64: /* PrimaryExp: LVal  */
#line 455 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<PrimaryExp>" << "\n";
        printf("%s\n", "<PrimaryExp>");
    }
#line 2115 "yacc/dmx_yacc.cpp"
    break;

  case 65: /* PrimaryExp: Number  */
#line 462 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<PrimaryExp>" << "\n";
        printf("%s\n", "<PrimaryExp>");
    }
#line 2126 "yacc/dmx_yacc.cpp"
    break;

  case 66: /* Number: INTCON  */
#line 472 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<Number>" << "\n";
        printf("%s\n", "<Number>");
    }
#line 2137 "yacc/dmx_yacc.cpp"
    break;

  case 67: /* UnaryExp: PrimaryExp  */
#line 482 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryExp>" << "\n";
        printf("%s\n", "<UnaryExp>");
    }
#line 2148 "yacc/dmx_yacc.cpp"
    break;

  case 68: /* UnaryExp: IDENFR LPARENT RPARENT  */
#line 489 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryExp>" << "\n";
        printf("%s\n", "<UnaryExp>");
    }
#line 2159 "yacc/dmx_yacc.cpp"
    break;

  case 69: /* UnaryExp: IDENFR LPARENT FuncRParams RPARENT  */
#line 496 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryExp>" << "\n";
        printf("%s\n", "<UnaryExp>");
    }
#line 2170 "yacc/dmx_yacc.cpp"
    break;

  case 70: /* UnaryExp: UnaryOp UnaryExp  */
#line 503 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryExp>" << "\n";
        printf("%s\n", "<UnaryExp>");
    }
#line 2181 "yacc/dmx_yacc.cpp"
    break;

  case 71: /* UnaryOp: PLUS  */
#line 512 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryOp>" << "\n";
        printf("%s\n", "<UnaryOp>");
    }
#line 2192 "yacc/dmx_yacc.cpp"
    break;

  case 72: /* UnaryOp: MINU  */
#line 519 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryOp>" << "\n";
        printf("%s\n", "<UnaryOp>");
    }
#line 2203 "yacc/dmx_yacc.cpp"
    break;

  case 73: /* UnaryOp: NOT  */
#line 526 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<UnaryOp>" << "\n";
        printf("%s\n", "<UnaryOp>");
    }
#line 2214 "yacc/dmx_yacc.cpp"
    break;

  case 74: /* FuncRParams: Exp Exps  */
#line 536 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<FuncRParams>" << "\n";
        printf("%s\n", "<FuncRParams>");
    }
#line 2225 "yacc/dmx_yacc.cpp"
    break;

  case 75: /* MulExp: UnaryExp  */
#line 546 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MulExp>" << "\n";
        printf("%s\n", "<MulExp>");
    }
#line 2236 "yacc/dmx_yacc.cpp"
    break;

  case 76: /* MulExp: MulExp MULT UnaryExp  */
#line 553 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MulExp>" << "\n";
        printf("%s\n", "<MulExp>");
    }
#line 2247 "yacc/dmx_yacc.cpp"
    break;

  case 77: /* MulExp: MulExp DIV UnaryExp  */
#line 560 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MulExp>" << "\n";
        printf("%s\n", "<MulExp>");
    }
#line 2258 "yacc/dmx_yacc.cpp"
    break;

  case 78: /* MulExp: MulExp MOD UnaryExp  */
#line 567 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<MulExp>" << "\n";
        printf("%s\n", "<MulExp>");
    }
#line 2269 "yacc/dmx_yacc.cpp"
    break;

  case 79: /* AddExp: MulExp  */
#line 577 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<AddExp>" << "\n";
        printf("%s\n", "<AddExp>");
    }
#line 2280 "yacc/dmx_yacc.cpp"
    break;

  case 80: /* AddExp: AddExp PLUS MulExp  */
#line 584 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<AddExp>" << "\n";
        printf("%s\n", "<AddExp>");
    }
#line 2291 "yacc/dmx_yacc.cpp"
    break;

  case 81: /* AddExp: AddExp MINU MulExp  */
#line 591 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<AddExp>" << "\n";
        printf("%s\n", "<AddExp>");
    }
#line 2302 "yacc/dmx_yacc.cpp"
    break;

  case 82: /* RelExp: AddExp  */
#line 601 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<RelExp>" << "\n";
        printf("%s\n", "<RelExp>");
    }
#line 2313 "yacc/dmx_yacc.cpp"
    break;

  case 83: /* RelExp: RelExp LSS AddExp  */
#line 608 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<RelExp>" << "\n";
        printf("%s\n", "<RelExp>");
    }
#line 2324 "yacc/dmx_yacc.cpp"
    break;

  case 84: /* RelExp: RelExp GRE AddExp  */
#line 615 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<RelExp>" << "\n";
        printf("%s\n", "<RelExp>");
    }
#line 2335 "yacc/dmx_yacc.cpp"
    break;

  case 85: /* RelExp: RelExp LEQ AddExp  */
#line 622 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<RelExp>" << "\n";
        printf("%s\n", "<RelExp>");
    }
#line 2346 "yacc/dmx_yacc.cpp"
    break;

  case 86: /* RelExp: RelExp GEQ AddExp  */
#line 629 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<RelExp>" << "\n";
        printf("%s\n", "<RelExp>");
    }
#line 2357 "yacc/dmx_yacc.cpp"
    break;

  case 87: /* EqExp: RelExp  */
#line 639 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<EqExp>" << "\n";
        printf("%s\n", "<EqExp>");
    }
#line 2368 "yacc/dmx_yacc.cpp"
    break;

  case 88: /* EqExp: EqExp EQL RelExp  */
#line 646 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<EqExp>" << "\n";
        printf("%s\n", "<EqExp>");
    }
#line 2379 "yacc/dmx_yacc.cpp"
    break;

  case 89: /* EqExp: EqExp NEQ RelExp  */
#line 653 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<EqExp>" << "\n";
        printf("%s\n", "<EqExp>");
    }
#line 2390 "yacc/dmx_yacc.cpp"
    break;

  case 90: /* LAndExp: EqExp  */
#line 663 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<LAndExp>" << "\n";
        printf("%s\n", "<LAndExp>");
    }
#line 2401 "yacc/dmx_yacc.cpp"
    break;

  case 91: /* LAndExp: LAndExp AND EqExp  */
#line 670 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<LAndExp>" << "\n";
        printf("%s\n", "<LAndExp>");
    }
#line 2412 "yacc/dmx_yacc.cpp"
    break;

  case 92: /* LOrExp: LAndExp  */
#line 680 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<LOrExp>" << "\n";
        printf("%s\n", "<LOrExp>");
    }
#line 2423 "yacc/dmx_yacc.cpp"
    break;

  case 93: /* LOrExp: LOrExp OR LAndExp  */
#line 687 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<LOrExp>" << "\n";
        printf("%s\n", "<LOrExp>");
    }
#line 2434 "yacc/dmx_yacc.cpp"
    break;

  case 94: /* ConstExp: AddExp  */
#line 697 "yacc/yacc.y"
    {
        if (yychar == -2)
            output_file << "DMX20070206" << "\n";
        output_file << "<ConstExp>" << "\n";
        printf("%s\n", "<ConstExp>");
    }
#line 2445 "yacc/dmx_yacc.cpp"
    break;


#line 2449 "yacc/dmx_yacc.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, parse_string, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, parse_string, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, parse_string, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, parse_string, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, parse_string, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, parse_string, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 704 "yacc/yacc.y"


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
