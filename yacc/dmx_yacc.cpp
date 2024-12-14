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
#include <algorithm>

#include "yacc/dmx_yacc.hpp"
#include "lex/dmx_lex.h"

using namespace std;

int yyerror(YYLTYPE *llocp, const char *parse_string, yyscan_t scanner, const char *msg)
{
  return 0;
}


#line 89 "yacc/dmx_yacc.cpp"

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
  YYSYMBOL_PLUS = 3,                       /* PLUS  */
  YYSYMBOL_MINU = 4,                       /* MINU  */
  YYSYMBOL_MULT = 5,                       /* MULT  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_MOD = 7,                        /* MOD  */
  YYSYMBOL_ELSETK = 8,                     /* ELSETK  */
  YYSYMBOL_INTTK = 9,                      /* INTTK  */
  YYSYMBOL_MAINTK = 10,                    /* MAINTK  */
  YYSYMBOL_WHILETK = 11,                   /* WHILETK  */
  YYSYMBOL_CONSTTK = 12,                   /* CONSTTK  */
  YYSYMBOL_GETINTTK = 13,                  /* GETINTTK  */
  YYSYMBOL_PRINTFTK = 14,                  /* PRINTFTK  */
  YYSYMBOL_BREAKTK = 15,                   /* BREAKTK  */
  YYSYMBOL_RETURNTK = 16,                  /* RETURNTK  */
  YYSYMBOL_CONTINUETK = 17,                /* CONTINUETK  */
  YYSYMBOL_IFTK = 18,                      /* IFTK  */
  YYSYMBOL_VOIDTK = 19,                    /* VOIDTK  */
  YYSYMBOL_IDENFR = 20,                    /* IDENFR  */
  YYSYMBOL_STRCON = 21,                    /* STRCON  */
  YYSYMBOL_NOT = 22,                       /* NOT  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_OR = 24,                        /* OR  */
  YYSYMBOL_EQL = 25,                       /* EQL  */
  YYSYMBOL_NEQ = 26,                       /* NEQ  */
  YYSYMBOL_LEQ = 27,                       /* LEQ  */
  YYSYMBOL_GEQ = 28,                       /* GEQ  */
  YYSYMBOL_LSS = 29,                       /* LSS  */
  YYSYMBOL_GRE = 30,                       /* GRE  */
  YYSYMBOL_ASSIGN = 31,                    /* ASSIGN  */
  YYSYMBOL_SEMICN = 32,                    /* SEMICN  */
  YYSYMBOL_COMMA = 33,                     /* COMMA  */
  YYSYMBOL_LPARENT = 34,                   /* LPARENT  */
  YYSYMBOL_RPARENT = 35,                   /* RPARENT  */
  YYSYMBOL_LBRACE = 36,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 37,                    /* RBRACE  */
  YYSYMBOL_LBRACK = 38,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 39,                    /* RBRACK  */
  YYSYMBOL_INTCON = 40,                    /* INTCON  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_CompUnit = 42,                  /* CompUnit  */
  YYSYMBOL_Decl = 43,                      /* Decl  */
  YYSYMBOL_Decls = 44,                     /* Decls  */
  YYSYMBOL_FuncDefs = 45,                  /* FuncDefs  */
  YYSYMBOL_MainFuncDef = 46,               /* MainFuncDef  */
  YYSYMBOL_ConstDecl = 47,                 /* ConstDecl  */
  YYSYMBOL_ConstDefs = 48,                 /* ConstDefs  */
  YYSYMBOL_BType = 49,                     /* BType  */
  YYSYMBOL_ConstDef = 50,                  /* ConstDef  */
  YYSYMBOL_L_ConstExps_R = 51,             /* L_ConstExps_R  */
  YYSYMBOL_ConstInitVal = 52,              /* ConstInitVal  */
  YYSYMBOL_ConstInitVals = 53,             /* ConstInitVals  */
  YYSYMBOL_VarDecl = 54,                   /* VarDecl  */
  YYSYMBOL_VarDefs = 55,                   /* VarDefs  */
  YYSYMBOL_VarDef = 56,                    /* VarDef  */
  YYSYMBOL_InitVal = 57,                   /* InitVal  */
  YYSYMBOL_InitVals = 58,                  /* InitVals  */
  YYSYMBOL_FuncDef = 59,                   /* FuncDef  */
  YYSYMBOL_FuncType = 60,                  /* FuncType  */
  YYSYMBOL_FuncFParams = 61,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 62,                /* FuncFParam  */
  YYSYMBOL_Block = 63,                     /* Block  */
  YYSYMBOL_BlockItem = 64,                 /* BlockItem  */
  YYSYMBOL_BlockItems = 65,                /* BlockItems  */
  YYSYMBOL_Stmt = 66,                      /* Stmt  */
  YYSYMBOL_Exps = 67,                      /* Exps  */
  YYSYMBOL_Cond = 68,                      /* Cond  */
  YYSYMBOL_LVal = 69,                      /* LVal  */
  YYSYMBOL_L_Exps_R = 70,                  /* L_Exps_R  */
  YYSYMBOL_PrimaryExp = 71,                /* PrimaryExp  */
  YYSYMBOL_Number = 72,                    /* Number  */
  YYSYMBOL_UnaryExp = 73,                  /* UnaryExp  */
  YYSYMBOL_UnaryOp = 74,                   /* UnaryOp  */
  YYSYMBOL_FuncRParams = 75,               /* FuncRParams  */
  YYSYMBOL_MulExp = 76,                    /* MulExp  */
  YYSYMBOL_AddExp = 77,                    /* AddExp  */
  YYSYMBOL_RelExp = 78,                    /* RelExp  */
  YYSYMBOL_EqExp = 79,                     /* EqExp  */
  YYSYMBOL_LAndExp = 80,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 81,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 82,                  /* ConstExp  */
  YYSYMBOL_Exp = 83                        /* Exp  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   231

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  189

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
       0,    68,    68,    76,    80,    88,    91,    99,   102,   110,
     118,   126,   129,   137,   145,   153,   156,   164,   168,   172,
     180,   183,   191,   199,   202,   210,   214,   221,   225,   229,
     236,   239,   247,   251,   258,   262,   269,   272,   279,   283,
     290,   297,   301,   308,   311,   318,   322,   326,   330,   334,
     338,   342,   346,   350,   354,   358,   362,   366,   373,   376,
     383,   390,   397,   400,   407,   411,   415,   422,   429,   433,
     437,   441,   445,   449,   453,   460,   467,   468,   469,   470,
     474,   475,   476,   480,   481,   482,   483,   484,   488,   489,
     490,   494,   495,   499,   500,   504,   508
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
  "\"end of file\"", "error", "\"invalid token\"", "PLUS", "MINU", "MULT",
  "DIV", "MOD", "ELSETK", "INTTK", "MAINTK", "WHILETK", "CONSTTK",
  "GETINTTK", "PRINTFTK", "BREAKTK", "RETURNTK", "CONTINUETK", "IFTK",
  "VOIDTK", "IDENFR", "STRCON", "NOT", "AND", "OR", "EQL", "NEQ", "LEQ",
  "GEQ", "LSS", "GRE", "ASSIGN", "SEMICN", "COMMA", "LPARENT", "RPARENT",
  "LBRACE", "RBRACE", "LBRACK", "RBRACK", "INTCON", "$accept", "CompUnit",
  "Decl", "Decls", "FuncDefs", "MainFuncDef", "ConstDecl", "ConstDefs",
  "BType", "ConstDef", "L_ConstExps_R", "ConstInitVal", "ConstInitVals",
  "VarDecl", "VarDefs", "VarDef", "InitVal", "InitVals", "FuncDef",
  "FuncType", "FuncFParams", "FuncFParam", "Block", "BlockItem",
  "BlockItems", "Stmt", "Exps", "Cond", "LVal", "L_Exps_R", "PrimaryExp",
  "Number", "UnaryExp", "UnaryOp", "FuncRParams", "MulExp", "AddExp",
  "RelExp", "EqExp", "LAndExp", "LOrExp", "ConstExp", "Exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,  -156,    27,    38,     4,     3,  -156,    10,  -156,    33,
    -156,  -156,  -156,  -156,    49,     3,    45,    25,    41,    25,
      58,    61,  -156,  -156,    56,   180,    64,    10,    65,    68,
      33,    69,    66,     0,  -156,  -156,   -20,  -156,   180,  -156,
    -156,  -156,  -156,  -156,   180,    14,    21,    73,   146,    41,
    -156,   151,    58,  -156,    67,    77,    97,    89,    85,   180,
    -156,    21,    96,  -156,   180,   180,   180,   180,   180,    25,
      39,  -156,  -156,  -156,    74,  -156,  -156,  -156,    77,   112,
    -156,    95,    27,    98,  -156,   110,   114,   117,  -156,  -156,
    -156,  -156,    14,    14,  -156,  -156,   118,  -156,   120,  -156,
     123,   124,   129,   156,   132,   131,  -156,  -156,  -156,   112,
     130,  -156,   138,   142,   136,    89,    77,  -156,   180,  -156,
     139,   146,   133,   151,   152,   180,   171,  -156,  -156,   162,
    -156,   180,  -156,  -156,   159,  -156,    25,  -156,  -156,   114,
    -156,   118,  -156,   120,  -156,   160,    21,   176,    43,   174,
     177,   114,  -156,   163,   173,   178,  -156,  -156,  -156,  -156,
      30,   180,   180,   180,   180,   180,   180,   180,   180,   181,
      30,   182,  -156,  -156,    21,    21,    21,    21,   176,   176,
      43,   174,   179,   200,   183,  -156,    30,  -156,  -156
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,    13,     0,     0,     5,     0,     3,     0,     4,     0,
       1,     6,    35,    34,     0,     0,     0,    15,    23,    15,
      11,     0,     2,     8,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    62,    74,     0,    67,
      65,    68,    66,    76,     0,    80,    95,     0,     0,    23,
      22,     0,    11,    10,     0,     0,     0,    36,     0,     0,
      61,    96,     0,    71,     0,     0,     0,     0,     0,    15,
       0,    26,    27,    24,     0,    14,    17,    12,     0,    43,
      32,    38,     0,     0,    69,     0,    58,     0,    64,    77,
      78,    79,    81,    82,    16,    28,    30,    18,    20,     9,
       0,     0,     0,     0,     0,     0,    47,    41,    48,    43,
       0,    42,    65,     0,     0,    36,     0,    70,     0,    75,
      62,     0,     0,     0,     0,     0,     0,    52,    54,     0,
      53,     0,    44,    40,     0,    46,    15,    37,    33,    58,
      63,    30,    29,    20,    19,     0,    83,    88,    91,    93,
      60,    58,    55,     0,     0,     0,    39,    59,    31,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,    51,    86,    87,    84,    85,    89,    90,
      92,    94,     0,    50,     0,    57,     0,    56,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,   -69,   205,   197,  -156,  -156,   161,     2,   188,
     -18,   -66,    76,  -156,   172,   195,   -67,    82,  -156,  -156,
     109,   143,   -49,  -156,   119,  -155,  -128,    99,   -77,   106,
    -156,  -156,    16,  -156,  -156,   -12,   -25,   -80,    60,    63,
    -156,   204,   -31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,    14,    22,     6,    31,     7,    20,
      26,    75,   124,     8,    28,    18,    71,   122,    15,    16,
      83,    57,   108,   109,   110,   111,   119,   145,    40,    60,
      41,    42,    43,    44,    85,    45,    61,   147,   148,   149,
     150,    76,   113
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      46,    29,   112,    96,     9,   173,    80,    62,    98,     1,
     107,   157,    12,     1,    58,   183,     2,    72,    59,    64,
      65,    66,    13,   169,    67,    68,    46,    86,    87,    99,
      17,   188,   112,    34,    35,    56,     1,    55,    10,    72,
     107,   100,    34,    35,   101,   102,   103,   104,   105,    46,
      36,    94,    37,    19,   141,    92,    93,   143,    21,    36,
      63,    37,   106,    25,    38,    24,    79,   138,   165,   166,
      39,    32,   129,    38,    27,    70,    95,    34,    35,    39,
      89,    90,    91,   112,    56,   178,   179,   139,    34,    35,
      72,    30,    33,   112,    36,    48,    37,    50,    46,    51,
     146,    53,    54,   155,    78,    36,   146,    37,    38,   112,
      74,    97,    69,    79,    39,    34,    35,    81,   156,    38,
      84,     1,    82,   100,     2,    39,   101,   102,   103,   104,
     105,    88,    36,   114,    37,   116,   174,   175,   176,   177,
     146,   146,   146,   146,   106,   117,    38,   118,    79,    34,
      35,   121,    39,   123,    34,    35,   120,   125,   126,    34,
      35,   127,    34,    35,   130,   131,    36,   133,    37,   134,
     142,    36,   154,    37,   135,   136,    36,    59,    37,    36,
      38,    37,    70,    34,    35,    38,    39,    74,   128,   144,
      38,    39,   151,    38,   152,   160,    39,   167,   170,    39,
      36,   168,    37,   161,   162,   163,   164,   171,   186,    11,
     172,   185,    23,    77,    38,   187,   182,   184,    52,   159,
      39,    73,    49,   158,   137,   115,   140,   180,   132,    47,
     153,   181
};

static const yytype_uint8 yycheck[] =
{
      25,    19,    79,    70,     2,   160,    55,    38,    74,     9,
      79,   139,     9,     9,    34,   170,    12,    48,    38,     5,
       6,     7,    19,   151,     3,     4,    51,    58,    59,    78,
      20,   186,   109,     3,     4,    33,     9,    37,     0,    70,
     109,    11,     3,     4,    14,    15,    16,    17,    18,    74,
      20,    69,    22,    20,   121,    67,    68,   123,     9,    20,
      44,    22,    32,    38,    34,    20,    36,   116,    25,    26,
      40,    10,   103,    34,    33,    36,    37,     3,     4,    40,
      64,    65,    66,   160,    82,   165,   166,   118,     3,     4,
     121,    33,    36,   170,    20,    31,    22,    32,   123,    31,
     125,    32,    36,   134,    37,    20,   131,    22,    34,   186,
      36,    37,    39,    36,    40,     3,     4,    20,   136,    34,
      35,     9,    33,    11,    12,    40,    14,    15,    16,    17,
      18,    35,    20,    38,    22,    37,   161,   162,   163,   164,
     165,   166,   167,   168,    32,    35,    34,    33,    36,     3,
       4,    33,    40,    33,     3,     4,    39,    34,    34,     3,
       4,    32,     3,     4,    32,    34,    20,    37,    22,    31,
      37,    20,    13,    22,    32,    39,    20,    38,    22,    20,
      34,    22,    36,     3,     4,    34,    40,    36,    32,    37,
      34,    40,    21,    34,    32,    35,    40,    23,    35,    40,
      20,    24,    22,    27,    28,    29,    30,    34,     8,     4,
      32,    32,    15,    52,    34,    32,    35,    35,    30,   143,
      40,    49,    27,   141,   115,    82,   120,   167,   109,    25,
     131,   168
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    12,    42,    43,    44,    47,    49,    54,    49,
       0,    44,     9,    19,    45,    59,    60,    20,    56,    20,
      50,     9,    46,    45,    20,    38,    51,    33,    55,    51,
      33,    48,    10,    36,     3,     4,    20,    22,    34,    40,
      69,    71,    72,    73,    74,    76,    77,    82,    31,    56,
      32,    31,    50,    32,    36,    37,    49,    62,    34,    38,
      70,    77,    83,    73,     5,     6,     7,     3,     4,    39,
      36,    57,    83,    55,    36,    52,    82,    48,    37,    36,
      63,    20,    33,    61,    35,    75,    83,    83,    35,    73,
      73,    73,    76,    76,    51,    37,    57,    37,    52,    63,
      11,    14,    15,    16,    17,    18,    32,    43,    63,    64,
      65,    66,    69,    83,    38,    62,    37,    35,    33,    67,
      39,    33,    58,    33,    53,    34,    34,    32,    32,    83,
      32,    34,    65,    37,    31,    32,    39,    61,    63,    83,
      70,    57,    37,    52,    37,    68,    77,    78,    79,    80,
      81,    21,    32,    68,    13,    83,    51,    67,    58,    53,
      35,    27,    28,    29,    30,    25,    26,    23,    24,    67,
      35,    34,    32,    66,    77,    77,    77,    77,    78,    78,
      79,    80,    35,    66,    35,    32,     8,    32,    66
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      47,    48,    48,    49,    50,    51,    51,    52,    52,    52,
      53,    53,    54,    55,    55,    56,    56,    57,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    64,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    67,
      68,    69,    70,    70,    71,    71,    71,    72,    73,    73,
      73,    73,    74,    74,    74,    75,    76,    76,    76,    76,
      77,    77,    77,    78,    78,    78,    78,    78,    79,    79,
      79,    80,    80,    81,    81,    82,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     1,     0,     2,     0,     2,     5,
       5,     0,     3,     1,     4,     0,     4,     1,     2,     4,
       0,     3,     4,     0,     3,     2,     4,     1,     2,     4,
       0,     3,     5,     7,     1,     1,     0,     3,     2,     5,
       3,     1,     1,     0,     2,     4,     2,     1,     1,     7,
       5,     5,     2,     2,     2,     3,     6,     6,     0,     3,
       1,     2,     0,     4,     3,     1,     1,     1,     1,     3,
       4,     2,     1,     1,     1,     2,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     1
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
  case 2: /* CompUnit: Decls FuncDefs MainFuncDef  */
#line 69 "yacc/yacc.y"
    {

    }
#line 1696 "yacc/dmx_yacc.cpp"
    break;

  case 3: /* Decl: ConstDecl  */
#line 77 "yacc/yacc.y"
    {

    }
#line 1704 "yacc/dmx_yacc.cpp"
    break;

  case 4: /* Decl: VarDecl  */
#line 81 "yacc/yacc.y"
    {

    }
#line 1712 "yacc/dmx_yacc.cpp"
    break;

  case 5: /* Decls: %empty  */
#line 88 "yacc/yacc.y"
    {

    }
#line 1720 "yacc/dmx_yacc.cpp"
    break;

  case 6: /* Decls: Decl Decls  */
#line 92 "yacc/yacc.y"
    {

    }
#line 1728 "yacc/dmx_yacc.cpp"
    break;

  case 7: /* FuncDefs: %empty  */
#line 99 "yacc/yacc.y"
    {

    }
#line 1736 "yacc/dmx_yacc.cpp"
    break;

  case 8: /* FuncDefs: FuncDef FuncDefs  */
#line 103 "yacc/yacc.y"
    {

    }
#line 1744 "yacc/dmx_yacc.cpp"
    break;

  case 9: /* MainFuncDef: INTTK MAINTK LBRACE RBRACE Block  */
#line 111 "yacc/yacc.y"
    {

    }
#line 1752 "yacc/dmx_yacc.cpp"
    break;

  case 10: /* ConstDecl: CONSTTK BType ConstDef ConstDefs SEMICN  */
#line 119 "yacc/yacc.y"
    {

    }
#line 1760 "yacc/dmx_yacc.cpp"
    break;

  case 11: /* ConstDefs: %empty  */
#line 126 "yacc/yacc.y"
    {

    }
#line 1768 "yacc/dmx_yacc.cpp"
    break;

  case 12: /* ConstDefs: COMMA ConstDef ConstDefs  */
#line 130 "yacc/yacc.y"
    {

    }
#line 1776 "yacc/dmx_yacc.cpp"
    break;

  case 13: /* BType: INTTK  */
#line 138 "yacc/yacc.y"
    {

    }
#line 1784 "yacc/dmx_yacc.cpp"
    break;

  case 14: /* ConstDef: IDENFR L_ConstExps_R ASSIGN ConstInitVal  */
#line 146 "yacc/yacc.y"
    {

    }
#line 1792 "yacc/dmx_yacc.cpp"
    break;

  case 15: /* L_ConstExps_R: %empty  */
#line 153 "yacc/yacc.y"
    {

    }
#line 1800 "yacc/dmx_yacc.cpp"
    break;

  case 16: /* L_ConstExps_R: LBRACK ConstExp RBRACK L_ConstExps_R  */
#line 157 "yacc/yacc.y"
    {

    }
#line 1808 "yacc/dmx_yacc.cpp"
    break;

  case 17: /* ConstInitVal: ConstExp  */
#line 165 "yacc/yacc.y"
    {

    }
#line 1816 "yacc/dmx_yacc.cpp"
    break;

  case 18: /* ConstInitVal: LBRACE RBRACE  */
#line 169 "yacc/yacc.y"
    {

    }
#line 1824 "yacc/dmx_yacc.cpp"
    break;

  case 19: /* ConstInitVal: LBRACE ConstInitVal ConstInitVals RBRACE  */
#line 173 "yacc/yacc.y"
    {

    }
#line 1832 "yacc/dmx_yacc.cpp"
    break;

  case 20: /* ConstInitVals: %empty  */
#line 180 "yacc/yacc.y"
    {

    }
#line 1840 "yacc/dmx_yacc.cpp"
    break;

  case 21: /* ConstInitVals: COMMA ConstInitVal ConstInitVals  */
#line 184 "yacc/yacc.y"
    {

    }
#line 1848 "yacc/dmx_yacc.cpp"
    break;

  case 22: /* VarDecl: BType VarDef VarDefs SEMICN  */
#line 192 "yacc/yacc.y"
    {

    }
#line 1856 "yacc/dmx_yacc.cpp"
    break;

  case 23: /* VarDefs: %empty  */
#line 199 "yacc/yacc.y"
    {

    }
#line 1864 "yacc/dmx_yacc.cpp"
    break;

  case 24: /* VarDefs: COMMA VarDef VarDefs  */
#line 203 "yacc/yacc.y"
    {

    }
#line 1872 "yacc/dmx_yacc.cpp"
    break;

  case 25: /* VarDef: IDENFR L_ConstExps_R  */
#line 211 "yacc/yacc.y"
    {

    }
#line 1880 "yacc/dmx_yacc.cpp"
    break;

  case 26: /* VarDef: IDENFR L_ConstExps_R ASSIGN InitVal  */
#line 215 "yacc/yacc.y"
    {

    }
#line 1888 "yacc/dmx_yacc.cpp"
    break;

  case 27: /* InitVal: Exp  */
#line 222 "yacc/yacc.y"
    {

    }
#line 1896 "yacc/dmx_yacc.cpp"
    break;

  case 28: /* InitVal: LBRACE RBRACE  */
#line 226 "yacc/yacc.y"
    {

    }
#line 1904 "yacc/dmx_yacc.cpp"
    break;

  case 29: /* InitVal: LBRACE InitVal InitVals RBRACE  */
#line 230 "yacc/yacc.y"
    {

    }
#line 1912 "yacc/dmx_yacc.cpp"
    break;

  case 30: /* InitVals: %empty  */
#line 236 "yacc/yacc.y"
    {

    }
#line 1920 "yacc/dmx_yacc.cpp"
    break;

  case 31: /* InitVals: COMMA InitVal InitVals  */
#line 240 "yacc/yacc.y"
    {

    }
#line 1928 "yacc/dmx_yacc.cpp"
    break;

  case 32: /* FuncDef: FuncType IDENFR LBRACE RBRACE Block  */
#line 248 "yacc/yacc.y"
    {

    }
#line 1936 "yacc/dmx_yacc.cpp"
    break;

  case 33: /* FuncDef: FuncType IDENFR LBRACE FuncFParam FuncFParams RBRACE Block  */
#line 252 "yacc/yacc.y"
    {

    }
#line 1944 "yacc/dmx_yacc.cpp"
    break;

  case 34: /* FuncType: VOIDTK  */
#line 259 "yacc/yacc.y"
    {

    }
#line 1952 "yacc/dmx_yacc.cpp"
    break;

  case 35: /* FuncType: INTTK  */
#line 263 "yacc/yacc.y"
    {

    }
#line 1960 "yacc/dmx_yacc.cpp"
    break;

  case 36: /* FuncFParams: %empty  */
#line 269 "yacc/yacc.y"
    {

    }
#line 1968 "yacc/dmx_yacc.cpp"
    break;

  case 37: /* FuncFParams: COMMA FuncFParam FuncFParams  */
#line 273 "yacc/yacc.y"
    {

    }
#line 1976 "yacc/dmx_yacc.cpp"
    break;

  case 38: /* FuncFParam: BType IDENFR  */
#line 280 "yacc/yacc.y"
    {

    }
#line 1984 "yacc/dmx_yacc.cpp"
    break;

  case 39: /* FuncFParam: BType IDENFR LBRACK RBRACK L_ConstExps_R  */
#line 284 "yacc/yacc.y"
    {

    }
#line 1992 "yacc/dmx_yacc.cpp"
    break;

  case 40: /* Block: LBRACE BlockItems RBRACE  */
#line 291 "yacc/yacc.y"
    {

    }
#line 2000 "yacc/dmx_yacc.cpp"
    break;

  case 41: /* BlockItem: Decl  */
#line 298 "yacc/yacc.y"
    {

    }
#line 2008 "yacc/dmx_yacc.cpp"
    break;

  case 42: /* BlockItem: Stmt  */
#line 302 "yacc/yacc.y"
    {

    }
#line 2016 "yacc/dmx_yacc.cpp"
    break;

  case 43: /* BlockItems: %empty  */
#line 308 "yacc/yacc.y"
    {

    }
#line 2024 "yacc/dmx_yacc.cpp"
    break;

  case 44: /* BlockItems: BlockItem BlockItems  */
#line 312 "yacc/yacc.y"
    {

    }
#line 2032 "yacc/dmx_yacc.cpp"
    break;

  case 45: /* Stmt: LVal ASSIGN Exp SEMICN  */
#line 319 "yacc/yacc.y"
    {

    }
#line 2040 "yacc/dmx_yacc.cpp"
    break;

  case 46: /* Stmt: Exp SEMICN  */
#line 323 "yacc/yacc.y"
    {

    }
#line 2048 "yacc/dmx_yacc.cpp"
    break;

  case 47: /* Stmt: SEMICN  */
#line 327 "yacc/yacc.y"
    {

    }
#line 2056 "yacc/dmx_yacc.cpp"
    break;

  case 48: /* Stmt: Block  */
#line 331 "yacc/yacc.y"
    {

    }
#line 2064 "yacc/dmx_yacc.cpp"
    break;

  case 49: /* Stmt: IFTK LPARENT Cond RPARENT Stmt ELSETK Stmt  */
#line 335 "yacc/yacc.y"
    {

    }
#line 2072 "yacc/dmx_yacc.cpp"
    break;

  case 50: /* Stmt: IFTK LPARENT Cond RPARENT Stmt  */
#line 339 "yacc/yacc.y"
    {

    }
#line 2080 "yacc/dmx_yacc.cpp"
    break;

  case 51: /* Stmt: WHILETK LPARENT Cond RPARENT Stmt  */
#line 343 "yacc/yacc.y"
    {

    }
#line 2088 "yacc/dmx_yacc.cpp"
    break;

  case 52: /* Stmt: BREAKTK SEMICN  */
#line 347 "yacc/yacc.y"
    {

    }
#line 2096 "yacc/dmx_yacc.cpp"
    break;

  case 53: /* Stmt: CONTINUETK SEMICN  */
#line 351 "yacc/yacc.y"
    {

    }
#line 2104 "yacc/dmx_yacc.cpp"
    break;

  case 54: /* Stmt: RETURNTK SEMICN  */
#line 355 "yacc/yacc.y"
    {

    }
#line 2112 "yacc/dmx_yacc.cpp"
    break;

  case 55: /* Stmt: RETURNTK Exp SEMICN  */
#line 359 "yacc/yacc.y"
    {

    }
#line 2120 "yacc/dmx_yacc.cpp"
    break;

  case 56: /* Stmt: LVal ASSIGN GETINTTK LPARENT RPARENT SEMICN  */
#line 363 "yacc/yacc.y"
    {

    }
#line 2128 "yacc/dmx_yacc.cpp"
    break;

  case 57: /* Stmt: PRINTFTK LPARENT STRCON Exps RPARENT SEMICN  */
#line 367 "yacc/yacc.y"
    {

    }
#line 2136 "yacc/dmx_yacc.cpp"
    break;

  case 58: /* Exps: %empty  */
#line 373 "yacc/yacc.y"
    {

    }
#line 2144 "yacc/dmx_yacc.cpp"
    break;

  case 59: /* Exps: COMMA Exp Exps  */
#line 377 "yacc/yacc.y"
    {

    }
#line 2152 "yacc/dmx_yacc.cpp"
    break;

  case 60: /* Cond: LOrExp  */
#line 384 "yacc/yacc.y"
    {

    }
#line 2160 "yacc/dmx_yacc.cpp"
    break;

  case 61: /* LVal: IDENFR L_Exps_R  */
#line 391 "yacc/yacc.y"
    {

    }
#line 2168 "yacc/dmx_yacc.cpp"
    break;

  case 62: /* L_Exps_R: %empty  */
#line 397 "yacc/yacc.y"
    {

    }
#line 2176 "yacc/dmx_yacc.cpp"
    break;

  case 63: /* L_Exps_R: LBRACK Exp RBRACK L_Exps_R  */
#line 401 "yacc/yacc.y"
    {

    }
#line 2184 "yacc/dmx_yacc.cpp"
    break;

  case 64: /* PrimaryExp: LPARENT Exp RPARENT  */
#line 408 "yacc/yacc.y"
    {

    }
#line 2192 "yacc/dmx_yacc.cpp"
    break;

  case 65: /* PrimaryExp: LVal  */
#line 412 "yacc/yacc.y"
    {

    }
#line 2200 "yacc/dmx_yacc.cpp"
    break;

  case 66: /* PrimaryExp: Number  */
#line 416 "yacc/yacc.y"
    {

    }
#line 2208 "yacc/dmx_yacc.cpp"
    break;

  case 67: /* Number: INTCON  */
#line 423 "yacc/yacc.y"
    {

    }
#line 2216 "yacc/dmx_yacc.cpp"
    break;

  case 68: /* UnaryExp: PrimaryExp  */
#line 430 "yacc/yacc.y"
    {

    }
#line 2224 "yacc/dmx_yacc.cpp"
    break;

  case 69: /* UnaryExp: IDENFR LPARENT RPARENT  */
#line 434 "yacc/yacc.y"
    {

    }
#line 2232 "yacc/dmx_yacc.cpp"
    break;

  case 70: /* UnaryExp: IDENFR LPARENT FuncRParams RPARENT  */
#line 438 "yacc/yacc.y"
    {

    }
#line 2240 "yacc/dmx_yacc.cpp"
    break;

  case 72: /* UnaryOp: PLUS  */
#line 446 "yacc/yacc.y"
    {

    }
#line 2248 "yacc/dmx_yacc.cpp"
    break;

  case 73: /* UnaryOp: MINU  */
#line 450 "yacc/yacc.y"
    {

    }
#line 2256 "yacc/dmx_yacc.cpp"
    break;

  case 74: /* UnaryOp: NOT  */
#line 454 "yacc/yacc.y"
    {

    }
#line 2264 "yacc/dmx_yacc.cpp"
    break;

  case 75: /* FuncRParams: Exp Exps  */
#line 461 "yacc/yacc.y"
    {

    }
#line 2272 "yacc/dmx_yacc.cpp"
    break;


#line 2276 "yacc/dmx_yacc.cpp"

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

#line 510 "yacc/yacc.y"


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
