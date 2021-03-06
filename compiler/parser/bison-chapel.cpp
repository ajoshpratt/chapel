/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0




/* Copy the first part of user declarations.  */

/* Line 371 of yacc.c  */
#line 68 "bison-chapel.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison-chapel.h".  */
#ifndef YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
# define YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 32 "chapel.ypp"

  #include <string>
  extern int         captureTokens;
  extern std::string captureString;

/* Line 387 of yacc.c  */
#line 46 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_0_
  #define _BISON_CHAPEL_DEFINES_0_

  #define YYLEX_NEWLINE                  -1
  #define YYLEX_SINGLE_LINE_COMMENT      -2
  #define YYLEX_BLOCK_COMMENT            -3

  typedef void* yyscan_t;

  int processNewline(yyscan_t scanner);
  void stringBufferInit();

  #endif

/* Line 387 of yacc.c  */
#line 66 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_1_
  #define _BISON_CHAPEL_DEFINES_1_

  #include "symbol.h"

  #include <cstdio>
  #include <utility>
  #include <vector>

  class ArgSymbol;
  class BlockStmt;
  class CallExpr;
  class DefExpr;
  class EnumType;
  class Expr;
  class FnSymbol;
  class NamedExpr;
  class Type;

  enum   ProcIter {
    ProcIter_PROC,
    ProcIter_ITER
  };

  struct PotentialRename {
    enum{SINGLE, DOUBLE} tag;

    union {
      Expr*  elem;
      std::pair<Expr*, Expr*>* renamed;
    };
  };

  struct WhereAndLifetime {
    Expr* where;
    Expr* lifetime;
  };
  static inline
  WhereAndLifetime makeWhereAndLifetime(Expr* w, Expr* lt) {
    WhereAndLifetime ret;
    ret.where = w;
    ret.lifetime = lt;
    return ret;
  }

  // The lexer only uses pch.
  // The remaining types are for parser productions
  union  YYSTYPE {
    const char*               pch;

    Vec<const char*>*         vpch;
    RetTag                    retTag;
    AggregateTag              aggrTag;
    bool                      b;
    IntentTag                 pt;
    Expr*                     pexpr;
    DefExpr*                  pdefexpr;
    CallExpr*                 pcallexpr;
    BlockStmt*                pblockstmt;
    Type*                     ptype;
    EnumType*                 penumtype;
    std::vector<DefExpr*>*    pvecOfDefs;
    FnSymbol*                 pfnsymbol;
    ModuleSymbol*             pmodsymbol;
    ProcIter                  procIter;
    FlagSet*                  flagSet;
    ShadowVarSymbol*          pShadowVar;
    ShadowVarPrefix           pShadowVarPref;
    std::vector<PotentialRename*>* ponlylist;
    std::set<Flag>*           pflagset;
    WhereAndLifetime          lifetimeAndWhere;
  };

  #endif

/* Line 387 of yacc.c  */
#line 147 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_2_
  #define _BISON_CHAPEL_DEFINES_2_

  struct YYLTYPE {
    int         first_line;
    int         first_column;
    int         last_line;
    int         last_column;
    const char* comment;
    const char* prevModule;
  };

  #define YYLTYPE_IS_DECLARED 1
  #define YYLTYPE_IS_TRIVIAL  1

  #endif

/* Line 387 of yacc.c  */
#line 170 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_3_
  #define _BISON_CHAPEL_DEFINES_3_

  class ParserContext {
  public:
    ParserContext()
    {
      scanner       = 0;
      latestComment = 0;
      generatedStmt = 0;
    }

    ParserContext(yyscan_t scannerIn)
    {
      scanner       = scannerIn;
      latestComment = 0;
      generatedStmt = 0;
    }

    yyscan_t    scanner;
    const char* latestComment;
    BaseAST*    generatedStmt;
  };

  #endif


/* Line 387 of yacc.c  */
#line 251 "bison-chapel.cpp"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TIDENT = 258,
     TQUERIEDIDENT = 259,
     INTLITERAL = 260,
     REALLITERAL = 261,
     IMAGLITERAL = 262,
     STRINGLITERAL = 263,
     BYTESLITERAL = 264,
     CSTRINGLITERAL = 265,
     EXTERNCODE = 266,
     TALIGN = 267,
     TAS = 268,
     TATOMIC = 269,
     TBEGIN = 270,
     TBREAK = 271,
     TBOOL = 272,
     TBORROWED = 273,
     TBY = 274,
     TBYTES = 275,
     TCATCH = 276,
     TCLASS = 277,
     TCOBEGIN = 278,
     TCOFORALL = 279,
     TCOMPLEX = 280,
     TCONFIG = 281,
     TCONST = 282,
     TCONTINUE = 283,
     TDEFER = 284,
     TDELETE = 285,
     TDMAPPED = 286,
     TDO = 287,
     TDOMAIN = 288,
     TELSE = 289,
     TENUM = 290,
     TEXCEPT = 291,
     TEXPORT = 292,
     TEXTERN = 293,
     TFALSE = 294,
     TFOR = 295,
     TFORALL = 296,
     TFORWARDING = 297,
     TIF = 298,
     TIMAG = 299,
     TIN = 300,
     TINDEX = 301,
     TINLINE = 302,
     TINOUT = 303,
     TINT = 304,
     TITER = 305,
     TINITEQUALS = 306,
     TLABEL = 307,
     TLAMBDA = 308,
     TLET = 309,
     TLIFETIME = 310,
     TLOCAL = 311,
     TLOCALE = 312,
     TMINUSMINUS = 313,
     TMODULE = 314,
     TNEW = 315,
     TNIL = 316,
     TNOINIT = 317,
     TNONE = 318,
     TNOTHING = 319,
     TON = 320,
     TONLY = 321,
     TOTHERWISE = 322,
     TOUT = 323,
     TOVERRIDE = 324,
     TOWNED = 325,
     TPARAM = 326,
     TPLUSPLUS = 327,
     TPRAGMA = 328,
     TPRIMITIVE = 329,
     TPRIVATE = 330,
     TPROC = 331,
     TPROTOTYPE = 332,
     TPUBLIC = 333,
     TREAL = 334,
     TRECORD = 335,
     TREDUCE = 336,
     TREF = 337,
     TREQUIRE = 338,
     TRETURN = 339,
     TSCAN = 340,
     TSELECT = 341,
     TSERIAL = 342,
     TSHARED = 343,
     TSINGLE = 344,
     TSPARSE = 345,
     TSTRING = 346,
     TSUBDOMAIN = 347,
     TSYNC = 348,
     TTHEN = 349,
     TTHIS = 350,
     TTHROW = 351,
     TTHROWS = 352,
     TTRUE = 353,
     TTRY = 354,
     TTRYBANG = 355,
     TTYPE = 356,
     TUINT = 357,
     TUNDERSCORE = 358,
     TUNION = 359,
     TUNMANAGED = 360,
     TUSE = 361,
     TVAR = 362,
     TVOID = 363,
     TWHEN = 364,
     TWHERE = 365,
     TWHILE = 366,
     TWITH = 367,
     TYIELD = 368,
     TZIP = 369,
     TALIAS = 370,
     TAND = 371,
     TASSIGN = 372,
     TASSIGNBAND = 373,
     TASSIGNBOR = 374,
     TASSIGNBXOR = 375,
     TASSIGNDIVIDE = 376,
     TASSIGNEXP = 377,
     TASSIGNLAND = 378,
     TASSIGNLOR = 379,
     TASSIGNMINUS = 380,
     TASSIGNMOD = 381,
     TASSIGNMULTIPLY = 382,
     TASSIGNPLUS = 383,
     TASSIGNREDUCE = 384,
     TASSIGNSL = 385,
     TASSIGNSR = 386,
     TBANG = 387,
     TBAND = 388,
     TBNOT = 389,
     TBOR = 390,
     TBXOR = 391,
     TCOLON = 392,
     TCOMMA = 393,
     TDIVIDE = 394,
     TDOT = 395,
     TDOTDOT = 396,
     TDOTDOTDOT = 397,
     TEQUAL = 398,
     TEXP = 399,
     TGREATER = 400,
     TGREATEREQUAL = 401,
     THASH = 402,
     TIO = 403,
     TLESS = 404,
     TLESSEQUAL = 405,
     TMINUS = 406,
     TMOD = 407,
     TNOTEQUAL = 408,
     TOR = 409,
     TPLUS = 410,
     TQUESTION = 411,
     TSEMI = 412,
     TSHIFTLEFT = 413,
     TSHIFTRIGHT = 414,
     TSTAR = 415,
     TSWAP = 416,
     TLCBR = 417,
     TRCBR = 418,
     TLP = 419,
     TRP = 420,
     TLSBR = 421,
     TRSBR = 422,
     TNOELSE = 423,
     TUMINUS = 424,
     TUPLUS = 425,
     TLNOT = 426
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


#ifndef YYPUSH_MORE_DEFINED
# define YYPUSH_MORE_DEFINED
enum { YYPUSH_MORE = 4 };
#endif

typedef struct yypstate yypstate;

#if defined __STDC__ || defined __cplusplus
int yypush_parse (yypstate *ps, int pushed_char, YYSTYPE const *pushed_val, YYLTYPE *pushed_loc, ParserContext* context);
#else
int yypush_parse ();
#endif

#if defined __STDC__ || defined __cplusplus
yypstate * yypstate_new (void);
#else
yypstate * yypstate_new ();
#endif
#if defined __STDC__ || defined __cplusplus
void yypstate_delete (yypstate *ps);
#else
void yypstate_delete ();
#endif
/* "%code provides" blocks.  */
/* Line 387 of yacc.c  */
#line 201 "chapel.ypp"

  extern int yydebug;

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str);


/* Line 387 of yacc.c  */
#line 487 "bison-chapel.cpp"

#endif /* !YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 494 "bison-chapel.cpp"
/* Unqualified %code blocks.  */
/* Line 391 of yacc.c  */
#line 38 "chapel.ypp"

  #include <string>
  int         captureTokens;
  std::string captureString;
  bool        parsingPrivate=false;

/* Line 391 of yacc.c  */
#line 209 "chapel.ypp"

  #include "build.h"
  #include "CatchStmt.h"
  #include "DeferStmt.h"
  #include "DoWhileStmt.h"
  #include "driver.h"
  #include "flex-chapel.h"
  #include "ForallStmt.h"
  #include "ForLoop.h"
  #include "IfExpr.h"
  #include "misc.h"
  #include "parser.h"
  #include "stmt.h"
  #include "stringutil.h"
  #include "TryStmt.h"
  #include "vec.h"
  #include "WhileDoStmt.h"

  #include <cstdio>
  #include <cstdlib>
  #include <cstring>
  #include <stdint.h>

  #define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
    if (N) {                                                              \
      (Current).first_line   = (Rhs)[1].first_line;                       \
      (Current).first_column = (Rhs)[1].first_column;                     \
      (Current).last_line    = (Rhs)[N].last_line;                        \
      (Current).last_column  = (Rhs)[N].last_column;                      \
      (Current).comment      = NULL;                                      \
                                                                          \
      if ((Current).first_line)                                           \
        yystartlineno = (Current).first_line;                             \
                                                                          \
    } else  {                                                             \
      (Current) = yylloc;                                                 \
    }

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str) {

    // like USR_FATAL_CONT
    setupError("parser", __FILE__, __LINE__, 3);

    // TODO -- should this begin with error:
    if (!chplParseString) {
      const char* yyText = yyget_text(context->scanner);
      fprintf(stderr, "%s:%d: %s", yyfilename, chplLineno, str);

      if (strlen(yyText) > 0) {
        fprintf(stderr, ": near '%s'", yyText);
      }
    } else {
      fprintf(stderr, "%s: %s", yyfilename, str);

      if (chplParseStringMsg && (strlen(chplParseStringMsg) > 0)) {
        fprintf(stderr, " %s", chplParseStringMsg);
      }
    }

    fprintf(stderr, "\n");
  }


/* Line 391 of yacc.c  */
#line 572 "bison-chapel.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   18140

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  172
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  145
/* YYNRULES -- Number of rules.  */
#define YYNRULES  621
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1113

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   426

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    11,    14,    17,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    47,    49,    52,    55,    59,    63,    67,    71,
      75,    79,    83,    86,    90,    94,    97,   100,   104,   107,
     112,   116,   121,   126,   127,   129,   131,   132,   134,   137,
     141,   145,   147,   150,   152,   156,   160,   166,   167,   169,
     171,   173,   174,   176,   178,   183,   190,   199,   206,   215,
     219,   224,   229,   234,   239,   244,   245,   247,   249,   251,
     253,   255,   257,   259,   261,   263,   265,   267,   269,   271,
     273,   275,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   346,   348,   351,   355,
     357,   359,   362,   363,   367,   369,   371,   373,   375,   377,
     379,   381,   385,   391,   397,   400,   401,   410,   411,   421,
     422,   431,   432,   442,   446,   450,   456,   462,   465,   471,
     475,   482,   489,   494,   500,   506,   510,   514,   521,   527,
     534,   540,   547,   551,   556,   560,   565,   572,   580,   587,
     595,   600,   606,   611,   617,   622,   627,   631,   638,   644,
     651,   657,   666,   674,   677,   681,   685,   688,   691,   695,
     699,   700,   703,   706,   710,   716,   718,   722,   726,   732,
     738,   739,   742,   746,   749,   753,   760,   767,   769,   771,
     773,   774,   777,   778,   781,   785,   791,   797,   799,   801,
     804,   808,   810,   814,   815,   816,   825,   826,   828,   830,
     831,   832,   843,   847,   851,   857,   863,   867,   869,   873,
     875,   878,   880,   882,   884,   886,   888,   890,   892,   894,
     896,   898,   900,   902,   904,   906,   908,   910,   912,   914,
     916,   918,   920,   922,   924,   926,   928,   931,   933,   935,
     937,   939,   941,   943,   945,   947,   949,   951,   953,   955,
     956,   960,   964,   965,   967,   971,   976,   982,   987,   994,
    1001,  1002,  1004,  1006,  1008,  1010,  1012,  1015,  1018,  1020,
    1022,  1024,  1025,  1027,  1029,  1032,  1034,  1036,  1038,  1040,
    1041,  1043,  1046,  1048,  1050,  1052,  1053,  1055,  1057,  1059,
    1061,  1063,  1066,  1068,  1070,  1073,  1076,  1077,  1080,  1083,
    1088,  1093,  1095,  1099,  1103,  1107,  1111,  1115,  1119,  1123,
    1126,  1128,  1130,  1134,  1139,  1144,  1147,  1152,  1153,  1156,
    1159,  1161,  1163,  1165,  1168,  1170,  1175,  1179,  1181,  1185,
    1189,  1195,  1197,  1199,  1203,  1205,  1208,  1212,  1213,  1216,
    1219,  1223,  1226,  1231,  1235,  1239,  1244,  1248,  1249,  1252,
    1255,  1258,  1260,  1261,  1264,  1267,  1270,  1272,  1277,  1282,
    1289,  1293,  1294,  1296,  1298,  1302,  1307,  1311,  1316,  1323,
    1324,  1327,  1330,  1333,  1336,  1338,  1340,  1344,  1348,  1350,
    1354,  1356,  1358,  1360,  1364,  1368,  1369,  1371,  1373,  1377,
    1381,  1385,  1387,  1389,  1391,  1393,  1395,  1398,  1400,  1402,
    1404,  1406,  1408,  1410,  1413,  1418,  1423,  1428,  1434,  1437,
    1440,  1442,  1445,  1447,  1450,  1452,  1455,  1457,  1460,  1462,
    1464,  1466,  1473,  1480,  1485,  1495,  1505,  1513,  1520,  1527,
    1532,  1542,  1552,  1560,  1565,  1572,  1579,  1589,  1599,  1606,
    1608,  1610,  1612,  1614,  1616,  1618,  1620,  1622,  1626,  1627,
    1629,  1634,  1636,  1640,  1645,  1647,  1651,  1656,  1660,  1664,
    1666,  1668,  1671,  1673,  1676,  1678,  1680,  1684,  1686,  1689,
    1692,  1695,  1698,  1701,  1710,  1719,  1729,  1739,  1745,  1751,
    1756,  1758,  1760,  1762,  1764,  1766,  1768,  1770,  1772,  1777,
    1781,  1785,  1788,  1791,  1793,  1794,  1796,  1799,  1802,  1804,
    1806,  1808,  1810,  1812,  1814,  1817,  1820,  1822,  1827,  1832,
    1837,  1841,  1845,  1849,  1853,  1859,  1863,  1868,  1872,  1877,
    1879,  1881,  1883,  1885,  1887,  1889,  1891,  1893,  1895,  1897,
    1901,  1906,  1910,  1915,  1919,  1924,  1928,  1934,  1938,  1942,
    1946,  1950,  1954,  1958,  1962,  1966,  1970,  1974,  1978,  1982,
    1986,  1990,  1994,  1998,  2002,  2006,  2010,  2014,  2018,  2022,
    2026,  2029,  2032,  2035,  2038,  2041,  2044,  2047,  2051,  2055,
    2059,  2063,  2067,  2071,  2075,  2079,  2081,  2083,  2085,  2087,
    2089,  2091
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     173,     0,    -1,   174,    -1,    -1,   174,   175,    -1,   177,
      -1,   176,   177,    -1,    73,     8,    -1,   176,    73,     8,
      -1,   179,    -1,   182,    -1,   188,    -1,   189,    -1,   200,
      -1,   190,    -1,   209,    -1,   212,    -1,   210,    -1,   219,
      -1,   213,    -1,   214,    -1,   218,    -1,   199,    -1,   289,
     157,    -1,    14,   177,    -1,    15,   290,   177,    -1,    16,
     191,   157,    -1,    23,   290,   182,    -1,    28,   191,   157,
      -1,    30,   277,   157,    -1,    52,   193,   177,    -1,    56,
     301,   198,    -1,    56,   198,    -1,    65,   301,   198,    -1,
      87,   301,   198,    -1,    87,   198,    -1,    93,   177,    -1,
     113,   301,   157,    -1,     1,   157,    -1,   180,   181,    59,
     193,    -1,   178,   162,   163,    -1,   178,   162,   183,   163,
      -1,   178,   162,     1,   163,    -1,    -1,    78,    -1,    75,
      -1,    -1,    77,    -1,   162,   163,    -1,   162,   183,   163,
      -1,   162,     1,   163,    -1,   175,    -1,   183,   175,    -1,
     301,    -1,   301,    13,   301,    -1,   184,   138,   301,    -1,
     184,   138,   301,    13,   301,    -1,    -1,   184,    -1,   160,
      -1,   184,    -1,    -1,    78,    -1,    75,    -1,   187,   106,
     184,   157,    -1,   187,   106,   301,    36,   186,   157,    -1,
     187,   106,   301,    13,   301,    36,   186,   157,    -1,   187,
     106,   301,    66,   185,   157,    -1,   187,   106,   301,    13,
     301,    66,   185,   157,    -1,    83,   276,   157,    -1,   304,
     240,   303,   157,    -1,   304,   161,   303,   157,    -1,   304,
     129,   303,   157,    -1,   304,   123,   303,   157,    -1,   304,
     124,   303,   157,    -1,    -1,     3,    -1,     3,    -1,    63,
      -1,    95,    -1,    39,    -1,    98,    -1,   195,    -1,     3,
      -1,    63,    -1,    95,    -1,    39,    -1,    98,    -1,   195,
      -1,     3,    -1,    95,    -1,    17,    -1,    49,    -1,   102,
      -1,    79,    -1,    44,    -1,    25,    -1,    20,    -1,    91,
      -1,    93,    -1,    89,    -1,    70,    -1,    88,    -1,    18,
      -1,   105,    -1,    33,    -1,    46,    -1,    57,    -1,    64,
      -1,   108,    -1,    17,    -1,    49,    -1,   102,    -1,    79,
      -1,    44,    -1,    25,    -1,    20,    -1,    91,    -1,    57,
      -1,    64,    -1,   108,    -1,    93,    -1,    89,    -1,    33,
      -1,    46,    -1,    32,   177,    -1,   182,    -1,    84,   157,
      -1,    84,   303,   157,    -1,   157,    -1,   202,    -1,    78,
     202,    -1,    -1,    75,   201,   202,    -1,   234,    -1,   263,
      -1,   226,    -1,   259,    -1,   222,    -1,   203,    -1,   204,
      -1,    42,   301,   157,    -1,    42,   301,    36,   186,   157,
      -1,    42,   301,    66,   185,   157,    -1,    42,   263,    -1,
      -1,    38,    80,   205,   193,   224,   162,   225,   163,    -1,
      -1,    38,     8,    80,   206,   193,   224,   162,   225,   163,
      -1,    -1,    37,    80,   207,   193,   224,   162,   225,   163,
      -1,    -1,    37,     8,    80,   208,   193,   224,   162,   225,
     163,    -1,    38,   302,   234,    -1,    37,   302,   234,    -1,
      38,   302,   262,   264,   157,    -1,    37,   302,   262,   264,
     157,    -1,    38,    11,    -1,    32,   177,   111,   301,   157,
      -1,   111,   301,   198,    -1,    24,   301,    45,   301,   290,
     198,    -1,    24,   301,    45,   211,   290,   198,    -1,    24,
     301,   290,   198,    -1,    40,   301,    45,   301,   198,    -1,
      40,   301,    45,   211,   198,    -1,    40,   301,   198,    -1,
      40,   211,   198,    -1,    40,    71,   193,    45,   301,   198,
      -1,    41,   301,    45,   301,   198,    -1,    41,   301,    45,
     301,   293,   198,    -1,    41,   301,    45,   211,   198,    -1,
      41,   301,    45,   211,   293,   198,    -1,    41,   301,   198,
      -1,    41,   301,   293,   198,    -1,    41,   211,   198,    -1,
      41,   211,   293,   198,    -1,   166,   276,    45,   301,   167,
     177,    -1,   166,   276,    45,   301,   293,   167,   177,    -1,
     166,   276,    45,   211,   167,   177,    -1,   166,   276,    45,
     211,   293,   167,   177,    -1,   166,   276,   167,   177,    -1,
     166,   276,   293,   167,   177,    -1,   166,   211,   167,   177,
      -1,   166,   211,   293,   167,   177,    -1,   114,   164,   276,
     165,    -1,    43,   301,    94,   177,    -1,    43,   301,   182,
      -1,    43,   301,    94,   177,    34,   177,    -1,    43,   301,
     182,    34,   177,    -1,    43,   301,   240,   301,    94,   177,
      -1,    43,   301,   240,   301,   182,    -1,    43,   301,   240,
     301,    94,   177,    34,   177,    -1,    43,   301,   240,   301,
     182,    34,   177,    -1,    29,   177,    -1,    99,   301,   157,
      -1,   100,   301,   157,    -1,    99,   190,    -1,   100,   190,
      -1,    99,   182,   215,    -1,   100,   182,   215,    -1,    -1,
     215,   216,    -1,    21,   182,    -1,    21,   217,   182,    -1,
      21,   164,   217,   165,   182,    -1,   193,    -1,   193,   137,
     301,    -1,    96,   301,   157,    -1,    86,   301,   162,   220,
     163,    -1,    86,   301,   162,     1,   163,    -1,    -1,   220,
     221,    -1,   109,   276,   198,    -1,    67,   177,    -1,    67,
      32,   177,    -1,   223,   193,   224,   162,   225,   163,    -1,
     223,   193,   224,   162,     1,   163,    -1,    22,    -1,    80,
      -1,   104,    -1,    -1,   137,   276,    -1,    -1,   225,   200,
      -1,   225,   176,   200,    -1,   227,   193,   162,   228,   163,
      -1,   227,   193,   162,     1,   163,    -1,    35,    -1,   229,
      -1,   228,   138,    -1,   228,   138,   229,    -1,   193,    -1,
     193,   117,   301,    -1,    -1,    -1,    53,   231,   242,   232,
     249,   271,   255,   252,    -1,    -1,    47,    -1,    69,    -1,
      -1,    -1,   233,   248,   235,   237,   236,   249,   270,   250,
     255,   251,    -1,   247,   239,   241,    -1,   247,   240,   241,
      -1,   247,   238,   140,   239,   241,    -1,   247,   238,   140,
     240,   241,    -1,   247,     1,   241,    -1,   283,    -1,   164,
     301,   165,    -1,   192,    -1,   134,   193,    -1,   133,    -1,
     135,    -1,   136,    -1,   134,    -1,   143,    -1,   153,    -1,
     150,    -1,   146,    -1,   149,    -1,   145,    -1,   155,    -1,
     151,    -1,   160,    -1,   139,    -1,   158,    -1,   159,    -1,
     152,    -1,   144,    -1,   132,    -1,    19,    -1,   147,    -1,
      12,    -1,   161,    -1,   148,    -1,    51,    -1,   193,   132,
      -1,   117,    -1,   128,    -1,   125,    -1,   127,    -1,   121,
      -1,   126,    -1,   122,    -1,   118,    -1,   119,    -1,   120,
      -1,   131,    -1,   130,    -1,    -1,   164,   243,   165,    -1,
     164,   243,   165,    -1,    -1,   244,    -1,   243,   138,   244,
      -1,   245,   193,   275,   268,    -1,   176,   245,   193,   275,
     268,    -1,   245,   193,   275,   254,    -1,   245,   164,   267,
     165,   275,   268,    -1,   245,   164,   267,   165,   275,   254,
      -1,    -1,   246,    -1,    45,    -1,    48,    -1,    68,    -1,
      27,    -1,    27,    45,    -1,    27,    82,    -1,    71,    -1,
      82,    -1,   101,    -1,    -1,    71,    -1,    82,    -1,    27,
      82,    -1,    27,    -1,   101,    -1,    76,    -1,    50,    -1,
      -1,    27,    -1,    27,    82,    -1,    82,    -1,    71,    -1,
     101,    -1,    -1,    97,    -1,   157,    -1,   252,    -1,   182,
      -1,   199,    -1,   156,   193,    -1,     4,    -1,   142,    -1,
     142,   301,    -1,   142,   253,    -1,    -1,   110,   301,    -1,
      55,   256,    -1,   110,   301,    55,   256,    -1,    55,   256,
     110,   301,    -1,   257,    -1,   256,   138,   257,    -1,   258,
     117,   258,    -1,   258,   149,   258,    -1,   258,   150,   258,
      -1,   258,   143,   258,    -1,   258,   145,   258,    -1,   258,
     146,   258,    -1,    84,   258,    -1,     3,    -1,    95,    -1,
     101,   260,   157,    -1,    26,   101,   260,   157,    -1,    38,
     101,   260,   157,    -1,   193,   261,    -1,   193,   261,   138,
     260,    -1,    -1,   117,   284,    -1,   117,   272,    -1,    71,
      -1,    27,    -1,    82,    -1,    27,    82,    -1,   107,    -1,
      26,   262,   264,   157,    -1,   262,   264,   157,    -1,   265,
      -1,   264,   138,   265,    -1,   193,   271,   268,    -1,   164,
     267,   165,   271,   268,    -1,   103,    -1,   193,    -1,   164,
     267,   165,    -1,   266,    -1,   266,   138,    -1,   266,   138,
     267,    -1,    -1,   117,    62,    -1,   117,   303,    -1,   166,
     167,   284,    -1,   166,   167,    -1,   166,   276,   167,   284,
      -1,   166,   276,   167,    -1,   166,   167,   269,    -1,   166,
     276,   167,   269,    -1,   166,     1,   167,    -1,    -1,   137,
     284,    -1,   137,   269,    -1,   137,   197,    -1,     1,    -1,
      -1,   137,   284,    -1,   137,   272,    -1,   137,   197,    -1,
       1,    -1,   166,   276,   167,   284,    -1,   166,   276,   167,
     272,    -1,   166,   276,    45,   301,   167,   284,    -1,   166,
       1,   167,    -1,    -1,   284,    -1,   253,    -1,   166,   167,
     273,    -1,   166,   276,   167,   273,    -1,   166,   167,   274,
      -1,   166,   276,   167,   274,    -1,   166,   276,    45,   301,
     167,   273,    -1,    -1,   137,   284,    -1,   137,   253,    -1,
     137,   197,    -1,   137,   274,    -1,   301,    -1,   253,    -1,
     276,   138,   301,    -1,   276,   138,   253,    -1,   301,    -1,
     277,   138,   301,    -1,   103,    -1,   303,    -1,   253,    -1,
     278,   138,   278,    -1,   279,   138,   278,    -1,    -1,   281,
      -1,   282,    -1,   281,   138,   282,    -1,   194,   117,   253,
      -1,   194,   117,   303,    -1,   253,    -1,   303,    -1,   194,
      -1,   196,    -1,   285,    -1,   285,   156,    -1,   156,    -1,
     288,    -1,   304,    -1,   287,    -1,   313,    -1,   312,    -1,
      89,   301,    -1,    46,   164,   280,   165,    -1,    33,   164,
     280,   165,    -1,    92,   164,   280,   165,    -1,    90,    92,
     164,   280,   165,    -1,    14,   301,    -1,    93,   301,    -1,
      70,    -1,    70,   301,    -1,   105,    -1,   105,   301,    -1,
      88,    -1,    88,   301,    -1,    18,    -1,    18,   301,    -1,
      22,    -1,    80,    -1,    35,    -1,    40,   301,    45,   301,
      32,   301,    -1,    40,   301,    45,   211,    32,   301,    -1,
      40,   301,    32,   301,    -1,    40,   301,    45,   301,    32,
      43,   301,    94,   301,    -1,    40,   301,    45,   211,    32,
      43,   301,    94,   301,    -1,    40,   301,    32,    43,   301,
      94,   301,    -1,    41,   301,    45,   301,    32,   301,    -1,
      41,   301,    45,   211,    32,   301,    -1,    41,   301,    32,
     301,    -1,    41,   301,    45,   301,    32,    43,   301,    94,
     301,    -1,    41,   301,    45,   211,    32,    43,   301,    94,
     301,    -1,    41,   301,    32,    43,   301,    94,   301,    -1,
     166,   276,   167,   301,    -1,   166,   276,    45,   301,   167,
     301,    -1,   166,   276,    45,   211,   167,   301,    -1,   166,
     276,    45,   301,   167,    43,   301,    94,   301,    -1,   166,
     276,    45,   211,   167,    43,   301,    94,   301,    -1,    43,
     301,    94,   301,    34,   301,    -1,    61,    -1,   288,    -1,
     283,    -1,   307,    -1,   306,    -1,   230,    -1,   299,    -1,
     300,    -1,   297,   148,   301,    -1,    -1,   291,    -1,   112,
     164,   292,   165,    -1,   295,    -1,   292,   138,   295,    -1,
     112,   164,   294,   165,    -1,   295,    -1,   294,   138,   295,
      -1,   296,   283,   271,   268,    -1,   316,    81,   283,    -1,
     301,    81,   283,    -1,    27,    -1,    45,    -1,    27,    45,
      -1,    82,    -1,    27,    82,    -1,   107,    -1,   304,    -1,
     297,   148,   301,    -1,    60,    -1,    60,    70,    -1,    60,
      88,    -1,    60,   105,    -1,    60,    18,    -1,   298,   301,
      -1,    60,    70,   164,   301,   165,   164,   280,   165,    -1,
      60,    88,   164,   301,   165,   164,   280,   165,    -1,    60,
      70,   164,   301,   165,   164,   280,   165,   156,    -1,    60,
      88,   164,   301,   165,   164,   280,   165,   156,    -1,    60,
      70,   164,   301,   165,    -1,    60,    88,   164,   301,   165,
      -1,    54,   264,    45,   301,    -1,   310,    -1,   284,    -1,
     286,    -1,   314,    -1,   315,    -1,   230,    -1,   299,    -1,
     300,    -1,   164,   142,   301,   165,    -1,   301,   137,   301,
      -1,   301,   141,   301,    -1,   301,   141,    -1,   141,   301,
      -1,   141,    -1,    -1,   301,    -1,    99,   301,    -1,   100,
     301,    -1,   301,    -1,   283,    -1,   306,    -1,   307,    -1,
     308,    -1,   304,    -1,   301,   132,    -1,   285,   156,    -1,
     230,    -1,   305,   164,   280,   165,    -1,   305,   166,   280,
     167,    -1,    74,   164,   280,   165,    -1,   301,   140,   194,
      -1,   301,   140,   101,    -1,   301,   140,    33,    -1,   301,
     140,    57,    -1,   301,   140,    20,   164,   165,    -1,   164,
     278,   165,    -1,   164,   278,   138,   165,    -1,   164,   279,
     165,    -1,   164,   279,   138,   165,    -1,    39,    -1,    98,
      -1,   309,    -1,     5,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,    63,    -1,   162,   276,   163,
      -1,   162,   276,   138,   163,    -1,   166,   276,   167,    -1,
     166,   276,   138,   167,    -1,   166,   311,   167,    -1,   166,
     311,   138,   167,    -1,   301,   115,   301,    -1,   311,   138,
     301,   115,   301,    -1,   301,   155,   301,    -1,   301,   151,
     301,    -1,   301,   160,   301,    -1,   301,   139,   301,    -1,
     301,   158,   301,    -1,   301,   159,   301,    -1,   301,   152,
     301,    -1,   301,   143,   301,    -1,   301,   153,   301,    -1,
     301,   150,   301,    -1,   301,   146,   301,    -1,   301,   149,
     301,    -1,   301,   145,   301,    -1,   301,   133,   301,    -1,
     301,   135,   301,    -1,   301,   136,   301,    -1,   301,   116,
     301,    -1,   301,   154,   301,    -1,   301,   144,   301,    -1,
     301,    19,   301,    -1,   301,    12,   301,    -1,   301,   147,
     301,    -1,   301,    31,   301,    -1,   155,   301,    -1,   151,
     301,    -1,    58,   301,    -1,    72,   301,    -1,   132,   301,
      -1,   301,   132,    -1,   134,   301,    -1,   301,    81,   301,
      -1,   301,    81,   211,    -1,   316,    81,   301,    -1,   316,
      81,   211,    -1,   301,    85,   301,    -1,   301,    85,   211,
      -1,   316,    85,   301,    -1,   316,    85,   211,    -1,   155,
      -1,   160,    -1,   116,    -1,   154,    -1,   133,    -1,   135,
      -1,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   497,   497,   502,   503,   509,   510,   515,   516,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   554,
     567,   572,   577,   585,   586,   587,   591,   592,   605,   606,
     607,   612,   613,   618,   623,   628,   632,   639,   644,   648,
     653,   657,   658,   659,   663,   664,   665,   666,   667,   671,
     675,   677,   679,   681,   683,   690,   691,   695,   696,   697,
     698,   699,   700,   703,   704,   705,   706,   707,   708,   720,
     721,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     754,   755,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   771,   772,   773,   774,   778,   779,   783,   784,   788,
     789,   790,   800,   800,   805,   806,   807,   808,   809,   810,
     811,   815,   816,   817,   818,   823,   822,   838,   837,   854,
     853,   869,   868,   884,   888,   893,   901,   912,   919,   920,
     921,   922,   923,   924,   925,   926,   927,   928,   929,   930,
     931,   932,   933,   934,   935,   936,   937,   943,   949,   955,
     961,   968,   975,   979,   986,   990,   991,   992,   993,   994,
     996,   998,  1000,  1005,  1008,  1009,  1010,  1011,  1012,  1013,
    1017,  1018,  1022,  1023,  1024,  1028,  1029,  1033,  1036,  1038,
    1043,  1044,  1048,  1050,  1052,  1059,  1069,  1083,  1088,  1093,
    1101,  1102,  1107,  1108,  1110,  1115,  1131,  1138,  1147,  1155,
    1159,  1166,  1167,  1172,  1177,  1171,  1204,  1207,  1211,  1219,
    1229,  1218,  1261,  1265,  1270,  1274,  1279,  1286,  1287,  1291,
    1292,  1293,  1294,  1295,  1296,  1297,  1298,  1299,  1300,  1301,
    1302,  1303,  1304,  1305,  1306,  1307,  1308,  1309,  1310,  1311,
    1312,  1313,  1314,  1315,  1316,  1317,  1318,  1322,  1323,  1324,
    1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,  1333,  1337,
    1338,  1342,  1346,  1347,  1348,  1352,  1354,  1356,  1358,  1360,
    1365,  1366,  1370,  1371,  1372,  1373,  1374,  1375,  1376,  1377,
    1378,  1382,  1383,  1384,  1385,  1386,  1387,  1391,  1392,  1396,
    1397,  1398,  1399,  1400,  1401,  1405,  1406,  1409,  1410,  1414,
    1415,  1419,  1424,  1428,  1429,  1430,  1438,  1439,  1441,  1443,
    1445,  1450,  1452,  1457,  1458,  1459,  1460,  1461,  1462,  1463,
    1467,  1469,  1474,  1476,  1478,  1483,  1496,  1513,  1514,  1516,
    1521,  1522,  1523,  1524,  1525,  1529,  1535,  1543,  1544,  1552,
    1554,  1559,  1561,  1563,  1568,  1570,  1572,  1579,  1580,  1581,
    1586,  1588,  1590,  1594,  1598,  1600,  1604,  1612,  1613,  1614,
    1615,  1616,  1621,  1622,  1623,  1624,  1625,  1645,  1649,  1653,
    1661,  1668,  1669,  1670,  1674,  1676,  1682,  1684,  1686,  1691,
    1692,  1693,  1694,  1695,  1701,  1702,  1703,  1704,  1708,  1709,
    1713,  1714,  1715,  1719,  1720,  1724,  1725,  1729,  1730,  1734,
    1735,  1736,  1737,  1741,  1742,  1753,  1755,  1757,  1763,  1764,
    1765,  1766,  1767,  1768,  1770,  1772,  1774,  1776,  1778,  1780,
    1783,  1785,  1787,  1789,  1791,  1793,  1795,  1797,  1800,  1802,
    1804,  1809,  1811,  1813,  1815,  1817,  1819,  1821,  1823,  1825,
    1827,  1829,  1831,  1833,  1840,  1846,  1852,  1858,  1867,  1877,
    1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,  1897,  1898,
    1902,  1906,  1907,  1911,  1915,  1916,  1920,  1924,  1928,  1935,
    1936,  1937,  1938,  1939,  1940,  1944,  1945,  1950,  1952,  1956,
    1960,  1964,  1972,  1977,  1983,  1989,  1996,  2005,  2007,  2012,
    2020,  2021,  2022,  2023,  2024,  2025,  2026,  2027,  2028,  2030,
    2032,  2034,  2036,  2038,  2043,  2044,  2048,  2049,  2050,  2054,
    2055,  2056,  2057,  2068,  2069,  2070,  2071,  2075,  2076,  2077,
    2081,  2082,  2083,  2084,  2085,  2093,  2094,  2095,  2096,  2100,
    2101,  2105,  2106,  2107,  2108,  2109,  2110,  2111,  2112,  2113,
    2114,  2115,  2116,  2117,  2121,  2129,  2130,  2134,  2135,  2136,
    2137,  2138,  2139,  2140,  2141,  2142,  2143,  2144,  2145,  2146,
    2147,  2148,  2149,  2150,  2151,  2152,  2153,  2154,  2155,  2156,
    2160,  2161,  2162,  2163,  2164,  2165,  2166,  2170,  2171,  2172,
    2173,  2177,  2178,  2179,  2180,  2185,  2186,  2187,  2188,  2189,
    2190,  2191
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIDENT", "TQUERIEDIDENT", "INTLITERAL",
  "REALLITERAL", "IMAGLITERAL", "STRINGLITERAL", "BYTESLITERAL",
  "CSTRINGLITERAL", "EXTERNCODE", "TALIGN", "TAS", "TATOMIC", "TBEGIN",
  "TBREAK", "TBOOL", "TBORROWED", "TBY", "TBYTES", "TCATCH", "TCLASS",
  "TCOBEGIN", "TCOFORALL", "TCOMPLEX", "TCONFIG", "TCONST", "TCONTINUE",
  "TDEFER", "TDELETE", "TDMAPPED", "TDO", "TDOMAIN", "TELSE", "TENUM",
  "TEXCEPT", "TEXPORT", "TEXTERN", "TFALSE", "TFOR", "TFORALL",
  "TFORWARDING", "TIF", "TIMAG", "TIN", "TINDEX", "TINLINE", "TINOUT",
  "TINT", "TITER", "TINITEQUALS", "TLABEL", "TLAMBDA", "TLET", "TLIFETIME",
  "TLOCAL", "TLOCALE", "TMINUSMINUS", "TMODULE", "TNEW", "TNIL", "TNOINIT",
  "TNONE", "TNOTHING", "TON", "TONLY", "TOTHERWISE", "TOUT", "TOVERRIDE",
  "TOWNED", "TPARAM", "TPLUSPLUS", "TPRAGMA", "TPRIMITIVE", "TPRIVATE",
  "TPROC", "TPROTOTYPE", "TPUBLIC", "TREAL", "TRECORD", "TREDUCE", "TREF",
  "TREQUIRE", "TRETURN", "TSCAN", "TSELECT", "TSERIAL", "TSHARED",
  "TSINGLE", "TSPARSE", "TSTRING", "TSUBDOMAIN", "TSYNC", "TTHEN", "TTHIS",
  "TTHROW", "TTHROWS", "TTRUE", "TTRY", "TTRYBANG", "TTYPE", "TUINT",
  "TUNDERSCORE", "TUNION", "TUNMANAGED", "TUSE", "TVAR", "TVOID", "TWHEN",
  "TWHERE", "TWHILE", "TWITH", "TYIELD", "TZIP", "TALIAS", "TAND",
  "TASSIGN", "TASSIGNBAND", "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE",
  "TASSIGNEXP", "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNREDUCE", "TASSIGNSL",
  "TASSIGNSR", "TBANG", "TBAND", "TBNOT", "TBOR", "TBXOR", "TCOLON",
  "TCOMMA", "TDIVIDE", "TDOT", "TDOTDOT", "TDOTDOTDOT", "TEQUAL", "TEXP",
  "TGREATER", "TGREATEREQUAL", "THASH", "TIO", "TLESS", "TLESSEQUAL",
  "TMINUS", "TMOD", "TNOTEQUAL", "TOR", "TPLUS", "TQUESTION", "TSEMI",
  "TSHIFTLEFT", "TSHIFTRIGHT", "TSTAR", "TSWAP", "TLCBR", "TRCBR", "TLP",
  "TRP", "TLSBR", "TRSBR", "TNOELSE", "TUMINUS", "TUPLUS", "TLNOT",
  "$accept", "program", "toplevel_stmt_ls", "toplevel_stmt", "pragma_ls",
  "stmt", "module_decl_start", "module_decl_stmt", "access_control",
  "opt_prototype", "block_stmt", "stmt_ls", "renames_ls", "opt_only_ls",
  "except_ls", "use_access_control", "use_stmt", "require_stmt",
  "assignment_stmt", "opt_label_ident", "ident_fn_def", "ident_def",
  "ident_use", "internal_type_ident_def", "scalar_type",
  "reserved_type_ident_use", "do_stmt", "return_stmt", "class_level_stmt",
  "@1", "private_decl", "forwarding_stmt", "extern_export_decl_stmt",
  "$@2", "$@3", "$@4", "$@5", "extern_block_stmt", "loop_stmt",
  "zippered_iterator", "if_stmt", "defer_stmt", "try_stmt",
  "catch_stmt_ls", "catch_stmt", "catch_expr", "throw_stmt", "select_stmt",
  "when_stmt_ls", "when_stmt", "class_decl_stmt", "class_tag",
  "opt_inherit", "class_level_stmt_ls", "enum_decl_stmt", "enum_header",
  "enum_ls", "enum_item", "lambda_decl_expr", "$@6", "$@7", "linkage_spec",
  "fn_decl_stmt", "$@8", "$@9", "fn_decl_stmt_inner",
  "fn_decl_receiver_expr", "fn_ident", "assignop_ident", "opt_formal_ls",
  "req_formal_ls", "formal_ls", "formal", "opt_intent_tag",
  "required_intent_tag", "opt_this_intent_tag", "proc_or_iter",
  "opt_ret_tag", "opt_throws_error", "opt_function_body_stmt",
  "function_body_stmt", "query_expr", "var_arg_expr", "opt_lifetime_where",
  "lifetime_components_expr", "lifetime_expr", "lifetime_ident",
  "type_alias_decl_stmt", "type_alias_decl_stmt_inner", "opt_init_type",
  "var_decl_type", "var_decl_stmt", "var_decl_stmt_inner_ls",
  "var_decl_stmt_inner", "tuple_var_decl_component",
  "tuple_var_decl_stmt_inner_ls", "opt_init_expr", "ret_array_type",
  "opt_ret_type", "opt_type", "array_type", "opt_formal_array_elt_type",
  "formal_array_type", "opt_formal_type", "expr_ls", "simple_expr_ls",
  "tuple_component", "tuple_expr_ls", "opt_actual_ls", "actual_ls",
  "actual_expr", "ident_expr", "type_level_expr", "sub_type_level_expr",
  "for_expr", "cond_expr", "nil_expr", "stmt_level_expr",
  "opt_task_intent_ls", "task_intent_clause", "task_intent_ls",
  "forall_intent_clause", "forall_intent_ls", "intent_expr",
  "shadow_var_prefix", "io_expr", "new_maybe_decorated", "new_expr",
  "let_expr", "expr", "opt_expr", "opt_try_expr", "lhs_expr", "fun_expr",
  "call_expr", "dot_expr", "parenthesized_expr", "bool_literal",
  "literal_expr", "assoc_expr_ls", "binary_op_expr", "unary_op_expr",
  "reduce_expr", "scan_expr", "reduce_scan_op_expr", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   172,   173,   174,   174,   175,   175,   176,   176,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   178,
     179,   179,   179,   180,   180,   180,   181,   181,   182,   182,
     182,   183,   183,   184,   184,   184,   184,   185,   185,   186,
     186,   187,   187,   187,   188,   188,   188,   188,   188,   189,
     190,   190,   190,   190,   190,   191,   191,   192,   192,   192,
     192,   192,   192,   193,   193,   193,   193,   193,   193,   194,
     194,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   197,   197,   197,   197,   198,   198,   199,   199,   200,
     200,   200,   201,   200,   202,   202,   202,   202,   202,   202,
     202,   203,   203,   203,   203,   205,   204,   206,   204,   207,
     204,   208,   204,   204,   204,   204,   204,   209,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   211,   212,   212,   212,   212,   212,
     212,   212,   212,   213,   214,   214,   214,   214,   214,   214,
     215,   215,   216,   216,   216,   217,   217,   218,   219,   219,
     220,   220,   221,   221,   221,   222,   222,   223,   223,   223,
     224,   224,   225,   225,   225,   226,   226,   227,   228,   228,
     228,   229,   229,   231,   232,   230,   233,   233,   233,   235,
     236,   234,   237,   237,   237,   237,   237,   238,   238,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   241,
     241,   242,   243,   243,   243,   244,   244,   244,   244,   244,
     245,   245,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   247,   247,   247,   247,   247,   247,   248,   248,   249,
     249,   249,   249,   249,   249,   250,   250,   251,   251,   252,
     252,   253,   253,   254,   254,   254,   255,   255,   255,   255,
     255,   256,   256,   257,   257,   257,   257,   257,   257,   257,
     258,   258,   259,   259,   259,   260,   260,   261,   261,   261,
     262,   262,   262,   262,   262,   263,   263,   264,   264,   265,
     265,   266,   266,   266,   267,   267,   267,   268,   268,   268,
     269,   269,   269,   269,   269,   269,   269,   270,   270,   270,
     270,   270,   271,   271,   271,   271,   271,   272,   272,   272,
     272,   273,   273,   273,   274,   274,   274,   274,   274,   275,
     275,   275,   275,   275,   276,   276,   276,   276,   277,   277,
     278,   278,   278,   279,   279,   280,   280,   281,   281,   282,
     282,   282,   282,   283,   283,   284,   284,   284,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   287,   288,
     289,   289,   289,   289,   289,   289,   289,   289,   290,   290,
     291,   292,   292,   293,   294,   294,   295,   295,   295,   296,
     296,   296,   296,   296,   296,   297,   297,   298,   298,   298,
     298,   298,   299,   299,   299,   299,   299,   299,   299,   300,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   302,   302,   303,   303,   303,   304,
     304,   304,   304,   305,   305,   305,   305,   306,   306,   306,
     307,   307,   307,   307,   307,   308,   308,   308,   308,   309,
     309,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   311,   311,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     313,   313,   313,   313,   313,   313,   313,   314,   314,   314,
     314,   315,   315,   315,   315,   316,   316,   316,   316,   316,
     316,   316
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     2,     2,     3,     2,     4,
       3,     4,     4,     0,     1,     1,     0,     1,     2,     3,
       3,     1,     2,     1,     3,     3,     5,     0,     1,     1,
       1,     0,     1,     1,     4,     6,     8,     6,     8,     3,
       4,     4,     4,     4,     4,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     3,     1,
       1,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     5,     5,     2,     0,     8,     0,     9,     0,
       8,     0,     9,     3,     3,     5,     5,     2,     5,     3,
       6,     6,     4,     5,     5,     3,     3,     6,     5,     6,
       5,     6,     3,     4,     3,     4,     6,     7,     6,     7,
       4,     5,     4,     5,     4,     4,     3,     6,     5,     6,
       5,     8,     7,     2,     3,     3,     2,     2,     3,     3,
       0,     2,     2,     3,     5,     1,     3,     3,     5,     5,
       0,     2,     3,     2,     3,     6,     6,     1,     1,     1,
       0,     2,     0,     2,     3,     5,     5,     1,     1,     2,
       3,     1,     3,     0,     0,     8,     0,     1,     1,     0,
       0,    10,     3,     3,     5,     5,     3,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     3,     0,     1,     3,     4,     5,     4,     6,     6,
       0,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     0,
       1,     2,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     2,     1,     1,     2,     2,     0,     2,     2,     4,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     2,
       1,     1,     3,     4,     4,     2,     4,     0,     2,     2,
       1,     1,     1,     2,     1,     4,     3,     1,     3,     3,
       5,     1,     1,     3,     1,     2,     3,     0,     2,     2,
       3,     2,     4,     3,     3,     4,     3,     0,     2,     2,
       2,     1,     0,     2,     2,     2,     1,     4,     4,     6,
       3,     0,     1,     1,     3,     4,     3,     4,     6,     0,
       2,     2,     2,     2,     1,     1,     3,     3,     1,     3,
       1,     1,     1,     3,     3,     0,     1,     1,     3,     3,
       3,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     4,     4,     4,     5,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     6,     6,     4,     9,     9,     7,     6,     6,     4,
       9,     9,     7,     4,     6,     6,     9,     9,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     1,
       4,     1,     3,     4,     1,     3,     4,     3,     3,     1,
       1,     2,     1,     2,     1,     1,     3,     1,     2,     2,
       2,     2,     2,     8,     8,     9,     9,     5,     5,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       3,     2,     2,     1,     0,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     4,     4,     4,
       3,     3,     3,     3,     5,     3,     4,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     4,     3,     4,     3,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,     0,    89,   562,   563,   564,   565,
     566,   567,     0,   488,    75,   110,   456,   116,   458,   488,
       0,   115,     0,   361,    75,     0,     0,     0,     0,   460,
     534,   534,   559,     0,     0,     0,     0,   114,     0,   237,
     111,     0,   233,     0,     0,   118,     0,   507,   479,   568,
     119,     0,   238,   450,   360,     0,     0,     0,   132,    44,
     113,   459,   362,     0,     0,     0,     0,   454,     0,     0,
     117,     0,     0,    90,     0,   560,     0,     0,     0,   112,
     219,   452,   364,   120,     0,     0,   617,     0,   619,     0,
     620,   621,   533,     0,   618,   615,   437,   129,   616,     0,
       0,     0,     4,     0,     5,     0,     9,    46,    10,     0,
      11,    12,    14,   433,   434,    22,    13,   130,   139,   140,
      15,    17,    16,    19,    20,    21,    18,   138,     0,   136,
       0,   525,     0,   134,   137,     0,   135,   539,   521,   435,
     522,   440,   438,     0,     0,     0,   526,   527,     0,   439,
       0,   540,   541,   542,   561,   520,   442,   441,   523,   524,
       0,    38,    24,   448,     0,     0,   489,    76,     0,     0,
     458,   460,     0,     0,     0,   459,     0,     0,     0,   525,
     539,   438,   526,   527,   457,   439,   540,   541,     0,   488,
       0,     0,   363,     0,   193,     0,   418,     0,   425,   565,
     459,   535,   236,   565,   157,   459,     0,   236,     0,     0,
       0,     0,     0,     0,     0,   144,     0,     0,   425,    83,
      91,   103,    97,    96,   105,    86,    95,   106,    92,   107,
      84,   108,   101,    94,   102,   100,    98,    99,    85,    87,
      93,   104,   109,     0,    88,     0,     0,     0,     0,   367,
       0,   126,    32,     0,   602,   511,   508,   509,   510,     0,
     451,   603,     7,   425,   236,   217,   227,   534,   218,   131,
     332,   437,   415,     0,   414,     0,     0,   127,   538,     0,
       0,    35,     0,   455,   443,     0,   425,    36,   449,     0,
     200,   196,     0,   439,   200,   197,     0,   357,     0,   453,
       0,     0,   604,   606,   532,   601,   600,     0,    48,    51,
       0,     0,   420,     0,   422,     0,     0,   421,     0,     0,
     414,     0,     0,     6,     0,    47,     0,     0,   220,     0,
     318,   317,   239,     0,   436,    23,     0,   512,     0,     0,
       0,     0,     0,     0,   605,     0,     0,     0,     0,     0,
       0,   531,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277,   284,   285,
     286,   281,   283,     0,     0,   279,   282,   280,   278,     0,
     288,   287,     0,     0,   425,   425,     0,     0,     0,    25,
      26,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,    28,     0,    29,     0,   433,   431,     0,   426,   427,
     432,   151,     0,   154,     0,   147,     0,     0,   153,     0,
       0,     0,   166,     0,     0,   165,     0,   174,     0,     0,
       0,   172,     0,     0,    57,   141,     0,   186,     0,     0,
      30,   300,   234,   371,     0,   372,   374,     0,   396,     0,
     377,     0,     0,   125,    31,     0,     0,    33,     0,   133,
     331,     0,    69,   536,   537,   128,     0,    34,   425,     0,
     207,   198,   194,   199,   195,     0,   355,   352,   159,    37,
      50,    49,    52,     0,   569,     0,     0,   555,     0,   557,
       0,     0,     0,     0,     0,     0,     0,     0,   573,     8,
       0,    40,     0,     0,     0,    53,     0,     0,     0,   311,
     366,   487,   597,   596,   599,   608,   607,   612,   611,   593,
     590,   591,   592,   529,   580,     0,   552,   553,   551,   550,
     530,   584,   595,   589,   587,   598,   588,   586,   578,   583,
     585,   594,   577,   581,   582,   579,     0,     0,     0,     0,
       0,     0,     0,   610,   609,   614,   613,   499,   500,   502,
     504,     0,   491,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   571,   488,   488,   162,   353,   365,   419,     0,
       0,   445,     0,     0,   220,     0,     0,   220,   354,     0,
       0,     0,     0,   463,     0,     0,     0,   175,     0,   469,
       0,     0,   173,   616,    60,     0,    53,    58,     0,   185,
       0,     0,     0,   444,   305,   302,   303,   304,   308,   309,
     310,   300,     0,   293,     0,   301,   319,     0,   375,     0,
     123,   124,   122,   121,     0,   395,   394,   521,     0,   369,
     519,   368,     0,     0,   549,   417,   416,     0,     0,     0,
     446,     0,   201,   359,   521,     0,   570,   528,   556,   423,
     558,   424,   182,     0,     0,     0,   572,   180,   473,     0,
     575,   574,     0,    42,    41,    39,     0,    64,     0,     0,
      57,   221,     0,     0,   231,     0,   228,   315,   312,   313,
     316,   240,     0,     0,    73,    74,    72,    71,    70,   547,
     548,   501,   503,     0,   490,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,   429,
     430,   428,   220,     0,   156,   220,     0,   155,     0,   184,
       0,     0,   164,     0,   163,     0,   494,     0,     0,   170,
       0,     0,   168,     0,   142,     0,   143,     0,     0,   188,
       0,   190,   306,   307,     0,   300,   291,     0,   409,   320,
     323,   322,   324,     0,   373,   376,   377,     0,     0,   378,
     379,   517,   518,   209,     0,     0,   208,   211,   447,     0,
     202,   205,     0,   356,   183,     0,     0,     0,     0,   181,
       0,    55,    54,     0,     0,     0,   236,   226,     0,   229,
     225,   314,   319,   289,    77,   272,    91,   270,    97,    96,
      80,    95,    92,   275,   107,    78,   108,    94,    98,    79,
      81,    93,   109,   269,   251,   254,   252,   253,   264,   255,
     268,   260,   258,   271,   274,   259,   257,   262,   267,   256,
     261,   265,   266,   263,   273,     0,   249,     0,    82,     0,
     289,   289,   247,   554,   492,   377,   539,   539,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   160,     0,   222,
       0,   222,   167,     0,     0,   462,     0,   461,     0,   493,
       0,     0,   468,   171,     0,   467,   169,    54,   187,   478,
     189,     0,   409,   294,     0,     0,   377,   321,   336,   370,
     400,     0,   571,   425,   425,     0,   213,     0,     0,     0,
     203,     0,   178,   475,     0,     0,   176,   474,     0,   576,
       0,     0,    57,    65,    67,   216,   132,   236,   215,   236,
     223,   232,   230,     0,   300,   246,   250,     0,   276,     0,
     242,   243,   496,     0,     0,     0,     0,     0,     0,     0,
       0,   222,   236,   222,   236,   466,     0,     0,   495,   472,
       0,     0,     0,   192,   377,   409,     0,   412,   411,   413,
     521,   333,   297,   295,     0,     0,     0,     0,   398,   521,
       0,     0,   214,   212,     0,   206,     0,   179,     0,   177,
      56,     0,     0,   224,   391,     0,   325,     0,   248,    77,
      79,   289,   289,     0,     0,     0,     0,     0,     0,   236,
     150,   236,   146,     0,     0,     0,     0,   191,   296,   377,
     401,     0,   335,   334,   350,     0,   351,   338,   341,     0,
     337,   329,   330,   235,     0,   513,   514,   204,     0,     0,
      66,    68,     0,   390,   389,   521,   326,   336,   290,   244,
     245,     0,     0,     0,     0,     0,     0,   152,   148,   465,
     464,   471,   470,   299,   298,   403,   404,   406,   521,     0,
     571,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   521,   515,   516,   477,   476,     0,   381,     0,     0,
       0,   405,   407,   340,   342,   343,   346,   347,   348,   344,
     345,   339,   386,   384,   521,   571,   327,   241,   328,   401,
     385,   521,   408
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   309,   103,   609,   105,   106,   107,   326,
     108,   310,   604,   608,   605,   109,   110,   111,   112,   168,
     846,   247,   113,   244,   114,   635,   252,   115,   116,   264,
     117,   118,   119,   416,   586,   412,   583,   120,   121,   714,
     122,   123,   124,   471,   652,   782,   125,   126,   648,   777,
     127,   128,   507,   796,   129,   130,   685,   686,   179,   245,
     626,   132,   133,   509,   802,   691,   849,   850,   438,   935,
     442,   622,   623,   624,   625,   692,   332,   763,  1047,  1107,
    1033,   272,   972,   976,  1027,  1028,  1029,   134,   298,   476,
     135,   136,   248,   249,   446,   447,   639,  1044,   996,   450,
     636,  1066,   969,   896,   311,   195,   315,   316,   407,   408,
     409,   180,   138,   139,   140,   141,   181,   143,   165,   166,
     561,   428,   735,   562,   563,   144,   145,   182,   183,   148,
     207,   410,   185,   150,   186,   187,   153,   154,   155,   321,
     156,   157,   158,   159,   160
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1000
static const yytype_int16 yypact[] =
{
   -1000,   113,  2867, -1000,   -54, -1000, -1000, -1000, -1000, -1000,
   -1000, -1000,  4352,    79,   233, -1000, 13071, -1000, 15342,    79,
   10021, -1000,   441,   205,   233,  4352, 10021,  4352,   139, 16613,
   10183,  7939, -1000,  8101,  8879,  6633, 10021, -1000,   156, -1000,
   -1000, 16789, -1000,  2667,  9041, -1000, 10021,   187, -1000, -1000,
   -1000, 10021, -1000, 13071, -1000, 10021,   235,   204,    61, 15152,
   -1000, 16965, -1000,  9205,  7451, 10021,  9041, 13071, 10021,   285,
   -1000,   217,  4352, -1000, 10021, -1000, 10345, 10345, 16789, -1000,
   -1000, 13071, -1000, -1000, 10021, 10021, -1000, 10021, -1000, 10021,
   -1000, -1000, 12613, 10021, -1000, 10021, -1000, -1000, -1000,  3370,
    6797,  8265, -1000,  4190, -1000,   202, -1000,   338, -1000,   313,
   -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000,
   -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, 16789, -1000,
   16789,   272,   161, -1000, -1000,  2667, -1000,   271, -1000,   292,
   -1000, -1000,   294,   305,   341, 10021,   342,   364, 17396, 12606,
     344,   375,   378, -1000, -1000, -1000, -1000, -1000, -1000, -1000,
     163, -1000, -1000, 17396,   277,  4352, -1000, -1000,   379, 10021,
   -1000, -1000, 10021, 10021, 10021, -1000, 10021,  9205,  9205,   345,
   -1000, -1000, -1000, -1000,   314,   349, -1000, -1000,   328, 15383,
   16789,  2667, -1000,   382, -1000,   -33, 17396,   387,  7615,   460,
   17141, 17396,   376,   461, -1000, 18032, 16789,   376, 16789,   381,
      13, 14780,    58, 14748,   284, -1000, 15189, 13996,  7615, -1000,
   -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000,
   -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000,
   -1000, -1000, -1000,  4352, -1000,   383,  2210,    97,     3, -1000,
    4352, -1000, -1000, 14924,  1185, -1000,   385,   388, -1000, 14924,
     314,  1185, -1000,  7615,  2408, -1000, -1000,  9367, -1000, -1000,
   -1000, 16789, -1000,   142, 17396, 10021, 10021, -1000, 17396,   386,
   15157, -1000, 14924,   314, 17396,   389,  7615, -1000, 17396, 15649,
   -1000, -1000, 15744,  2669, -1000, -1000, 15793,   434,   405,   314,
   14924, 15825,   145,   145,  1049,  1185,  1185,   -55, -1000, -1000,
    3534,   150, -1000, 10021, -1000,   -37,    16, -1000,   -44,    18,
   15969,   104,   559, -1000,  3698, -1000,   512, 10021,   435,   411,
   -1000, -1000, -1000,   152,   360, -1000, 10021,   442, 10021, 10021,
   10021,  8879,  8879, 10021,   361, 10021, 10021, 10021, 10021, 10021,
     717, 12613, 10021, 10021, 10021, 10021, 10021, 10021, 10021, 10021,
   10021, 10021, 10021, 10021, 10021, 10021, 10021, -1000, -1000, -1000,
   -1000, -1000, -1000,  8427,  8427, -1000, -1000, -1000, -1000,  8427,
   -1000, -1000,  8427,  8427,  7615,  7615,  8879,  8879,  7289, -1000,
   -1000, 15424, 15568, 16001,    52,  3862, -1000,  8879,    13,   418,
     222, -1000, 10021, -1000, 10021,   459, -1000,   422,   445, -1000,
   -1000, -1000, 16789, -1000,  2667, -1000, 16789,   431, -1000,  2667,
     547,  9205, -1000,  4514,  8879, -1000,   432, -1000,    13,  4676,
    8879, -1000,    13, 10507, 10021, -1000,  4352,   561, 10021,   437,
   -1000,   602, -1000, -1000,  2210, -1000,   463,   438, -1000, 10669,
     480, 10021,  2667, -1000, -1000, 10021, 10021, -1000,   440, -1000,
   -1000,  9205, -1000, 17396, 17396, -1000,    26, -1000,  7615,   443,
   -1000,   585, -1000,   585, -1000, 10831,   469, -1000, -1000, -1000,
   -1000, -1000, -1000,  8591, -1000, 13749,  6961, -1000,  7125, -1000,
    4352,   446,  8879,  6138,  3206,   449, 10021,  6468, -1000, -1000,
     309, -1000,  4026, 16789,   240, 15338,  9205,   447, 17975,   168,
   -1000, 16050, 17437, 17437,   293, -1000,   293, -1000,   293, 13605,
     987,  2507,   650,   314,   145,   464, -1000, -1000, -1000, -1000,
    1049,  1718,   293,   500,   500, 17437,   500,   500,  1540,   145,
    1718, 17822,  1540,  1185,  1185,   145,   453,   466,   468,   470,
     473,   477,   467, -1000,   293, -1000,   293,    55, -1000, -1000,
   -1000,   108, -1000,  1883, 17540,   215, 10993,  8879, 11155,  8879,
   10021,  8879, 13331,    79, 16145, -1000, -1000, -1000, 17396, 16194,
    7615, -1000,  7615, 16789,   435,   244, 16789,   435, -1000,   251,
   10021,   141, 10021, 17396,    62, 14981,  7289, -1000, 10021, 17396,
      59, 14837, -1000,   474,   505,   481, 16234,   505,   488,   612,
   16378,  4352, 15013, -1000,    70, -1000, -1000, -1000, -1000, -1000,
   -1000,   857,   160, -1000, 13410, -1000,   220,   483,  2210,    97,
     139,   156, 10021, 10021,  5974, -1000, -1000,   412,  7777, -1000,
   17396, -1000, 13795, 13852, -1000, -1000, 17396,   486,    25,   492,
   -1000,  2496, -1000, -1000,   278, 16789, -1000, -1000, -1000, -1000,
   -1000, -1000, -1000,  4352,   -38,  2269, -1000, -1000, 17396,  4352,
   17396, -1000, 16419, -1000, -1000, -1000, 10021, -1000, 10021, 10507,
   10021,   515,  1339,   498,   545,   200, -1000,   581, -1000, -1000,
   -1000, -1000,  8719,   507, -1000, -1000, -1000, -1000, -1000, -1000,
   -1000, -1000, -1000,  7289, -1000,    36,  8879,  8879, 10021,   633,
   16459, 10021,   645, 16603,   511, 13563,    13,    13, -1000, -1000,
   -1000, -1000,   435,   517, -1000,   435,   518, -1000, 14924, -1000,
   14072,  4838, -1000,  5000, -1000,   218, -1000, 14148,  5162, -1000,
      13,  5324, -1000,    13, -1000, 10021, -1000,  4352, 10021, -1000,
    4352,   649, -1000, -1000, 16789,  1095, -1000,  2210,   548,   604,
   -1000, -1000, -1000,    41, -1000, -1000,   480,   523,    71, -1000,
   -1000,   528,   533, -1000,  5486,  9205, -1000, -1000, -1000, 16789,
   -1000,   567,   328, -1000, -1000,  5648,   531,  5810,   538, -1000,
   10021, 16635, 15600,   552,   556,   560, 17675, -1000, 10021, 16789,
   -1000, -1000,   220,   564,   320, -1000,   582, -1000,   584,   590,
     600,   598,   599, -1000,   603,   610,   605,   606,   607,   333,
     616,   609,   613, -1000, -1000, 16789, -1000, -1000, -1000, -1000,
   -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000,
   -1000, -1000, -1000, -1000, -1000, 10021, -1000,   622,   623,   618,
     564,   564, -1000, -1000, -1000,   480,   219,   231, 16779, 11317,
   11479, 16811, 11641, 11803, 11965, 12127, -1000, -1000,   597, -1000,
     617, -1000, -1000,  4352, 10021, 17396, 10021, 17396,  7289, -1000,
    4352, 10021, 17396, -1000, 10021, 17396, -1000, 17396, -1000, 17396,
     710,  4352,   548, -1000,   595,  9531,   166, -1000,    84, -1000,
   -1000,  8879, 13201,  7615,  7615,  4352, -1000,    54,   596, 10021,
   -1000, 10021, -1000, 17396,  4352, 10021, -1000, 17396,  4352, 17396,
   10021, 10507, 10021, -1000, -1000, -1000, -1000,  2408, -1000,  1528,
   -1000, 17396, -1000,   103,   602, -1000, -1000, 13893, -1000, 13507,
   -1000, -1000, -1000, 10021, 10021, 10021, 10021, 10021, 10021, 10021,
   10021, -1000, 17689, -1000, 17762, 16378, 14224, 14300, -1000, 16378,
   14376, 14452,  4352, -1000,   480,   548,  6303, -1000, -1000, -1000,
     111,  9205, -1000, -1000,    37, 10021,   -35, 13651, -1000,   783,
     601,   615,   387, -1000,   328, 17396, 14528, -1000, 14604, -1000,
   17396,   608,   624, -1000, -1000, 12289,   665,   242, -1000,   632,
     652,   564,   564, 16955, 16987, 17131, 17163, 17307, 17339, 17776,
   -1000, 17849, -1000,  4352,  4352,  4352,  4352, -1000, -1000,   166,
    9695,    74, -1000, 17396, -1000,    82, -1000,   146, -1000,   565,
   17483, -1000, -1000, -1000, 12127,   629,   636, -1000,  4352,  4352,
   -1000, -1000,  3039, -1000, -1000,   343, -1000,    84, -1000, -1000,
   -1000, 10021, 10021, 10021, 10021, 10021, 10021, -1000, -1000, 16378,
   16378, 16378, 16378, -1000, -1000, -1000, -1000, -1000,   128,  8879,
   12777, -1000, 10021,    37,    82,    82,    82,    82,    82,    82,
      37,   832, -1000, -1000, 16378, 16378,   621, 12451,    95,   148,
   13708, -1000, -1000, 17396, -1000, -1000, -1000, -1000, -1000, -1000,
   -1000,   655, -1000, -1000,   404, 12941, -1000, -1000, -1000,  9859,
   -1000,   436, -1000
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1000, -1000, -1000,     4,  -335,  2079, -1000, -1000, -1000, -1000,
     106,   471,  -322,  -664,  -653, -1000, -1000, -1000,    67,   772,
   -1000,  1050,  -187,  -672, -1000,  -859,   558,  -941,  -750, -1000,
     -56, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000,    45,
   -1000, -1000, -1000,   503, -1000,    19, -1000, -1000, -1000, -1000,
   -1000, -1000,  -526,  -722, -1000, -1000, -1000,     1,  1034, -1000,
   -1000, -1000,   248, -1000, -1000, -1000, -1000,  -135,  -148,  -784,
   -1000,  -129,    51,   186, -1000, -1000, -1000,    11, -1000, -1000,
    -275,     9,  -203,  -228,  -260,  -252,  -196, -1000,  -177, -1000,
       8,   789,  -107,   373, -1000,  -435,  -741,  -801, -1000,  -579,
    -468,  -999,  -963,  -854,   -19, -1000,    42, -1000,  -216, -1000,
     245,   491,  -416, -1000, -1000, -1000,  1149, -1000,    -9, -1000,
   -1000,  -201, -1000,  -581, -1000, -1000, -1000,  1232,  1592,   -12,
     796,    31,   700, -1000,  1706,  1789, -1000, -1000, -1000, -1000,
   -1000, -1000, -1000, -1000,  -371
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -572
static const yytype_int16 yytable[] =
{
     163,   383,   439,   269,   184,   504,   102,   653,   189,   627,
     188,   405,   432,   399,   196,   736,   794,   565,   201,   201,
     848,   211,   213,   216,   217,   899,   793,   647,   333,   417,
     191,   405,   253,   637,   254,  1032,   967,   448,   964,   259,
    1024,   260,   448,   261,   273,   250,   930,   458,   451,    64,
     766,   274,   278,   280,   282,   283,   284,  1067,   723,   654,
     288,   726,   289,   492,   292,   296,   940,   941,   426,   299,
     469,  1091,   300,   301,   426,   302,   405,   303,   210,   212,
     304,   305,   319,   306,   400,  1024,   250,   274,   278,   320,
     250,   738,   774,  -210,   731,   279,  -392,   571,   448,   405,
     701,   486,   161,   161,   994,   402,   621,  1092,   480,   314,
    1112,  1019,   607,     3,   942,   752,   901,   491,   495,  1069,
     -45,  1025,   854,   490,   403,  -392,   855,   395,   487,   785,
     426,   317,  1026,   337,   775,  -210,  1043,   702,   -45,   974,
     571,   452,  -392,   291,   295,   383,   318,   952,  1032,   954,
     251,  -392,   753,  -392,   488,   973,   493,   163,  -387,   394,
     391,   392,   393,   529,   288,   274,   320,   -63,   551,   552,
     426,   426,   251,   449,  -392,   395,   340,  1026,   449,   993,
     398,   489,   290,   294,   898,   494,   278,  -387,   776,  -210,
     493,   164,   461,   765,   975,   687,   868,   405,   405,   870,
    -387,  -392,   930,  -392,   930,   255,   278,   406,   459,   493,
     414,   330,   493,  -387,  -392,   419,   395,  1049,  1050,   572,
     395,   395,   191,  1018,   395,   565,   341,   406,  -410,  1009,
     342,  1011,    64,   493,   449,  -392,   167,   331,   902,   688,
     995,  1070,   497,   262,   386,  -402,   703,   759,   387,  -410,
     689,   278,   649,  -410,  -392,   201,  1072,   256,   992,   930,
    -387,   930,  1105,   463,   464,  -387,  -402,   848,   991,   690,
    -402,   498,   406,   704,   278,   257,  -410,   344,  1064,   461,
     461,   405,   348,   638,  1073,   350,  1103,   192,   483,   353,
     452,   760,   258,  -402,   396,   406,   707,   958,   755,   462,
     387,   485,   761,   198,  1110,  1106,   729,   585,   971,   510,
     395,    23,   589,   484,   482,   505,   251,   251,   251,   251,
     218,   762,   894,   437,   511,   756,   512,   513,   514,   516,
     518,   519,   565,   520,   521,   522,   523,   524,   799,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,    54,   878,  -498,   607,   251,
     452,   278,   278,   800,   324,   251,    62,   278,   263,  -497,
     278,   278,   278,   278,   554,   556,   564,   285,   676,   577,
     755,   286,   452,   879,  -498,   574,   515,   517,   251,   452,
     578,    82,   579,   406,   406,   405,  -497,   677,  -388,   740,
     743,   724,   591,    23,   546,   547,   251,  1048,   727,   274,
     548,   593,   595,   549,   550,   325,  -358,   599,   601,   327,
     621,   606,   606,    39,   610,   344,   612,  -388,  -481,  -484,
     348,   553,   555,   350,   978,  -358,  -546,   353,  -546,   640,
    -388,   388,   573,   642,   643,    52,   344,    54,   334,   646,
     413,  -480,   -83,  -388,   350,   418,   278,  -393,    62,  -380,
     -89,   929,   335,   786,   788,   -85,   161,  -393,    23,   594,
     645,   646,   673,   -90,   278,   600,   278,   406,   783,   970,
     665,   646,   668,    82,   670,   672,   979,   681,  -380,   336,
     395,  -382,   645,   137,   274,   314,  -393,   314,   404,  -485,
    -388,  -380,   645,   137,   251,  -388,   482,   565,   384,  -546,
     385,  -546,    54,  -543,  -380,  -543,   137,   317,   137,   317,
    -382,  -486,  -393,    62,  -545,  -544,  -545,  -544,   659,  -393,
     661,   340,  -483,  -382,   251,  -482,   390,   664,   251,   401,
     411,   415,   190,   465,   851,   421,  -382,   441,    82,   455,
    -393,   475,   456,   468,   593,   710,   599,   713,   610,   715,
     668,  -380,   477,   137,   716,   717,  -380,   499,   278,  -393,
     278,   503,   506,   508,  -393,   576,   580,  -393,   728,  1045,
     730,   341,   350,   582,   564,   342,   737,   581,   588,   719,
     137,   406,   590,  -382,   137,   611,   596,   638,  -382,   621,
     607,   628,   613,   629,  1068,   644,   651,   655,   650,   682,
     694,   720,   709,   663,   712,   768,   669,   929,  1081,   929,
     284,   288,   320,   695,   281,   696,   278,   697,   693,   614,
     698,   -59,   344,   345,   700,   346,   347,   348,   744,   349,
     350,   351,   699,   676,   353,   746,   747,   615,   764,   773,
     616,   359,   360,   461,  1068,   363,   137,   778,   364,   365,
     366,   797,   798,   801,   791,   859,   792,   606,   606,   770,
     617,  1104,   853,   618,   929,    56,   929,   862,   864,   869,
     871,   340,  1074,   891,   619,   895,   897,   980,   981,  1111,
     900,   564,   903,  1068,   516,   554,   858,   904,   914,   861,
     251,   251,   149,   620,   909,   918,   251,   251,  1075,   923,
    1076,  1077,   149,   924,  1078,  1079,   405,   405,   751,   875,
       5,   877,  -110,   925,  -116,   149,   882,   149,   934,   885,
    -115,   341,   -86,   887,   137,   342,   889,   525,  -114,  -111,
    -292,   137,   -84,  -118,   962,  -119,  -113,  -117,   -87,  -112,
     526,   515,   553,  -120,   938,   -88,   907,   780,   939,   951,
     965,   984,  1046,   274,   -83,  1040,  1035,  -292,   422,   425,
     427,   431,   149,   913,   527,   917,   293,   293,   919,   953,
    1036,  1041,   344,   345,   -85,  1082,   931,   348,  1102,   349,
     350,  1002,  1083,  1073,   353,   502,   193,   473,   908,   149,
     932,   137,   360,   149,  1001,   997,   893,   754,   364,   365,
     366,   454,    73,   933,  1108,   137,  1063,   457,   528,  1089,
    1101,  1094,   251,   251,   215,   641,   202,   721,  -397,  1071,
       0,     0,     0,   937,   251,     0,   437,     0,  -397,     0,
     467,     0,     0,   437,     0,     0,   251,   875,   877,   251,
     882,   885,   913,   917,     0,     0,     0,     0,   478,     0,
       0,   955,   956,     0,   957,   149,   564,  -397,   959,   960,
       0,   269,   961,     0,     0,     0,     0,  -399,  1095,  1096,
    1097,  1098,  1099,  1100,   614,     0,   137,  -399,   910,   977,
     668,   278,   278,  -397,     0,     0,     0,   985,     0,   986,
    -397,     0,   615,   988,   968,   616,     0,     0,   990,   606,
     606,     0,   406,   406,   137,     0,  -399,     0,     0,     0,
     137,  -397,     0,     0,     0,   617,     0,   137,   618,     0,
     322,   955,  1003,  1004,   959,  1005,  1006,  1007,  1008,   619,
    -397,     0,  -399,   149,     0,  -397,     0,  1021,  -397,  -399,
     149,     0,     0,     0,   320,     0,   575,     0,   620,  1023,
       0,     0,     0,  1030,     0,     0,     0,     0,     0,     0,
    -399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1022,   137,     0,     0,     0,   137,   597,     0,     0,  -399,
     602,     0,     0,   137,  -399,     0,     0,  -399,     0,     0,
       0,  1059,  1060,  1061,  1062,     0,     0,     0,     0,     0,
     149,     0,     0,   251,     0,     0,     0,     0,   340,     0,
       0,     0,   917,  1088,   149,     0,  1084,  1085,     0,  1065,
     320,     0,     0,     0,     0,     0,   131,     0,     0,  1059,
    1060,  1061,  1062,  1084,  1085,     0,   131,     0,     0,     0,
       0,     0,     0,     0,   705,     0,     0,  1090,   668,   131,
    1093,   131,   437,   437,     0,     0,   437,   437,   341,     0,
       0,     0,   342,     0,     0,     0,     0,     0,     0,  1065,
     340,     0,  1031,     0,     0,     0,     0,     0,     0,     0,
    1037,   243,   437,   668,   437,   149,     0,   917,     0,     0,
       0,     0,   137,     0,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1065,   344,
       0,     0,   614,   149,   348,     0,   349,   350,   297,   149,
     341,   353,     0,   131,   342,     0,   149,   131,     0,   360,
     615,     0,     0,   616,     0,   364,   365,   366,     0,     0,
       0,   142,   732,   734,   137,     0,     0,     0,   739,   742,
     137,   142,     0,   617,     0,     0,   618,     0,    56,     0,
       0,     0,     0,     0,   142,     0,   142,   619,   328,     0,
     329,   344,   345,   852,   346,   347,   348,     0,   349,   350,
     149,     0,     0,   353,   149,  1031,   620,   856,   857,   131,
     359,   360,   149,     0,   363,     0,     0,   364,   365,   366,
       0,     0,     0,     0,     0,     0,   340,     0,     0,     0,
       0,   142,   137,     0,   137,     0,     0,     0,     0,   137,
       0,     0,   137,     0,   146,     0,     0,     0,   137,     0,
     297,   137,     0,     0,   146,     0,     0,     0,   142,     0,
       0,     0,   142,     0,     0,     0,   297,   146,   420,   146,
       0,     0,     0,     0,     0,   137,   341,     0,     0,     0,
     342,     0,     0,     0,   866,   867,   137,   131,   137,     0,
       0,     0,     0,     0,   131,     0,   872,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   445,     0,   883,     0,
       0,   886,     0,     0,   146,     0,     0,     0,     0,     0,
       0,   149,     0,     0,   142,     0,     0,   344,     0,     0,
       0,   460,   348,     0,   349,   350,     0,     0,     0,   353,
       0,   146,     0,     0,     0,   146,     0,   360,     0,     0,
     795,     0,     0,     0,   131,   366,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,     0,
       0,  -222,     0,   149,   137,  -222,  -222,     0,     0,   149,
       0,   137,     0,     0,  -222,     0,  -222,  -222,     0,     0,
       0,  -222,   137,     0,     0,     0,  -222,     0,     0,  -222,
       0,     0,   142,     0,     0,     0,   137,   146,     0,   142,
       0,     0,     0,     0,     0,   137,     0,     0,  -222,   137,
    -222,     0,  -222,     0,  -222,  -222,     0,  -222,     0,  -222,
       0,  -222,     0,     0,     0,     0,     0,     0,     0,   131,
       0,   149,     0,   149,     0,     0,     0,     0,   149,     0,
    -222,   149,     0,  -222,     0,     0,  -222,   149,     0,     0,
     149,     0,     0,   137,     0,     0,     0,   131,     0,   142,
       0,     0,   584,   131,     0,   983,   587,     0,     0,     0,
     131,     0,     0,   142,   149,   146,     0,     0,     0,     0,
       0,     0,   146,     0,     0,   149,     0,   149,     0,     0,
       0,     0,     0,     0,   445,     0,  -222,     0,     0,     0,
       0,     0,  -222,     0,   137,   137,   137,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   131,     0,     0,     0,   131,   137,
     137,     0,     0,     0,     0,     0,   131,     0,     0,     0,
       0,     0,   146,     0,   142,     0,     0,     0,     0,     0,
     265,     0,     0,   675,    22,    23,   146,     0,   684,     0,
       0,     0,     0,   266,     0,    30,   267,     0,     0,     0,
      35,   340,   142,   149,     0,    39,     0,     0,   142,     0,
     149,     0,     0,     0,     0,   142,     0,     0,     0,     0,
       0,   149,     0,     0,   147,     0,     0,    52,     0,    54,
       0,   322,     0,   926,   147,   149,   927,     0,   268,     0,
      62,     0,     0,     0,   149,     0,     0,   147,   149,   147,
       0,   341,     0,     0,     0,   342,     0,   146,     0,    78,
       0,     0,    80,   722,     0,    82,   725,     0,     0,   142,
       0,     0,     0,   142,     0,   131,     0,     0,     0,     0,
       0,   142,     0,     0,     0,   146,     0,     0,     0,     0,
       0,   146,   149,     0,   147,     0,     0,     0,   146,     0,
       0,     0,   344,   345,   758,   346,   347,   348,   445,   349,
     350,     0,     0,     0,   353,    97,     0,     0,     0,     0,
       0,   147,   360,     0,     0,   147,     0,   131,   364,   365,
     366,   781,     0,   131,     0,   297,     0,     0,   151,     0,
       0,     0,     0,   149,   149,   149,   149,     0,   151,     0,
       0,     0,   146,     0,     0,     0,   146,     0,     0,     0,
       0,   151,     0,   151,   146,     0,     0,     0,   149,   149,
       0,     0,   847,     0,     0,     0,     0,     0,     0,   340,
       0,     0,     0,     0,     0,     0,     0,   147,     0,     0,
     142,     0,     0,     0,     0,   131,     0,   131,     0,     0,
       0,     0,   131,     0,     0,   131,     0,     0,   151,     0,
       0,   131,     0,     0,   131,     0,     0,     0,     0,     0,
       0,   152,     0,     0,     0,     0,     0,     0,     0,   341,
       0,   152,     0,   342,   892,   151,     0,   445,   131,   151,
       0,     0,   142,     0,   152,     0,   152,     0,   142,   131,
       0,   131,     0,     0,     0,     0,     0,     0,     0,   781,
       0,     0,     0,     0,     0,   147,     0,     0,     0,     0,
       0,     0,   147,   146,     0,     0,     0,     0,     0,   684,
     344,   345,     0,   346,   347,   348,     0,   349,   350,   351,
       0,   152,   353,   354,   355,     0,     0,   357,   358,   359,
     360,   151,     0,   363,     0,   936,   364,   365,   366,     0,
     142,     0,   142,     0,     0,     0,     5,   142,   152,     0,
     142,     0,   152,     0,     0,   146,   142,     0,     0,   142,
      15,   146,   147,    17,     0,     0,     0,   131,    21,     0,
       0,     0,     0,     0,   131,     0,   147,     0,     0,     0,
       0,     0,     0,   142,     0,   131,     0,    37,     0,     0,
       0,     0,    40,     0,   142,     0,   142,     0,     0,   131,
      45,     0,     0,     0,     0,     0,     0,    50,   131,   151,
       0,     0,   131,     0,   152,     0,   151,     0,     0,     0,
       0,     0,    60,   146,     0,   146,     0,     0,     0,     0,
     146,     0,     0,   146,    70,     0,     0,     0,    73,   146,
       0,     0,   146,     0,     0,    79,     0,   147,     0,   847,
       0,    83,     0,     0,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   146,     0,     0,     0,
       0,     0,     0,     0,     0,   147,   151,   146,     0,   146,
       0,   147,   142,     0,     0,     0,     0,     0,   147,   142,
     151,     0,   152,     0,     0,     0,     0,     0,     0,   152,
     142,     0,     0,     0,     0,     0,     0,   131,   131,   131,
     131,     0,     0,     0,   142,     0,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,   142,     0,     0,
       0,     0,   131,   131,     0,     0,     0,     0,     0,     0,
       0,   104,   147,     0,     0,     0,   147,     0,     0,     0,
       0,   162,     0,     0,   147,     0,     0,     0,     0,   152,
       0,   151,     0,     0,   194,   146,   197,     0,     0,     0,
       0,   142,   146,   152,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   146,     0,     0,     0,     0,     0,   151,
       0,     0,     0,     0,     0,   151,     0,   146,     0,     0,
       0,     0,   151,     0,     0,     0,   146,     0,     0,     0,
     146,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,   142,   142,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,     0,
       0,     0,   323,     0,   152,     0,     0,   142,   142,     0,
       0,     0,     0,     0,   146,     0,   151,     0,     0,     0,
     151,     0,     0,   147,     0,     0,     0,     0,   151,     0,
       0,     0,   152,   219,     0,     0,     0,     0,   152,     0,
       0,     0,     0,     0,     0,   152,     0,   220,   221,     0,
     222,     0,     0,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,   224,   389,   146,   146,   146,   146,   225,
       0,     0,     0,     0,   226,   147,   227,     0,     0,   228,
       0,   147,     0,     0,     0,     0,     0,   229,     0,     0,
     146,   146,     0,   230,   231,     0,     0,     0,     0,   152,
     232,   338,     0,   152,     0,     0,     0,     0,   339,   233,
       0,   152,     0,     0,     0,     0,     0,     0,   234,   235,
     340,   236,     0,   237,     0,   238,     0,     0,   239,     0,
       0,     0,   240,   443,     0,   241,     0,   151,   242,     0,
       0,     0,   440,   147,     0,   147,     0,     0,     0,   453,
     147,     0,     0,   147,     0,     0,     0,     0,     0,   147,
       0,     0,   147,     0,     0,     0,     0,     0,     0,     0,
     341,     0,     0,     0,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,     0,     0,   151,
       0,     0,     0,     0,   444,   151,     0,   147,     0,   147,
       0,   426,     0,     0,     0,   343,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,   344,   345,   104,   346,   347,   348,     0,   349,   350,
     351,     0,   352,   353,   354,   355,   356,     0,   357,   358,
     359,   360,   361,   362,   363,     0,     0,   364,   365,   366,
     265,     0,     0,     0,    22,    23,   787,   151,     0,   151,
       0,     0,     0,   266,   151,    30,   267,   151,     0,     0,
      35,     0,   152,   151,     0,    39,   151,     0,   152,     0,
       0,     0,     0,     0,     0,   147,     0,     0,     0,     0,
       0,     0,   147,     0,   104,     0,     0,    52,     0,    54,
     151,     0,     0,   147,     0,     0,     0,     0,   268,     0,
      62,   151,     0,   151,     0,     0,     0,   147,     0,   219,
       0,     0,   453,     0,     0,     0,   147,     0,   453,    78,
     147,     0,    80,   220,   221,    82,   222,     0,     0,     0,
     152,   223,   152,     0,     0,     0,     0,   152,     0,   224,
     152,     0,     0,     0,     0,   225,   152,     0,   340,   152,
     226,     0,   227,     0,     0,   228,     0,     0,     0,     0,
       0,     0,     0,   229,   147,     0,     0,     0,     0,   230,
     231,     0,     0,   152,     0,     0,   232,     0,     0,   662,
       0,     0,     0,   667,   152,   233,   152,     0,     0,   151,
       0,   104,     0,     0,   234,   235,   151,   236,   341,   237,
       0,   238,   342,     0,   239,     0,     0,   151,   240,     0,
       0,   241,     0,     0,   242,   147,   147,   147,   147,     0,
       0,   151,     0,     0,     0,     0,     0,     0,     0,     0,
     151,     0,     0,     0,   151,     0,     0,     0,     0,     0,
     147,   147,     0,     0,     0,     0,     0,     0,     0,   344,
     345,     0,     0,   347,   348,     0,   349,   350,     0,     0,
       0,   353,     0,     0,     0,     0,     0,     0,   395,   360,
     779,     0,   152,     0,     0,   364,   365,   366,   151,   152,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,     0,     0,     0,   220,   221,     0,   222,     0,     0,
     749,     0,   223,     0,   152,     0,     0,     0,     0,     0,
     224,     0,     0,   152,     0,     0,   225,   152,     0,     0,
       0,   226,     0,   227,     0,     0,   228,     0,     0,   151,
     151,   151,   151,     0,   229,     0,     0,     0,     0,     0,
     230,   231,     0,     0,     0,     0,     0,   232,     0,     0,
       0,     0,   784,     0,   151,   151,   233,     0,   789,     0,
       0,   152,     0,     0,     0,   234,   235,     0,   236,     0,
     237,     0,   238,     0,     0,   239,     0,     0,     0,   240,
       0,     0,   241,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,     0,   152,   152,   152,   152,     0,     0,     0,     0,
     453,     0,   453,     0,     0,     0,     0,   453,     0,     0,
     453,     0,     0,     0,     0,     0,   888,   152,   152,   890,
     382,   246,     0,  -543,     0,  -543,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   906,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   912,     0,   916,    -2,     4,     0,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
       0,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,     0,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,     0,    38,    39,     0,    40,  -236,     0,    41,
      42,    43,     0,    44,    45,    46,   -43,    47,    48,     0,
      49,    50,    51,     0,     0,     0,    52,    53,    54,    55,
      56,    57,    58,  -236,   -43,    59,    60,    61,     0,    62,
      63,    64,     0,    65,    66,    67,    68,    69,    70,    71,
      72,     0,    73,    74,     0,    75,    76,    77,    78,    79,
     963,    80,    81,   -61,    82,    83,     0,     0,    84,     0,
      85,     0,     0,    86,   982,     0,     0,     0,     0,     0,
       0,     0,     0,   987,     0,     0,     0,   989,     0,    87,
      88,    89,    90,    91,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,    95,    96,    97,     0,     0,    98,     0,    99,
       0,   100,     0,   101,     0,     0,     0,     0,     0,     0,
    1086,  1017,     5,   270,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   169,     0,     0,    15,    16,     0,    17,
       0,   170,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   171,     0,     0,     0,    32,   172,
     173,     0,   174,    37,     0,    38,     0,     0,    40,     0,
       0,     0,    42,    43,     0,     0,    45,    46,     0,    47,
      48,     0,    49,    50,     0,     0,     0,     0,     0,    53,
       0,    55,     0,    57,     0,     0,     0,     0,    60,   175,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,   176,     0,    73,     0,     0,    75,     0,     0,
       0,    79,     0,     0,    81,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,    95,   271,     0,     0,     0,    98,
       0,   177,     0,   100,     0,   178,  1087,     4,     0,     5,
       0,     6,     7,     8,     9,    10,    11,     0,  -571,     0,
      12,    13,    14,    15,    16,  -571,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,  -571,    27,    28,
    -571,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,     0,    38,    39,     0,    40,  -236,     0,    41,    42,
      43,     0,    44,    45,    46,   -43,    47,    48,     0,    49,
      50,    51,     0,     0,     0,    52,    53,    54,    55,     0,
      57,    58,  -236,   -43,    59,    60,    61,  -571,    62,    63,
      64,  -571,    65,    66,    67,    68,    69,    70,    71,    72,
       0,    73,    74,     0,    75,    76,    77,    78,    79,     0,
      80,    81,   -61,    82,    83,     0,     0,    84,     0,    85,
       0,     0,  -571,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -571,  -571,
      89,  -571,  -571,  -571,  -571,  -571,  -571,  -571,     0,  -571,
    -571,  -571,  -571,  -571,     0,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,    97,  -571,  -571,  -571,     0,    99,  -571,
     100,   307,   101,     5,   270,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,     0,    38,    39,     0,    40,
    -236,     0,    41,    42,    43,     0,    44,    45,    46,   -43,
      47,    48,     0,    49,    50,    51,     0,     0,     0,    52,
      53,    54,    55,    56,    57,    58,  -236,   -43,    59,    60,
      61,     0,    62,    63,    64,     0,    65,    66,    67,    68,
      69,    70,    71,    72,     0,    73,    74,     0,    75,    76,
      77,    78,    79,     0,    80,    81,   -61,    82,    83,     0,
       0,    84,     0,    85,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,    95,   271,    97,     0,     0,
      98,     0,    99,   308,   100,     4,   101,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,     0,
      38,    39,     0,    40,  -236,     0,    41,    42,    43,     0,
      44,    45,    46,   -43,    47,    48,     0,    49,    50,    51,
       0,     0,     0,    52,    53,    54,    55,    56,    57,    58,
    -236,   -43,    59,    60,    61,     0,    62,    63,    64,     0,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    73,
      74,     0,    75,    76,    77,    78,    79,     0,    80,    81,
     -61,    82,    83,     0,     0,    84,     0,    85,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,    95,
      96,    97,     0,     0,    98,     0,    99,   481,   100,   500,
     101,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,    36,    37,     0,    38,    39,     0,    40,  -236,     0,
      41,    42,    43,     0,    44,    45,    46,   -43,    47,    48,
       0,    49,    50,    51,     0,     0,     0,    52,    53,    54,
      55,    56,    57,    58,  -236,   -43,    59,    60,    61,     0,
      62,    63,    64,     0,    65,    66,    67,    68,    69,    70,
      71,    72,     0,    73,    74,     0,    75,    76,    77,    78,
      79,     0,    80,    81,   -61,    82,    83,     0,     0,    84,
       0,    85,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,    95,    96,    97,     0,     0,    98,     0,
      99,   501,   100,   307,   101,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,    37,     0,    38,    39,
       0,    40,  -236,     0,    41,    42,    43,     0,    44,    45,
      46,   -43,    47,    48,     0,    49,    50,    51,     0,     0,
       0,    52,    53,    54,    55,    56,    57,    58,  -236,   -43,
      59,    60,    61,     0,    62,    63,    64,     0,    65,    66,
      67,    68,    69,    70,    71,    72,     0,    73,    74,     0,
      75,    76,    77,    78,    79,     0,    80,    81,   -61,    82,
      83,     0,     0,    84,     0,    85,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,    95,    96,    97,
       0,     0,    98,     0,    99,   308,   100,     4,   101,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,     0,    38,    39,     0,    40,  -236,     0,    41,    42,
      43,     0,    44,    45,    46,   -43,    47,    48,     0,    49,
      50,    51,     0,     0,     0,    52,    53,    54,    55,    56,
      57,    58,  -236,   -43,    59,    60,    61,     0,    62,    63,
      64,     0,    65,    66,    67,    68,    69,    70,    71,    72,
       0,    73,    74,     0,    75,    76,    77,    78,    79,     0,
      80,    81,   -61,    82,    83,     0,     0,    84,     0,    85,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
      89,    90,    91,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,    95,    96,    97,     0,     0,    98,     0,    99,   674,
     100,     4,   101,     5,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,     0,    38,    39,     0,    40,
    -236,     0,    41,    42,    43,     0,    44,    45,    46,   -43,
      47,    48,     0,    49,    50,    51,     0,     0,     0,    52,
      53,    54,    55,   322,    57,    58,  -236,   -43,    59,    60,
      61,     0,    62,    63,    64,     0,    65,    66,    67,    68,
      69,    70,    71,    72,     0,    73,    74,     0,    75,    76,
      77,    78,    79,     0,    80,    81,   -61,    82,    83,     0,
       0,    84,     0,    85,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,    95,    96,    97,     0,     0,
      98,     0,    99,     4,   100,     5,   101,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,    37,     0,    38,    39,
       0,    40,  -236,     0,    41,    42,    43,     0,    44,    45,
      46,   -43,    47,    48,     0,    49,    50,    51,     0,     0,
       0,    52,    53,    54,    55,     0,    57,    58,  -236,   -43,
      59,    60,    61,     0,    62,    63,    64,     0,    65,    66,
      67,    68,    69,    70,    71,    72,     0,    73,    74,     0,
      75,    76,    77,    78,    79,     0,    80,    81,   -61,    82,
      83,     0,     0,    84,     0,    85,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,    95,    96,    97,
       0,     0,    98,     0,    99,     4,   100,     5,   101,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,   592,    37,     0,
      38,    39,     0,    40,  -236,     0,    41,    42,    43,     0,
      44,    45,    46,   -43,    47,    48,     0,    49,    50,    51,
       0,     0,     0,    52,    53,    54,    55,     0,    57,    58,
    -236,   -43,    59,    60,    61,     0,    62,    63,    64,     0,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    73,
      74,     0,    75,    76,    77,    78,    79,     0,    80,    81,
     -61,    82,    83,     0,     0,    84,     0,    85,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,    95,
      96,    97,     0,     0,    98,     0,    99,     4,   100,     5,
     101,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,   598,
      37,     0,    38,    39,     0,    40,  -236,     0,    41,    42,
      43,     0,    44,    45,    46,   -43,    47,    48,     0,    49,
      50,    51,     0,     0,     0,    52,    53,    54,    55,     0,
      57,    58,  -236,   -43,    59,    60,    61,     0,    62,    63,
      64,     0,    65,    66,    67,    68,    69,    70,    71,    72,
       0,    73,    74,     0,    75,    76,    77,    78,    79,     0,
      80,    81,   -61,    82,    83,     0,     0,    84,     0,    85,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
      89,    90,    91,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,    95,    96,    97,     0,     0,    98,     0,    99,     4,
     100,     5,   101,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,   874,    37,     0,    38,    39,     0,    40,  -236,     0,
      41,    42,    43,     0,    44,    45,    46,   -43,    47,    48,
       0,    49,    50,    51,     0,     0,     0,    52,    53,    54,
      55,     0,    57,    58,  -236,   -43,    59,    60,    61,     0,
      62,    63,    64,     0,    65,    66,    67,    68,    69,    70,
      71,    72,     0,    73,    74,     0,    75,    76,    77,    78,
      79,     0,    80,    81,   -61,    82,    83,     0,     0,    84,
       0,    85,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,    95,    96,    97,     0,     0,    98,     0,
      99,     4,   100,     5,   101,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,   876,    37,     0,    38,    39,     0,    40,
    -236,     0,    41,    42,    43,     0,    44,    45,    46,   -43,
      47,    48,     0,    49,    50,    51,     0,     0,     0,    52,
      53,    54,    55,     0,    57,    58,  -236,   -43,    59,    60,
      61,     0,    62,    63,    64,     0,    65,    66,    67,    68,
      69,    70,    71,    72,     0,    73,    74,     0,    75,    76,
      77,    78,    79,     0,    80,    81,   -61,    82,    83,     0,
       0,    84,     0,    85,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,    95,    96,    97,     0,     0,
      98,     0,    99,     4,   100,     5,   101,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,   881,    37,     0,    38,    39,
       0,    40,  -236,     0,    41,    42,    43,     0,    44,    45,
      46,   -43,    47,    48,     0,    49,    50,    51,     0,     0,
       0,    52,    53,    54,    55,     0,    57,    58,  -236,   -43,
      59,    60,    61,     0,    62,    63,    64,     0,    65,    66,
      67,    68,    69,    70,    71,    72,     0,    73,    74,     0,
      75,    76,    77,    78,    79,     0,    80,    81,   -61,    82,
      83,     0,     0,    84,     0,    85,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    90,    91,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    94,    95,    96,    97,
       0,     0,    98,     0,    99,     4,   100,     5,   101,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,   884,    37,     0,
      38,    39,     0,    40,  -236,     0,    41,    42,    43,     0,
      44,    45,    46,   -43,    47,    48,     0,    49,    50,    51,
       0,     0,     0,    52,    53,    54,    55,     0,    57,    58,
    -236,   -43,    59,    60,    61,     0,    62,    63,    64,     0,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    73,
      74,     0,    75,    76,    77,    78,    79,     0,    80,    81,
     -61,    82,    83,     0,     0,    84,     0,    85,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,    95,
      96,    97,     0,     0,    98,     0,    99,     4,   100,     5,
     101,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,   905,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,     0,    38,    39,     0,    40,  -236,     0,    41,    42,
      43,     0,    44,    45,    46,   -43,    47,    48,     0,    49,
      50,    51,     0,     0,     0,    52,    53,    54,    55,     0,
      57,    58,  -236,   -43,    59,    60,    61,     0,    62,    63,
      64,     0,    65,    66,    67,    68,    69,    70,    71,    72,
       0,    73,    74,     0,    75,    76,    77,    78,    79,     0,
      80,    81,   -61,    82,    83,     0,     0,    84,     0,    85,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
      89,    90,    91,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      94,    95,    96,    97,     0,     0,    98,     0,    99,     4,
     100,     5,   101,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,   911,    37,     0,    38,    39,     0,    40,  -236,     0,
      41,    42,    43,     0,    44,    45,    46,   -43,    47,    48,
       0,    49,    50,    51,     0,     0,     0,    52,    53,    54,
      55,     0,    57,    58,  -236,   -43,    59,    60,    61,     0,
      62,    63,    64,     0,    65,    66,    67,    68,    69,    70,
      71,    72,     0,    73,    74,     0,    75,    76,    77,    78,
      79,     0,    80,    81,   -61,    82,    83,     0,     0,    84,
       0,    85,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,    95,    96,    97,     0,     0,    98,     0,
      99,     4,   100,     5,   101,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,   915,    37,     0,    38,    39,     0,    40,
    -236,     0,    41,    42,    43,     0,    44,    45,    46,   -43,
      47,    48,     0,    49,    50,    51,     0,     0,     0,    52,
      53,    54,    55,     0,    57,    58,  -236,   -43,    59,    60,
      61,     0,    62,    63,    64,     0,    65,    66,    67,    68,
      69,    70,    71,    72,     0,    73,    74,     0,    75,    76,
      77,    78,    79,     0,    80,    81,   -61,    82,    83,     0,
       0,    84,     0,    85,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,    94,    95,    96,    97,     0,     0,
      98,     0,    99,     0,   100,   767,   101,     5,   270,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   169,     0,
       0,    15,    16,     0,    17,     0,   170,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   171,
       0,     0,     0,    32,   172,   173,     0,   174,    37,     0,
      38,     0,     0,    40,     0,     0,     0,    42,    43,     0,
       0,    45,    46,     0,    47,    48,     0,    49,    50,     0,
       0,     0,     0,     0,    53,     0,    55,     0,    57,     0,
       0,     0,     0,    60,   175,     0,     0,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,   176,     0,    73,
       0,     0,    75,     0,     0,     0,    79,     0,     0,    81,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,    95,
     271,     0,     0,     0,    98,     0,   177,     0,   100,     0,
     178,     5,   270,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   169,     0,     0,    15,    16,     0,    17,     0,
     170,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   171,     0,     0,     0,    32,   172,   173,
       0,   174,    37,     0,    38,     0,     0,    40,     0,     0,
       0,    42,    43,     0,     0,    45,    46,     0,    47,    48,
       0,    49,    50,     0,     0,     0,     0,     0,    53,     0,
      55,     0,    57,     0,     0,     0,     0,    60,   175,     0,
       0,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,   176,     0,    73,     0,     0,    75,     0,     0,     0,
      79,     0,     0,    81,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,    95,   271,     0,     0,     0,    98,     0,
     177,     0,   100,     0,   178,   666,     5,   270,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   169,     0,     0,
      15,    16,     0,    17,     0,   170,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   171,     0,
       0,     0,    32,   172,   173,     0,   174,    37,     0,    38,
       0,     0,    40,     0,     0,     0,    42,    43,     0,     0,
      45,    46,     0,    47,    48,     0,    49,    50,     0,     0,
       0,     0,     0,    53,     0,    55,     0,    57,     0,     0,
       0,     0,    60,   175,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,   176,     0,    73,     0,
       0,    75,     0,     0,     0,    79,     0,     0,    81,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,    95,   271,
       0,     0,     0,    98,     0,   177,     0,   100,     0,   178,
    1020,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   169,     0,     0,    15,    16,     0,    17,     0,
     170,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   171,     0,     0,     0,    32,   172,   173,
       0,   174,    37,     0,    38,     0,     0,    40,     0,     0,
       0,    42,    43,     0,     0,    45,    46,     0,    47,    48,
       0,    49,    50,     0,     0,     0,     0,     0,    53,     0,
      55,     0,    57,     0,     0,     0,     0,    60,   175,     0,
       0,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,   176,     0,    73,     0,     0,    75,     0,     0,     0,
      79,     0,     0,    81,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,    94,    95,    96,     0,     0,     0,    98,     0,
     177,     0,   100,     0,   178,   671,     5,     0,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   169,     0,     0,
      15,    16,     0,    17,     0,   170,     0,     0,    21,   214,
      23,     0,     0,     0,     0,     0,    28,     0,   171,     0,
       0,     0,    32,   172,   173,     0,   174,    37,     0,    38,
       0,     0,    40,     0,     0,     0,    42,    43,     0,     0,
      45,    46,     0,    47,    48,     0,    49,    50,     0,     0,
       0,     0,     0,    53,    54,    55,     0,    57,     0,     0,
       0,     0,    60,   175,     0,    62,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,   176,     0,    73,     0,
       0,    75,     0,     0,     0,    79,     0,     0,    81,     0,
      82,    83,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,    95,    96,
       0,     0,     0,    98,     0,   177,     0,   100,     0,   178,
       5,   270,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   169,     0,     0,    15,    16,     0,    17,     0,   170,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   171,     0,     0,     0,    32,   172,   173,     0,
     174,    37,     0,    38,     0,     0,    40,     0,     0,     0,
      42,    43,     0,     0,    45,    46,     0,    47,    48,     0,
      49,    50,     0,     0,     0,     0,     0,    53,     0,    55,
       0,    57,     0,     0,     0,     0,    60,   175,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
     176,     0,    73,     0,     0,    75,   275,   276,     0,    79,
     312,     0,    81,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,     0,     0,     0,     0,    92,   313,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,    95,   271,     0,     0,     0,    98,     0,   177,
       0,   100,     0,   178,     5,   270,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   171,     0,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,     0,    75,
     275,   276,     0,    79,   312,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,    95,   271,     0,     0,
       0,    98,     0,   177,     0,   100,   658,   178,     5,   270,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   169,
       0,     0,    15,    16,     0,    17,     0,   170,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     171,     0,     0,     0,    32,   172,   173,     0,   174,    37,
       0,    38,     0,     0,    40,     0,     0,     0,    42,    43,
       0,     0,    45,    46,     0,    47,    48,     0,    49,    50,
       0,     0,     0,     0,     0,    53,     0,    55,     0,    57,
       0,     0,     0,     0,    60,   175,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,   176,     0,
      73,     0,     0,    75,   275,   276,     0,    79,   312,     0,
      81,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
      95,   271,     0,     0,     0,    98,     0,   177,     0,   100,
     660,   178,     5,     0,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   169,     0,     0,    15,    16,     0,    17,
       0,   170,     0,     0,    21,     0,   557,     0,     0,     0,
       0,     0,    28,     0,   171,     0,     0,     0,    32,   172,
     173,     0,   174,    37,   558,    38,     0,     0,    40,     0,
       0,     0,    42,    43,     0,     0,    45,    46,     0,    47,
      48,     0,    49,    50,     0,     0,     0,     0,     0,    53,
       0,    55,     0,    57,     0,     0,     0,     0,    60,   175,
       0,   559,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,   176,     0,    73,     0,     0,    75,     0,     0,
       0,    79,     0,     0,    81,     0,   560,    83,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,    95,    96,     0,     0,     0,    98,
       0,   177,     0,   100,     5,   178,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   171,     0,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,     0,    75,
     275,   276,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,    95,    96,   277,     0,
       0,    98,     0,   177,     0,   100,     0,   178,     5,   270,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   169,
       0,     0,    15,    16,     0,    17,     0,   170,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     171,     0,     0,     0,    32,   172,   173,     0,   174,    37,
       0,    38,     0,     0,    40,     0,     0,     0,    42,    43,
       0,     0,    45,    46,     0,    47,    48,     0,    49,    50,
       0,     0,     0,     0,     0,    53,     0,    55,     0,    57,
       0,     0,     0,     0,    60,   175,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,   176,     0,
      73,     0,     0,    75,   275,   276,     0,    79,     0,     0,
      81,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
      95,   271,     0,     0,     0,    98,     0,   177,     0,   100,
       5,   178,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   169,     0,     0,    15,    16,     0,    17,     0,   170,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   171,     0,     0,     0,    32,   172,   173,     0,
     174,    37,     0,    38,     0,     0,    40,     0,     0,     0,
      42,    43,     0,     0,    45,    46,     0,    47,    48,   769,
      49,    50,     0,     0,     0,     0,     0,    53,     0,    55,
       0,    57,     0,     0,     0,     0,    60,   175,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
     176,     0,    73,     0,     0,    75,   275,   276,     0,    79,
       0,     0,    81,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,    95,    96,     0,     0,     0,    98,     0,   177,
       0,   100,     5,   178,     6,     7,     8,   203,    10,    11,
     204,     0,     0,   169,     0,     0,    15,    16,     0,    17,
       0,   170,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   171,     0,     0,     0,    32,   172,
     173,     0,   174,    37,     0,    38,     0,     0,    40,     0,
       0,     0,    42,    43,     0,     0,    45,    46,     0,    47,
      48,     0,    49,    50,     0,     0,     0,     0,     0,    53,
       0,    55,     0,    57,     0,     0,     0,     0,    60,   205,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,   176,     0,    73,     0,     0,    75,     0,     0,
     206,    79,     0,     0,    81,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,    95,    96,     0,     0,     0,    98,
       0,   177,     0,   100,     5,   178,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   171,     0,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,   208,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,     0,    75,
       0,     0,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,   209,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,    95,    96,     0,     0,
       0,    98,     0,   177,     0,   100,     0,   178,     5,   270,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   169,
       0,     0,    15,    16,     0,    17,     0,   170,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     171,     0,     0,     0,    32,   172,   173,     0,   174,    37,
       0,    38,     0,     0,    40,     0,     0,     0,    42,    43,
       0,     0,    45,    46,     0,    47,    48,     0,    49,    50,
       0,     0,     0,     0,     0,    53,     0,    55,     0,    57,
       0,     0,     0,     0,    60,   175,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,   176,     0,
      73,     0,     0,    75,     0,     0,     0,    79,     0,     0,
      81,     0,     0,    83,     0,     0,     0,     0,     0,   209,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
      95,   271,     0,     0,     0,    98,     0,   177,     0,   100,
       5,   178,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   169,     0,     0,    15,    16,     0,    17,     0,   170,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   171,     0,     0,     0,    32,   172,   173,     0,
     174,    37,     0,    38,     0,     0,    40,     0,     0,     0,
      42,    43,     0,     0,    45,    46,     0,    47,    48,     0,
      49,    50,     0,     0,     0,     0,     0,    53,     0,    55,
       0,    57,     0,     0,     0,     0,    60,   175,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
     176,     0,    73,     0,     0,    75,   275,   276,     0,    79,
       0,     0,    81,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,    95,    96,     0,     0,     0,    98,     0,   177,
       0,   100,     0,   178,     5,   270,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   171,     0,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,     0,    75,
       0,     0,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     803,     0,   804,    87,    88,    89,    90,    91,     0,     0,
       0,   805,    92,     0,     0,     0,   806,   221,   807,   808,
       0,     0,    93,     0,   809,    94,    95,   271,     0,     0,
       0,    98,   224,   177,   656,   100,     0,   178,   810,     0,
       0,     0,     0,   811,     0,   227,     0,     0,   812,     0,
     813,     0,     0,     0,     0,     0,   814,     0,     0,     0,
       0,     0,   815,   816,     0,     0,     0,     0,     0,   232,
       0,     0,     0,     0,     0,     0,     0,     0,   817,     0,
       0,     0,     0,     0,     0,     0,     0,   234,   235,     0,
     818,     0,   237,     0,   819,     0,     0,   820,     0,     0,
       0,   821,     0,     0,   241,     0,     0,   822,     0,     0,
       0,     0,     0,     0,     0,     0,   367,   368,   369,   370,
     371,   372,     0,     0,   375,   376,   377,   378,     0,   380,
     381,   823,   824,   825,   826,   827,     0,     0,   828,     0,
       0,     0,   829,   830,   831,   832,   833,   834,   835,   836,
     837,   838,   839,     0,   840,     0,     0,   841,   842,   843,
     844,     0,     5,   845,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   169,     0,     0,    15,    16,     0,    17,
       0,   170,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   171,     0,     0,     0,    32,   172,
     173,     0,   174,    37,     0,    38,     0,     0,    40,     0,
       0,     0,    42,    43,     0,     0,    45,    46,     0,    47,
      48,     0,    49,    50,     0,     0,     0,     0,     0,    53,
       0,    55,     0,    57,     0,     0,     0,     0,    60,   175,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,   176,     0,    73,     0,     0,    75,     0,     0,
       0,    79,     0,     0,    81,     0,     0,    83,     0,     0,
       0,     0,     0,   209,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,    95,    96,     0,     0,     0,    98,
       0,   177,     0,   100,     5,   178,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,     0,     0,     0,
       0,     0,     0,   250,    28,     0,   171,     0,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,     0,    75,
       0,     0,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,    95,    96,     0,     0,
       0,    98,     0,    99,     0,   100,     0,   178,     5,   270,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   169,
       0,     0,    15,    16,     0,    17,     0,   170,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     171,     0,     0,     0,    32,   172,   173,     0,   174,    37,
       0,    38,     0,     0,    40,     0,     0,     0,    42,    43,
       0,     0,    45,    46,     0,    47,    48,     0,    49,    50,
       0,     0,     0,     0,     0,    53,     0,    55,     0,    57,
       0,     0,     0,     0,    60,   175,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,   176,     0,
      73,     0,     0,    75,     0,     0,     0,    79,     0,     0,
      81,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
      95,   271,     0,     0,     0,    98,     0,   177,     0,   100,
       5,   178,     6,     7,     8,   203,    10,    11,     0,     0,
       0,   169,     0,     0,    15,    16,     0,    17,     0,   170,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   171,     0,     0,     0,    32,   172,   173,     0,
     174,    37,     0,    38,     0,     0,    40,     0,     0,     0,
      42,    43,     0,     0,    45,    46,     0,    47,    48,     0,
      49,    50,     0,     0,     0,     0,     0,    53,     0,    55,
       0,    57,     0,     0,     0,     0,    60,   205,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
     176,     0,    73,     0,     0,    75,     0,     0,   206,    79,
       0,     0,    81,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,    95,    96,     0,     0,     0,    98,     0,   177,
       0,   100,     0,   178,     5,   270,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,   630,     0,   171,     0,     0,     0,
      32,   172,   173,     0,   174,    37,     0,   631,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
     632,    69,    70,    71,   633,     0,    73,     0,     0,    75,
       0,     0,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,    95,   271,     0,     0,
       0,    98,     0,   177,     0,   100,     0,   966,     5,   270,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   169,
       0,     0,    15,    16,     0,    17,     0,   170,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     171,     0,     0,     0,    32,   172,   173,     0,   174,    37,
       0,    38,     0,     0,    40,     0,     0,     0,    42,    43,
       0,     0,    45,    46,     0,    47,    48,     0,    49,    50,
       0,     0,     0,     0,     0,    53,     0,    55,     0,    57,
       0,     0,     0,     0,    60,   175,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,   176,     0,
      73,     0,     0,    75,     0,     0,     0,    79,     0,     0,
      81,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
      95,   271,     0,     0,     0,    98,     0,   177,     0,   100,
       0,   966,     5,   270,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   169,     0,     0,    15,    16,     0,    17,
       0,   170,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   171,     0,     0,     0,    32,   172,
     173,     0,   950,    37,     0,    38,     0,     0,    40,     0,
       0,     0,    42,    43,     0,     0,    45,    46,     0,    47,
      48,     0,    49,    50,     0,     0,     0,     0,     0,    53,
       0,    55,     0,    57,     0,     0,     0,     0,    60,   175,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,   176,     0,    73,     0,     0,    75,     0,     0,
       0,    79,     0,     0,    81,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,    95,   271,     0,     0,     0,    98,
       0,   177,     0,   100,     5,   178,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   171,     0,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,     0,    75,
       0,     0,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,    95,    96,     0,     0,
       0,    98,     0,   177,     0,   100,     5,   178,     6,     7,
       8,   199,    10,    11,     0,     0,     0,   169,     0,     0,
      15,    16,     0,    17,     0,   170,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   171,     0,
       0,     0,    32,   172,   173,     0,   174,    37,     0,    38,
       0,     0,    40,     0,     0,     0,    42,    43,     0,     0,
      45,    46,     0,    47,    48,     0,    49,    50,     0,     0,
       0,     0,     0,    53,     0,    55,     0,    57,     0,     0,
       0,     0,    60,   200,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,   176,     0,    73,     0,
       0,    75,     0,     0,     0,    79,     0,     0,    81,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,    95,    96,
       0,     0,     0,    98,     0,   177,     0,   100,     5,   178,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   169,
       0,     0,    15,    16,     0,    17,     0,   170,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     171,     0,     0,     0,    32,   172,   173,     0,   174,    37,
       0,    38,     0,     0,    40,     0,     0,     0,    42,    43,
       0,     0,    45,    46,     0,    47,    48,     0,    49,    50,
       0,     0,     0,     0,     0,    53,     0,    55,     0,    57,
       0,     0,     0,     0,    60,   175,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,   176,     0,
      73,     0,     0,    75,     0,     0,     0,    79,     0,     0,
      81,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
      95,    96,     0,     0,     0,    98,     0,    99,     0,   100,
       5,   178,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   169,     0,     0,    15,    16,     0,    17,     0,   170,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   171,     0,     0,     0,    32,   172,   173,     0,
     174,    37,     0,    38,     0,     0,    40,     0,     0,     0,
      42,    43,     0,     0,    45,    46,     0,    47,    48,     0,
      49,    50,     0,     0,     0,     0,     0,    53,     0,    55,
       0,    57,     0,     0,     0,     0,    60,   175,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
     176,     0,    73,     0,     0,    75,     0,     0,     0,    79,
       0,     0,    81,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,    95,    96,     0,     0,     0,   603,     0,   177,
       0,   100,     5,   178,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   169,     0,     0,    15,    16,     0,    17,
       0,   170,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,   630,     0,   171,     0,     0,     0,    32,   172,
     173,     0,   174,    37,     0,   631,     0,     0,    40,     0,
       0,     0,    42,    43,     0,     0,    45,    46,     0,    47,
      48,     0,    49,    50,     0,     0,     0,     0,     0,    53,
       0,    55,     0,    57,     0,     0,     0,     0,    60,   175,
       0,     0,     0,     0,     0,     0,     0,    67,   632,    69,
      70,    71,   633,     0,    73,     0,     0,    75,     0,     0,
       0,    79,     0,     0,    81,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,    95,    96,     0,     0,     0,    98,
       0,   177,     0,   100,     5,   634,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   171,     0,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,     0,    75,
       0,     0,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,    95,    96,     0,     0,
       0,    98,     0,   177,     0,   100,     5,   634,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   169,     0,     0,
      15,    16,     0,    17,     0,   170,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   171,     0,
       0,     0,    32,   172,   173,     0,   708,    37,     0,    38,
       0,     0,    40,     0,     0,     0,    42,    43,     0,     0,
      45,    46,     0,    47,    48,     0,    49,    50,     0,     0,
       0,     0,     0,    53,     0,    55,     0,    57,     0,     0,
       0,     0,    60,   175,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,   176,     0,    73,     0,
       0,    75,     0,     0,     0,    79,     0,     0,    81,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,    95,    96,
       0,     0,     0,    98,     0,   177,     0,   100,     5,   178,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   169,
       0,     0,    15,    16,     0,    17,     0,   170,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     171,     0,     0,     0,    32,   172,   173,     0,   711,    37,
       0,    38,     0,     0,    40,     0,     0,     0,    42,    43,
       0,     0,    45,    46,     0,    47,    48,     0,    49,    50,
       0,     0,     0,     0,     0,    53,     0,    55,     0,    57,
       0,     0,     0,     0,    60,   175,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,   176,     0,
      73,     0,     0,    75,     0,     0,     0,    79,     0,     0,
      81,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
      95,    96,     0,     0,     0,    98,     0,   177,     0,   100,
       5,   178,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   169,     0,     0,    15,    16,     0,    17,     0,   170,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   171,     0,     0,     0,    32,   172,   173,     0,
     944,    37,     0,    38,     0,     0,    40,     0,     0,     0,
      42,    43,     0,     0,    45,    46,     0,    47,    48,     0,
      49,    50,     0,     0,     0,     0,     0,    53,     0,    55,
       0,    57,     0,     0,     0,     0,    60,   175,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
     176,     0,    73,     0,     0,    75,     0,     0,     0,    79,
       0,     0,    81,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,    95,    96,     0,     0,     0,    98,     0,   177,
       0,   100,     5,   178,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   169,     0,     0,    15,    16,     0,    17,
       0,   170,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   171,     0,     0,     0,    32,   172,
     173,     0,   945,    37,     0,    38,     0,     0,    40,     0,
       0,     0,    42,    43,     0,     0,    45,    46,     0,    47,
      48,     0,    49,    50,     0,     0,     0,     0,     0,    53,
       0,    55,     0,    57,     0,     0,     0,     0,    60,   175,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,   176,     0,    73,     0,     0,    75,     0,     0,
       0,    79,     0,     0,    81,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,    95,    96,     0,     0,     0,    98,
       0,   177,     0,   100,     5,   178,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   171,     0,     0,     0,
      32,   172,   173,     0,   947,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,     0,    75,
       0,     0,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,    95,    96,     0,     0,
       0,    98,     0,   177,     0,   100,     5,   178,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   169,     0,     0,
      15,    16,     0,    17,     0,   170,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   171,     0,
       0,     0,    32,   172,   173,     0,   948,    37,     0,    38,
       0,     0,    40,     0,     0,     0,    42,    43,     0,     0,
      45,    46,     0,    47,    48,     0,    49,    50,     0,     0,
       0,     0,     0,    53,     0,    55,     0,    57,     0,     0,
       0,     0,    60,   175,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,   176,     0,    73,     0,
       0,    75,     0,     0,     0,    79,     0,     0,    81,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    94,    95,    96,
       0,     0,     0,    98,     0,   177,     0,   100,     5,   178,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   169,
       0,     0,    15,    16,     0,    17,     0,   170,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     171,     0,     0,     0,    32,   172,   173,     0,   949,    37,
       0,    38,     0,     0,    40,     0,     0,     0,    42,    43,
       0,     0,    45,    46,     0,    47,    48,     0,    49,    50,
       0,     0,     0,     0,     0,    53,     0,    55,     0,    57,
       0,     0,     0,     0,    60,   175,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,   176,     0,
      73,     0,     0,    75,     0,     0,     0,    79,     0,     0,
      81,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,    94,
      95,    96,     0,     0,     0,    98,     0,   177,     0,   100,
       5,   178,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   169,     0,     0,    15,    16,     0,    17,     0,   170,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   171,     0,     0,     0,    32,   172,   173,     0,
     950,    37,     0,    38,     0,     0,    40,     0,     0,     0,
      42,    43,     0,     0,    45,    46,     0,    47,    48,     0,
      49,    50,     0,     0,     0,     0,     0,    53,     0,    55,
       0,    57,     0,     0,     0,     0,    60,   175,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
     176,     0,    73,     0,     0,    75,     0,     0,     0,    79,
       0,     0,    81,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,    94,    95,    96,     0,     0,     0,    98,     0,   177,
       0,   100,     5,   178,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   169,     0,     0,    15,    16,     0,    17,
       0,   170,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,   630,     0,   171,     0,     0,     0,    32,   172,
     173,     0,   174,    37,     0,   631,     0,     0,    40,     0,
       0,     0,    42,    43,     0,     0,    45,    46,     0,    47,
      48,     0,    49,    50,     0,     0,     0,     0,     0,    53,
       0,    55,     0,    57,     0,     0,     0,     0,    60,   175,
       0,     0,     0,     0,     0,     0,     0,    67,   632,    69,
      70,    71,   633,     0,    73,     0,     0,    75,     0,     0,
       0,    79,     0,     0,    81,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    89,    90,    91,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,    94,    95,    96,     0,     0,     0,    98,
       0,   177,     0,   100,     5,  1042,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   171,     0,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,     0,    75,
       0,     0,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,    94,    95,    96,     0,     0,
       0,    98,     0,     0,     0,   100,     5,  1042,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   169,     0,     0,
      15,    16,     0,    17,     0,   170,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   171,     0,
       0,     0,    32,   172,   173,     0,   174,    37,     0,    38,
       0,     0,    40,     0,     0,     0,    42,    43,     0,     0,
      45,    46,     0,    47,    48,     0,    49,    50,     0,     0,
       0,     0,     0,    53,     0,    55,     0,    57,     0,     0,
       0,     0,    60,   175,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,   176,     0,    73,     0,
       0,    75,     0,     0,     0,    79,     0,     0,    81,     0,
       0,    83,     0,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
       0,     0,     0,     0,  -505,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,   382,    95,    96,
    -543,     0,  -543,    98,     0,   177,     0,   100,     0,   178,
       5,   270,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   169,     0,     0,    15,    16,     0,    17,     0,   170,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   171,     0,     0,     0,    32,   172,   173,     0,
     174,    37,     0,    38,     0,     0,    40,     0,     0,     0,
      42,    43,     0,     0,    45,    46,     0,    47,    48,     0,
      49,    50,     0,     0,     0,     0,     0,    53,     0,    55,
       0,    57,     0,     0,     0,     0,    60,   175,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
     176,     0,    73,     0,     0,    75,     0,     0,     0,    79,
       0,     0,    81,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,  -401,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,  -401,     0,     0,     0,  -401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   271,     0,     0,     0,     0,     0,   177,
       0,   100,  -401,   966,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   171,     0,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,  -383,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,  -383,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,  -383,    75,
       0,     0,     0,    79,     0,     0,    81,     0,     0,    83,
       0,  -383,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,    89,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,    96,  -383,     0,
       0,     0,     0,  -383,    28,   100,   171,  1042,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,     0,    75,
       0,     0,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     5,    89,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,    96,     0,     0,
       0,     0,     0,   177,    28,   100,   171,   178,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,     0,     0,    75,
       0,     0,     0,    79,     0,     0,    81,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,    89,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   169,     0,     0,    15,    16,
       0,    17,     0,   170,     0,     0,    21,    96,     0,     0,
       0,     0,     0,   177,    28,   100,   171,   634,     0,     0,
      32,   172,   173,     0,   174,    37,     0,    38,     0,     0,
      40,     0,     0,     0,    42,    43,     0,     0,    45,    46,
       0,    47,    48,     0,    49,    50,     0,     0,     0,     0,
       0,    53,     0,    55,     0,    57,     0,     0,     0,     0,
      60,   175,     0,   219,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,   176,     0,    73,   220,   221,    75,
     222,     0,     0,    79,     0,   223,    81,     0,     0,    83,
       0,     0,     0,   224,     0,     0,     0,     0,     0,   225,
       0,     0,     0,     0,   226,     0,   227,     0,     0,   228,
       0,     0,     0,     0,     0,    89,     0,   229,     0,     0,
       0,     0,     0,   230,   231,     0,     0,     0,     0,     0,
     232,     0,     0,     0,     0,     0,     0,     0,     0,   233,
       0,     0,     0,     0,     0,   100,     0,   178,   234,   235,
       0,   236,     0,   237,     0,   238,     0,     0,   239,     0,
     999,     0,   240,     0,     0,   241,     0,     0,   242,   805,
       0,     0,     0,     0,   220,   221,   807,   222,     0,     0,
       0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,   810,     0,     0,     0,
       0,   226,     0,   227,     0,     0,   228,     0,   813,     0,
       0,     0,     0,     0,   229,     0,     0,     0,     0,     0,
     815,   231,     0,     0,   757,   338,     0,   232,     0,     0,
       0,     0,   339,     0,     0,     0,   233,     0,     0,     0,
       0,     0,     0,     0,   340,   234,   235,     0,   236,     0,
     237,     0,  1000,     0,     0,   820,     0,     0,     0,   240,
       0,     0,   241,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,   367,   368,   369,   370,   371,   372,
       0,     0,   375,   376,   377,   378,   340,   380,   381,   823,
     824,   825,   826,   827,   341,     0,   828,     0,   342,     0,
     829,   830,   831,   832,   833,   834,   835,   836,   837,   838,
     839,     0,   840,   338,     0,   841,   842,   843,   844,     0,
     339,     0,     0,     0,     0,     0,     0,     0,     0,   343,
       0,     0,   340,     0,     0,     0,   341,     0,     0,     0,
     342,     0,     0,     0,     0,   344,   345,     0,   346,   347,
     348,     0,   349,   350,   351,     0,   352,   353,   354,   355,
     356,     0,   357,   358,   359,   360,   361,   362,   363,     0,
     338,   364,   365,   366,     0,     0,     0,   339,     0,     0,
     865,     0,   341,     0,     0,     0,   342,   344,   345,   340,
     346,   347,   348,     0,   349,   350,   351,     0,   352,   353,
     354,   355,     0,     0,   357,   358,   359,   360,   361,     0,
     363,   338,     0,   364,   365,   366,     0,   343,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,     0,     0,   344,   345,     0,   346,   347,   348,   341,
     349,   350,   351,   342,   352,   353,   354,   355,   356,     0,
     357,   358,   359,   360,   361,   362,   363,   338,     0,   364,
     365,   366,     0,     0,   339,     0,     0,     0,  1034,     0,
       0,     0,     0,     0,   343,     0,   340,     0,     0,     0,
     341,     0,     0,     0,   342,     0,     0,     0,     0,     0,
     344,   345,     0,   346,   347,   348,     0,   349,   350,   351,
       0,   352,   353,   354,   355,   356,     0,   357,   358,   359,
     360,   361,   362,   363,   338,   343,   364,   365,   366,     0,
       0,   339,     0,     0,     0,  1109,   341,     0,     0,     0,
     342,   344,   345,   340,   346,   347,   348,     0,   349,   350,
     351,     0,   352,   353,   354,   355,   356,     0,   357,   358,
     359,   360,   361,   362,   363,   338,     0,   364,   365,   366,
       0,   343,   339,     0,   657,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,     0,     0,   344,   345,     0,
     346,   347,   348,   341,   349,   350,   351,   342,   352,   353,
     354,   355,   356,     0,   357,   358,   359,   360,   361,   362,
     363,     0,     0,   364,   365,   366,     0,     0,     0,     0,
     771,     0,     0,     0,     0,     0,     0,     0,   343,     0,
       0,     0,     0,     0,   341,     0,     0,     0,   342,     0,
       0,     0,     0,     0,   344,   345,     0,   346,   347,   348,
       0,   349,   350,   351,     0,   352,   353,   354,   355,   356,
       0,   357,   358,   359,   360,   361,   362,   363,   338,   343,
     364,   365,   366,     0,     0,   339,     0,   772,     0,     0,
       0,     0,     0,     0,     0,   344,   345,   340,   346,   347,
     348,     0,   349,   350,   351,     0,   352,   353,   354,   355,
     356,     0,   357,   358,   359,   360,   361,   362,   363,     0,
       0,   364,   365,   366,     0,     0,     0,     0,   998,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   341,     0,     0,
       0,   342,     0,     0,   338,     0,     0,     0,     0,     0,
     436,   339,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   340,     0,     0,     0,     0,     0,     0,
       0,     0,   343,   367,   368,   369,   370,   371,   372,     0,
       0,   375,   376,   377,   378,     0,   380,   381,   344,   345,
       0,   346,   347,   348,     0,   349,   350,   351,     0,   352,
     353,   354,   355,   356,     0,   357,   358,   359,   360,   361,
     362,   363,     0,   341,   364,   365,   366,   342,   395,     0,
     338,     0,     0,     0,     0,     0,   873,   339,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   340,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   367,
     368,   369,   370,   371,   372,     0,     0,   375,   376,   377,
     378,     0,   380,   381,   344,   345,     0,   346,   347,   348,
       0,   349,   350,   351,     0,   352,   353,   354,   355,   356,
       0,   357,   358,   359,   360,   361,   362,   363,     0,   341,
     364,   365,   366,   342,   395,     0,   338,     0,     0,     0,
       0,     0,   880,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   340,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   367,   368,   369,   370,   371,
     372,     0,     0,   375,   376,   377,   378,     0,   380,   381,
     344,   345,     0,   346,   347,   348,     0,   349,   350,   351,
       0,   352,   353,   354,   355,   356,     0,   357,   358,   359,
     360,   361,   362,   363,     0,   341,   364,   365,   366,   342,
     395,     0,   338,     0,     0,     0,     0,     0,  1013,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   367,   368,   369,   370,   371,   372,     0,     0,   375,
     376,   377,   378,     0,   380,   381,   344,   345,     0,   346,
     347,   348,     0,   349,   350,   351,     0,   352,   353,   354,
     355,   356,     0,   357,   358,   359,   360,   361,   362,   363,
       0,   341,   364,   365,   366,   342,   395,     0,   338,     0,
       0,     0,     0,     0,  1014,   339,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   340,     0,     0,
       0,     0,     0,     0,     0,     0,   343,   367,   368,   369,
     370,   371,   372,     0,     0,   375,   376,   377,   378,     0,
     380,   381,   344,   345,     0,   346,   347,   348,     0,   349,
     350,   351,     0,   352,   353,   354,   355,   356,     0,   357,
     358,   359,   360,   361,   362,   363,     0,   341,   364,   365,
     366,   342,   395,     0,   338,     0,     0,     0,     0,     0,
    1015,   339,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   340,     0,     0,     0,     0,     0,     0,
       0,     0,   343,   367,   368,   369,   370,   371,   372,     0,
       0,   375,   376,   377,   378,     0,   380,   381,   344,   345,
       0,   346,   347,   348,     0,   349,   350,   351,     0,   352,
     353,   354,   355,   356,     0,   357,   358,   359,   360,   361,
     362,   363,     0,   341,   364,   365,   366,   342,   395,     0,
     338,     0,     0,     0,     0,     0,  1016,   339,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   340,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   367,
     368,   369,   370,   371,   372,     0,     0,   375,   376,   377,
     378,     0,   380,   381,   344,   345,     0,   346,   347,   348,
       0,   349,   350,   351,     0,   352,   353,   354,   355,   356,
       0,   357,   358,   359,   360,   361,   362,   363,     0,   341,
     364,   365,   366,   342,   395,     0,   338,     0,     0,     0,
       0,     0,  1038,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   340,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   367,   368,   369,   370,   371,
     372,     0,     0,   375,   376,   377,   378,     0,   380,   381,
     344,   345,     0,   346,   347,   348,     0,   349,   350,   351,
       0,   352,   353,   354,   355,   356,     0,   357,   358,   359,
     360,   361,   362,   363,     0,   341,   364,   365,   366,   342,
     395,     0,     0,     0,     0,     0,     0,     0,  1039,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   367,   368,   369,   370,   371,   372,     0,     0,   375,
     376,   377,   378,     0,   380,   381,   344,   345,     0,   346,
     347,   348,     0,   349,   350,   351,     0,   352,   353,   354,
     355,   356,     0,   357,   358,   359,   360,   361,   362,   363,
     338,     0,   364,   365,   366,     0,   395,   339,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   340,
     429,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,   430,     0,     0,     0,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   423,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   424,     0,     0,     0,   341,
       0,     0,     0,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   338,
       0,     0,     0,     0,     0,     0,   339,     0,     0,     0,
     426,   341,     0,     0,   343,   342,     0,     0,   340,   741,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     344,   345,     0,   346,   347,   348,     0,   349,   350,   351,
       0,   352,   353,   354,   355,   356,   343,   357,   358,   359,
     360,   361,   362,   363,     0,     0,   364,   365,   366,     0,
     395,     0,   344,   345,     0,   346,   347,   348,   341,   349,
     350,   351,   342,   352,   353,   354,   355,   356,     0,   357,
     358,   359,   360,   361,   362,   363,   338,     0,   364,   365,
     366,     0,   395,   339,     0,     0,     0,     0,     0,   426,
       0,     0,     0,   343,     0,   340,   250,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
     345,     0,   346,   347,   348,     0,   349,   350,   351,     0,
     352,   353,   354,   355,   356,     0,   357,   358,   359,   360,
     361,   362,   363,   338,     0,   364,   365,   366,     0,   395,
     339,     0,     0,     0,     0,   341,     0,     0,     0,   342,
       0,     0,   340,   733,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   338,     0,     0,     0,     0,
       0,     0,   339,     0,     0,     0,     0,     0,     0,     0,
     343,     0,     0,     0,   340,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   344,   345,     0,   346,
     347,   348,   341,   349,   350,   351,   342,   352,   353,   354,
     355,   356,     0,   357,   358,   359,   360,   361,   362,   363,
       0,     0,   364,   365,   366,     0,   395,     0,     0,     0,
       0,     0,     0,     0,   341,     0,     0,   343,   342,     0,
       0,     0,     0,     0,     0,     0,     0,   750,     0,     0,
       0,     0,     0,   344,   345,     0,   346,   347,   348,     0,
     349,   350,   351,     0,   352,   353,   354,   355,   356,   343,
     357,   358,   359,   360,   361,   362,   363,     0,     0,   364,
     365,   366,     0,   395,     0,   344,   345,     0,   346,   347,
     348,     0,   349,   350,   351,     0,   352,   353,   354,   355,
     356,     0,   357,   358,   359,   360,   361,   362,   363,   338,
       0,   364,   365,   366,   265,   395,   339,     0,    22,    23,
       0,     0,     0,     0,     0,     0,     0,   266,   340,    30,
     267,     0,     0,     0,    35,     0,     0,     0,     0,    39,
       0,   338,  -236,     0,     0,     0,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,    52,     0,    54,     0,   433,     0,     0,  -236,     0,
       0,     0,   268,     0,    62,     0,     0,     0,   341,     0,
       0,     0,   342,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,   434,    80,     0,   -62,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,     0,     0,   343,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
     345,     0,   346,   347,   348,     0,   349,   350,   351,     0,
     352,   353,   354,   355,   356,   343,   357,   358,   359,   360,
     361,   362,   363,     0,     0,   364,   365,   366,     0,   466,
       0,   344,   345,     0,   346,   347,   348,     0,   349,   350,
     351,     0,   352,   353,   354,   355,   356,     0,   357,   358,
     359,   360,   361,   362,   363,  -217,   435,   364,   365,   366,
     338,   678,     0,     0,     0,     0,     0,   339,     0,  -217,
    -217,     0,  -217,     0,     0,     0,     0,  -217,     0,   340,
       0,     0,     0,     0,   679,  -217,     0,     0,     0,     0,
       0,  -217,     0,     0,     0,     0,  -217,     0,  -217,     0,
       0,  -217,     0,     0,     0,   338,     0,     0,     0,  -217,
       0,     0,   339,     0,   680,  -217,  -217,     0,     0,     0,
       0,     0,  -217,     0,   340,     0,     0,     0,     0,   341,
       0,  -217,     0,   342,     0,     0,     0,     0,   397,     0,
    -217,  -217,     0,  -217,     0,  -217,   338,  -217,     0,     0,
    -217,     0,     0,   339,  -217,     0,     0,  -217,     0,     0,
    -217,     0,     0,     0,   343,   340,   566,     0,     0,     0,
       0,     0,     0,     0,   341,     0,     0,     0,   342,   567,
     344,   345,     0,   346,   347,   348,     0,   349,   350,   351,
       0,   352,   353,   354,   355,   356,     0,   357,   358,   359,
     360,   361,   362,   363,     0,   164,   364,   365,   366,   343,
       0,     0,     0,     0,     0,   341,     0,     0,     0,   342,
       0,     0,     0,     0,     0,   344,   345,     0,   346,   347,
     348,     0,   349,   350,   351,     0,   352,   353,   354,   355,
     356,     0,   357,   358,   359,   360,   361,   362,   363,     0,
     343,   364,   365,   366,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   344,   345,     0,   346,
     347,   348,     0,   349,   350,   351,     0,   352,   353,   354,
     355,   356,     0,   357,   358,   359,   360,   361,   362,   363,
     338,     0,   364,   365,   366,     0,     0,   339,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   340,
     568,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,   569,     0,     0,     0,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,     0,     0,     0,     0,   921,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   341,
       0,     0,     0,   342,     0,     0,     0,     0,     0,     0,
       0,   338,     0,     0,     0,     0,   922,     0,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   341,     0,     0,   343,   342,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     344,   345,     0,   346,   347,   348,     0,   349,   350,   351,
       0,   352,   353,   354,   355,   356,   343,   357,   358,   359,
     360,   361,   362,   363,     0,     0,   364,   365,   366,     0,
     341,     0,   344,   345,   342,   346,   347,   348,     0,   349,
     350,   351,     0,   352,   353,   354,   355,   356,     0,   357,
     358,   359,   360,   361,   362,   363,   338,     0,   364,   365,
     366,     0,     0,   339,     0,   343,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   340,     0,     0,     0,     0,
       0,   344,   345,     0,   346,   347,   348,     0,   349,   350,
     351,     0,   352,   353,   354,   355,   356,     0,   357,   358,
     359,   360,   361,   362,   363,   338,   470,   364,   365,   366,
       0,     0,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,   341,     0,     0,     0,   342,
       0,     0,     0,     0,     0,     0,     0,   338,     0,     0,
       0,     0,     0,     0,   339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   340,     0,     0,     0,
     343,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   341,     0,   344,   345,   342,   346,
     347,   348,     0,   349,   350,   351,     0,   352,   353,   354,
     355,   356,     0,   357,   358,   359,   360,   361,   362,   363,
       0,   472,   364,   365,   366,     0,   341,     0,     0,   343,
     342,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   344,   345,     0,   346,   347,
     348,     0,   349,   350,   351,     0,   352,   353,   354,   355,
     356,   343,   357,   358,   359,   360,   361,   362,   363,     0,
     474,   364,   365,   366,     0,     0,     0,   344,   345,     0,
     346,   347,   348,     0,   349,   350,   351,     0,   352,   353,
     354,   355,   356,     0,   357,   358,   359,   360,   361,   362,
     363,   338,   479,   364,   365,   366,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   338,     0,     0,     0,     0,     0,     0,
     339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   340,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,     0,     0,     0,   342,     0,     0,     0,     0,     0,
       0,     0,   338,     0,     0,     0,     0,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   341,     0,   496,   343,   342,     0,     0,     0,
       0,     0,     0,     0,     0,   570,     0,     0,     0,     0,
       0,   344,   345,     0,   346,   347,   348,     0,   349,   350,
     351,     0,   352,   353,   354,   355,   356,   343,   357,   358,
     359,   360,   361,   362,   363,     0,     0,   364,   365,   366,
       0,   341,     0,   344,   345,   342,   346,   347,   348,     0,
     349,   350,   351,     0,   352,   353,   354,   355,   356,     0,
     357,   358,   359,   360,   361,   362,   363,   338,     0,   364,
     365,   366,     0,     0,   339,     0,   343,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   340,     0,     0,     0,
       0,     0,   344,   345,     0,   346,   347,   348,     0,   349,
     350,   351,     0,   352,   353,   354,   355,   356,  -506,   357,
     358,   359,   360,   361,   362,   363,   338,     0,   364,   365,
     366,     0,     0,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   340,   341,     0,     0,     0,
     342,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,   745,     0,     0,
       0,     0,     0,   339,     0,     0,     0,   164,     0,     0,
       0,   343,     0,     0,     0,   340,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   341,     0,   344,   345,   342,
     346,   347,   348,     0,   349,   350,   351,     0,   352,   353,
     354,   355,   356,     0,   357,   358,   359,   360,   361,   362,
     363,     0,     0,   364,   365,   366,     0,     0,     0,     0,
     343,     0,     0,     0,     0,   341,     0,     0,     0,   342,
       0,     0,     0,     0,     0,     0,   344,   345,     0,   346,
     347,   348,     0,   349,   350,   351,     0,   352,   353,   354,
     355,   356,     0,   357,   358,   359,   360,   361,   362,   363,
     343,   718,   364,   365,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   344,   345,     0,   346,
     347,   348,     0,   349,   350,   351,     0,   352,   353,   354,
     355,   356,     0,   357,   358,   359,   360,   361,   362,   363,
     338,     0,   364,   365,   366,     0,     0,   339,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   340,
       0,     0,   748,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,     0,     0,     0,     0,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,     0,     0,     0,     0,     0,     0,     0,     0,   341,
       0,     0,     0,   342,     0,     0,     0,     0,     0,     0,
       0,   338,     0,     0,     0,     0,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   860,     0,     0,   343,     0,     0,     0,     0,     0,
     341,     0,     0,     0,   342,     0,     0,     0,     0,     0,
     344,   345,     0,   346,   347,   348,     0,   349,   350,   351,
       0,   352,   353,   354,   355,   356,     0,   357,   358,   359,
     360,   361,   362,   363,   790,   343,   364,   365,   366,     0,
     341,     0,     0,     0,   342,     0,     0,     0,     0,     0,
       0,   344,   345,     0,   346,   347,   348,     0,   349,   350,
     351,     0,   352,   353,   354,   355,   356,     0,   357,   358,
     359,   360,   361,   362,   363,   343,     0,   364,   365,   366,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   344,   345,     0,   346,   347,   348,     0,   349,   350,
     351,     0,   352,   353,   354,   355,   356,     0,   357,   358,
     359,   360,   361,   362,   363,   338,  -227,   364,   365,   366,
       0,     0,   339,     0,     0,     0,     0,     0,     0,     0,
    -227,  -227,     0,  -227,   340,   863,     0,     0,  -227,     0,
       0,     0,     0,     0,     0,     0,  -227,   338,   920,     0,
       0,     0,  -227,     0,   339,     0,     0,  -227,     0,  -227,
       0,     0,  -227,     0,     0,     0,   340,     0,     0,     0,
    -227,     0,     0,     0,     0,     0,  -227,  -227,     0,     0,
       0,     0,     0,  -227,   341,     0,     0,     0,   342,     0,
       0,     0,  -227,     0,     0,     0,     0,     0,     0,     0,
       0,  -227,  -227,     0,  -227,     0,  -227,     0,  -227,     0,
       0,  -227,     0,     0,     0,  -227,   341,     0,  -227,   343,
     342,  -227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   344,   345,     0,   346,   347,
     348,     0,   349,   350,   351,     0,   352,   353,   354,   355,
     356,   343,   357,   358,   359,   360,   361,   362,   363,     0,
       0,   364,   365,   366,     0,     0,     0,   344,   345,     0,
     346,   347,   348,     0,   349,   350,   351,     0,   352,   353,
     354,   355,   356,     0,   357,   358,   359,   360,   361,   362,
     363,   338,   219,   364,   365,   366,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,   220,   221,     0,   222,
     340,     0,     0,     0,   223,     0,     0,     0,     0,     0,
       0,     0,   224,   338,     0,     0,     0,     0,   225,     0,
     339,     0,     0,   226,     0,   227,     0,     0,   228,     0,
       0,     0,   340,     0,     0,     0,   229,     0,     0,     0,
       0,     0,   230,   231,     0,     0,     0,     0,     0,   232,
     341,     0,     0,     0,   342,     0,     0,     0,   233,     0,
       0,     0,     0,   943,     0,     0,     0,   234,   235,     0,
     236,     0,   237,     0,   238,     0,     0,   239,     0,     0,
       0,   240,   341,     0,   241,   343,   342,   242,     0,     0,
       0,     0,     0,     0,     0,   946,     0,     0,     0,     0,
       0,   344,   345,     0,   346,   347,   348,     0,   349,   350,
     351,     0,   352,   353,   354,   355,   356,   343,   357,   358,
     359,   360,   361,   362,   363,     0,     0,   364,   365,   366,
       0,     0,     0,   344,   345,     0,   346,   347,   348,     0,
     349,   350,   351,     0,   352,   353,   354,   355,   356,     0,
     357,   358,   359,   360,   361,   362,   363,   338,  -218,   364,
     365,   366,     0,     0,   339,     0,     0,     0,     0,     0,
       0,     0,  -218,  -218,     0,  -218,   340,     0,     0,     0,
    -218,     0,     0,     0,     0,     0,     0,     0,  -218,   338,
       0,     0,     0,     0,  -218,     0,   339,     0,     0,  -218,
       0,  -218,     0,     0,  -218,     0,     0,     0,   340,     0,
       0,     0,  -218,     0,     0,     0,     0,     0,  -218,  -218,
       0,     0,     0,     0,     0,  -218,   341,     0,     0,     0,
     342,     0,     0,     0,  -218,     0,     0,     0,     0,  1051,
       0,     0,     0,  -218,  -218,     0,  -218,     0,  -218,     0,
    -218,     0,     0,  -218,     0,     0,     0,  -218,   341,     0,
    -218,   343,   342,  -218,     0,     0,     0,     0,     0,     0,
       0,  1052,     0,     0,     0,     0,     0,   344,   345,     0,
     346,   347,   348,     0,   349,   350,   351,     0,   352,   353,
     354,   355,   356,   343,   357,   358,   359,   360,   361,   362,
     363,     0,     0,   364,   365,   366,     0,     0,     0,   344,
     345,     0,   346,   347,   348,     0,   349,   350,   351,     0,
     352,   353,   354,   355,   356,     0,   357,   358,   359,   360,
     361,   362,   363,   338,  -149,   364,   365,   366,     0,     0,
     339,     0,     0,     0,     0,     0,     0,     0,  -149,  -149,
       0,  -149,   340,     0,     0,     0,  -149,     0,     0,     0,
       0,     0,     0,     0,  -149,   338,     0,     0,     0,     0,
    -149,     0,   339,     0,     0,  -149,     0,  -149,     0,     0,
    -149,     0,     0,     0,   340,     0,     0,     0,  -149,     0,
       0,     0,     0,     0,  -149,  -149,     0,     0,     0,     0,
       0,  -149,   341,     0,     0,     0,   342,     0,     0,     0,
    -149,     0,     0,     0,     0,  1053,     0,     0,     0,  -149,
    -149,     0,  -149,     0,  -149,     0,  -149,     0,     0,  -149,
       0,     0,     0,  -149,   341,     0,  -149,   343,   342,  -149,
       0,     0,     0,     0,     0,     0,     0,  1054,     0,     0,
       0,     0,     0,   344,   345,     0,   346,   347,   348,     0,
     349,   350,   351,     0,   352,   353,   354,   355,   356,   343,
     357,   358,   359,   360,   361,   362,   363,     0,     0,   364,
     365,   366,     0,     0,     0,   344,   345,     0,   346,   347,
     348,     0,   349,   350,   351,     0,   352,   353,   354,   355,
     356,     0,   357,   358,   359,   360,   361,   362,   363,   338,
       0,   364,   365,   366,     0,     0,   339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   340,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,     0,     0,     0,     0,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
       0,     0,   342,     0,     0,     0,     0,     0,     0,     0,
       0,  1055,     0,     0,     0,     0,     0,     0,   338,     0,
       0,     0,     0,     0,     0,   339,     0,     0,     0,     0,
     341,     0,     0,   343,   342,     0,     0,   340,     0,     0,
       0,     0,     0,  1056,     0,     0,     0,     0,     0,   344,
     345,     0,   346,   347,   348,     0,   349,   350,   351,     0,
     352,   353,   354,   355,   356,   343,   357,   358,   359,   360,
     361,   362,   363,     0,     0,   364,   365,   366,   340,     0,
       0,   344,   345,     0,   346,   347,   348,   341,   349,   350,
     351,   342,   352,   353,   354,   355,   356,     0,   357,   358,
     359,   360,   361,   362,   363,   338,     0,   364,   365,   366,
       0,     0,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   343,     0,   340,     0,     0,     0,   341,     0,
       0,     0,   342,     0,     0,     0,     0,     0,   344,   345,
       0,   346,   347,   348,     0,   349,   350,   351,  1080,   352,
     353,   354,   355,   356,     0,   357,   358,   359,   360,   361,
     362,   363,   338,   343,   364,   365,   366,     0,     0,   339,
       0,     0,     0,     0,   341,     0,     0,     0,   342,   344,
     345,   340,   346,   347,   348,     0,   349,   350,   351,     0,
     352,   353,   354,   355,     0,     0,   357,   358,   359,   360,
     361,   362,   363,     0,     0,   364,   365,   366,     0,   343,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   344,   345,     0,   346,   347,
     348,   706,   349,   350,   351,   342,   352,   353,   354,   355,
     356,     0,   357,   358,   359,   360,   361,   362,   363,     0,
       0,   364,   365,   366,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   344,   345,     0,   346,   347,   348,     0,   349,
     350,   351,     0,   352,   353,   354,   355,   356,     0,   357,
     358,   359,   360,   361,   362,   363,     0,   265,   364,   365,
     366,    22,    23,     0,     0,     0,     0,     0,     0,     0,
     266,   265,    30,   267,     0,    22,    23,    35,     0,     0,
       0,     0,    39,     0,   266,     0,    30,   267,     0,     0,
       0,    35,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,     0,     0,    52,     0,    54,     0,    56,     0,
     926,     0,     0,   927,     0,   268,     0,    62,    52,     0,
      54,     0,    56,     0,   926,     0,     0,   927,     0,   268,
       0,    62,     0,     0,     0,     0,    78,     0,     0,    80,
       0,     0,    82,     0,   265,     0,     0,     0,    22,    23,
      78,     0,     0,    80,     0,     0,    82,   266,   265,    30,
     267,     0,    22,    23,    35,     0,     0,     0,     0,    39,
       0,   266,     0,    30,   267,     0,     0,     0,    35,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,    52,    97,    54,     0,    56,     0,   926,   928,     0,
     927,     0,   268,     0,    62,    52,    97,    54,     0,    56,
       0,   926,  1010,   340,   927,     0,   268,     0,    62,     0,
       0,     0,     0,    78,     0,     0,    80,     0,     0,    82,
       0,   265,     0,     0,     0,    22,    23,    78,     0,     0,
      80,     0,     0,    82,   266,     0,    30,   267,     0,     0,
       0,    35,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,     0,   341,     0,     0,     0,   342,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    97,
      54,     0,    56,     0,   926,  1012,     0,   927,     0,   268,
       0,    62,     0,    97,     0,     0,     0,     0,   343,  1057,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,    80,   344,   345,    82,   346,   347,   348,
       0,   349,   350,   351,     0,   352,   353,   354,   355,     0,
       0,   357,   358,   359,   360,   361,   683,   363,   219,     0,
     364,   365,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   220,   221,     0,   222,     0,     0,     0,     0,
     223,     0,     0,     0,     0,     0,    97,     0,   224,     0,
       0,     0,  1058,     0,   225,     0,     0,     0,     0,   226,
       0,   227,     0,     0,   228,     0,     0,     0,     0,     0,
       0,     0,   229,     0,     0,  -145,     0,     0,   230,   231,
       0,     0,     0,     0,     0,   232,     0,     0,     0,  -145,
    -145,     0,  -145,     0,   233,     0,     0,  -145,     0,     0,
       0,     0,     0,   234,   235,  -145,   236,     0,   237,     0,
     238,  -145,     0,   239,     0,     0,  -145,   240,  -145,     0,
     241,  -145,     0,   242,     0,     0,     0,     0,     0,  -145,
       0,     0,     0,     0,     0,  -145,  -145,     0,     0,     0,
       0,     0,  -145,     0,     0,     0,     0,     0,     0,     0,
       0,  -145,     0,     0,     0,     0,     0,     0,     0,     0,
    -145,  -145,     0,  -145,     0,  -145,     0,  -145,     0,     0,
    -145,     0,     0,     0,  -145,     0,     0,  -145,     0,     0,
    -145
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1000)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      12,   149,   218,    59,    16,   327,     2,   475,    20,   444,
      19,   198,   213,   190,    26,   596,   680,   388,    30,    31,
     692,    33,    34,    35,    36,   766,   679,     1,   135,   206,
      22,   218,    44,   449,    46,   976,   895,     1,   892,    51,
       3,    53,     1,    55,    63,    32,   796,   263,    45,    84,
     629,    63,    64,    65,    66,    67,    68,  1020,   584,   475,
      72,   587,    74,    45,    76,    77,   850,   851,   112,    81,
     286,  1070,    84,    85,   112,    87,   263,    89,    33,    34,
      92,    93,   101,    95,   191,     3,    32,    99,   100,   101,
      32,    32,    67,    67,    32,    64,    55,    45,     1,   286,
      45,   138,   157,   157,     1,   138,   441,  1070,   163,   100,
    1109,   965,   434,     0,   855,    45,    45,   318,   319,    45,
      59,    84,   703,   167,   157,    84,   705,   162,   165,   167,
     112,   100,    95,   145,   109,   109,   995,    82,    77,    55,
      45,   138,    45,    76,    77,   293,   101,   869,  1089,   871,
      44,   110,    82,   117,   138,   896,   138,   169,    55,   178,
     172,   173,   174,   350,   176,   177,   178,   106,   384,   385,
     112,   112,    66,   137,   138,   162,    31,    95,   137,   929,
     189,   165,    76,    77,   763,   167,   198,    84,   163,   163,
     138,   112,   138,   628,   110,    27,   722,   384,   385,   725,
      97,   165,   952,   162,   954,    18,   218,   198,   264,   138,
     202,    50,   138,   110,   117,   207,   162,  1001,  1002,   167,
     162,   162,   214,   964,   162,   596,    81,   218,   117,   951,
      85,   953,    84,   138,   137,   138,     3,    76,   167,    71,
     137,   167,   138,     8,    81,   117,   138,    27,    85,   138,
      82,   263,   468,   142,   157,   267,   110,    70,   922,  1009,
     157,  1011,   167,   275,   276,   162,   138,   939,   921,   101,
     142,   167,   263,   165,   286,    88,   165,   132,  1019,   138,
     138,   468,   137,   117,   138,   140,  1087,    82,   138,   144,
     138,    71,   105,   165,   188,   286,    81,   878,   138,   157,
      85,   313,    82,   164,  1105,   157,   165,   414,   142,   157,
     162,    27,   419,   163,   310,   327,   210,   211,   212,   213,
     164,   101,   757,   217,   336,   165,   338,   339,   340,   341,
     342,   343,   703,   345,   346,   347,   348,   349,   138,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,    71,   138,   138,   680,   253,
     138,   373,   374,   163,   162,   259,    82,   379,   164,   138,
     382,   383,   384,   385,   386,   387,   388,    92,   138,   157,
     138,   164,   138,   165,   165,   397,   341,   342,   282,   138,
     402,   107,   404,   384,   385,   582,   165,   157,    55,   600,
     601,   157,   421,    27,   373,   374,   300,   165,   157,   421,
     379,   423,   424,   382,   383,    77,   138,   429,   430,   106,
     755,   433,   434,    47,   436,   132,   438,    84,   157,   157,
     137,   386,   387,   140,   902,   157,   164,   144,   166,   451,
      97,   164,   397,   455,   456,    69,   132,    71,   156,   461,
     202,   157,   132,   110,   140,   207,   468,    45,    82,    55,
     140,   796,   157,   664,   665,   132,   157,    55,    27,   424,
     461,   483,   163,   140,   486,   430,   488,   468,   655,   895,
     492,   493,   494,   107,   496,   497,   902,   506,    84,   148,
     162,    55,   483,     2,   506,   486,    84,   488,   111,   157,
     157,    97,   493,    12,   398,   162,   502,   878,   164,   164,
     166,   166,    71,   164,   110,   166,    25,   486,    27,   488,
      84,   157,   110,    82,   164,   164,   166,   166,   486,   117,
     488,    31,   157,    97,   428,   157,   157,   492,   432,   157,
      80,    80,   101,   157,   692,   164,   110,   164,   107,   164,
     138,   117,   164,   164,   566,   567,   568,   569,   570,   571,
     572,   157,   157,    72,   573,   574,   162,     8,   580,   157,
     582,    59,   137,   162,   162,   157,   117,   165,   590,   995,
     592,    81,   140,   138,   596,    85,   598,   165,   157,   580,
      99,   582,    45,   157,   103,    34,   164,   117,   162,   934,
     922,   138,   165,   165,  1020,   165,    21,   138,   165,   162,
     157,   580,   567,   167,   569,   634,   167,   952,  1034,   954,
     632,   633,   634,   157,    66,   157,   638,   157,   164,    27,
     157,   157,   132,   133,   167,   135,   136,   137,   157,   139,
     140,   141,   165,   138,   144,   157,    34,    45,   165,   163,
      48,   151,   152,   138,  1070,   155,   165,   165,   158,   159,
     160,   163,   117,    82,   676,    32,   678,   679,   680,   638,
      68,  1087,   165,    71,  1009,    73,  1011,    32,   167,   162,
     162,    31,   117,    34,    82,   137,    82,   903,   904,  1105,
     167,   703,   164,  1109,   706,   707,   708,   164,   167,   711,
     594,   595,     2,   101,   137,   167,   600,   601,   143,   157,
     145,   146,    12,   157,   149,   150,   903,   904,   612,   731,
       3,   733,   140,   163,   140,    25,   738,    27,   164,   741,
     140,    81,   132,   745,   243,    85,   748,    20,   140,   140,
     138,   250,   132,   140,    34,   140,   140,   140,   132,   140,
      33,   706,   707,   140,   132,   132,   775,   651,   140,   162,
     165,   165,    97,   775,   132,   157,   165,   165,   210,   211,
     212,   213,    72,   785,    57,   787,    76,    77,   790,   162,
     165,   157,   132,   133,   132,   156,   798,   137,   167,   139,
     140,   939,   156,   138,   144,   324,    24,   294,   779,    99,
     799,   310,   152,   103,   939,   934,   755,   621,   158,   159,
     160,   253,    95,   802,  1089,   324,  1019,   259,   101,  1047,
    1080,  1073,   716,   717,    35,   452,    30,   582,    45,  1025,
      -1,    -1,    -1,   845,   728,    -1,   730,    -1,    55,    -1,
     282,    -1,    -1,   737,    -1,    -1,   740,   859,   860,   743,
     862,   863,   864,   865,    -1,    -1,    -1,    -1,   300,    -1,
      -1,   873,   874,    -1,   876,   165,   878,    84,   880,   881,
      -1,   927,   884,    -1,    -1,    -1,    -1,    45,  1074,  1075,
    1076,  1077,  1078,  1079,    27,    -1,   395,    55,   782,   901,
     902,   903,   904,   110,    -1,    -1,    -1,   909,    -1,   911,
     117,    -1,    45,   915,   895,    48,    -1,    -1,   920,   921,
     922,    -1,   903,   904,   423,    -1,    84,    -1,    -1,    -1,
     429,   138,    -1,    -1,    -1,    68,    -1,   436,    71,    -1,
      73,   943,   944,   945,   946,   947,   948,   949,   950,    82,
     157,    -1,   110,   243,    -1,   162,    -1,   966,   165,   117,
     250,    -1,    -1,    -1,   966,    -1,   398,    -1,   101,   971,
      -1,    -1,    -1,   975,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     971,   490,    -1,    -1,    -1,   494,   428,    -1,    -1,   157,
     432,    -1,    -1,   502,   162,    -1,    -1,   165,    -1,    -1,
      -1,  1013,  1014,  1015,  1016,    -1,    -1,    -1,    -1,    -1,
     310,    -1,    -1,   907,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,  1034,  1042,   324,    -1,  1038,  1039,    -1,  1020,
    1042,    -1,    -1,    -1,    -1,    -1,     2,    -1,    -1,  1051,
    1052,  1053,  1054,  1055,  1056,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   563,    -1,    -1,  1069,  1070,    25,
    1072,    27,   956,   957,    -1,    -1,   960,   961,    81,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,  1070,
      31,    -1,   976,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     984,    41,   986,  1105,   988,   395,    -1,  1109,    -1,    -1,
      -1,    -1,   611,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1109,   132,
      -1,    -1,    27,   423,   137,    -1,   139,   140,    78,   429,
      81,   144,    -1,    99,    85,    -1,   436,   103,    -1,   152,
      45,    -1,    -1,    48,    -1,   158,   159,   160,    -1,    -1,
      -1,     2,   594,   595,   663,    -1,    -1,    -1,   600,   601,
     669,    12,    -1,    68,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    82,   128,    -1,
     130,   132,   133,   692,   135,   136,   137,    -1,   139,   140,
     490,    -1,    -1,   144,   494,  1089,   101,   706,   707,   165,
     151,   152,   502,    -1,   155,    -1,    -1,   158,   159,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    72,   731,    -1,   733,    -1,    -1,    -1,    -1,   738,
      -1,    -1,   741,    -1,     2,    -1,    -1,    -1,   747,    -1,
     190,   750,    -1,    -1,    12,    -1,    -1,    -1,    99,    -1,
      -1,    -1,   103,    -1,    -1,    -1,   206,    25,   208,    27,
      -1,    -1,    -1,    -1,    -1,   774,    81,    -1,    -1,    -1,
      85,    -1,    -1,    -1,   716,   717,   785,   243,   787,    -1,
      -1,    -1,    -1,    -1,   250,    -1,   728,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,   740,    -1,
      -1,   743,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,   611,    -1,    -1,   165,    -1,    -1,   132,    -1,    -1,
      -1,   271,   137,    -1,   139,   140,    -1,    -1,    -1,   144,
      -1,    99,    -1,    -1,    -1,   103,    -1,   152,    -1,    -1,
       1,    -1,    -1,    -1,   310,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,
      -1,    22,    -1,   663,   873,    26,    27,    -1,    -1,   669,
      -1,   880,    -1,    -1,    35,    -1,    37,    38,    -1,    -1,
      -1,    42,   891,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,   243,    -1,    -1,    -1,   905,   165,    -1,   250,
      -1,    -1,    -1,    -1,    -1,   914,    -1,    -1,    69,   918,
      71,    -1,    73,    -1,    75,    76,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,
      -1,   731,    -1,   733,    -1,    -1,    -1,    -1,   738,    -1,
     101,   741,    -1,   104,    -1,    -1,   107,   747,    -1,    -1,
     750,    -1,    -1,   962,    -1,    -1,    -1,   423,    -1,   310,
      -1,    -1,   412,   429,    -1,   907,   416,    -1,    -1,    -1,
     436,    -1,    -1,   324,   774,   243,    -1,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,   785,    -1,   787,    -1,    -1,
      -1,    -1,    -1,    -1,   444,    -1,   157,    -1,    -1,    -1,
      -1,    -1,   163,    -1,  1013,  1014,  1015,  1016,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   490,    -1,    -1,    -1,   494,  1038,
    1039,    -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,
      -1,    -1,   310,    -1,   395,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,   503,    26,    27,   324,    -1,   508,    -1,
      -1,    -1,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,
      42,    31,   423,   873,    -1,    47,    -1,    -1,   429,    -1,
     880,    -1,    -1,    -1,    -1,   436,    -1,    -1,    -1,    -1,
      -1,   891,    -1,    -1,     2,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    12,   905,    78,    -1,    80,    -1,
      82,    -1,    -1,    -1,   914,    -1,    -1,    25,   918,    27,
      -1,    81,    -1,    -1,    -1,    85,    -1,   395,    -1,   101,
      -1,    -1,   104,   583,    -1,   107,   586,    -1,    -1,   490,
      -1,    -1,    -1,   494,    -1,   611,    -1,    -1,    -1,    -1,
      -1,   502,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,
      -1,   429,   962,    -1,    72,    -1,    -1,    -1,   436,    -1,
      -1,    -1,   132,   133,   624,   135,   136,   137,   628,   139,
     140,    -1,    -1,    -1,   144,   157,    -1,    -1,    -1,    -1,
      -1,    99,   152,    -1,    -1,   103,    -1,   663,   158,   159,
     160,   651,    -1,   669,    -1,   655,    -1,    -1,     2,    -1,
      -1,    -1,    -1,  1013,  1014,  1015,  1016,    -1,    12,    -1,
      -1,    -1,   490,    -1,    -1,    -1,   494,    -1,    -1,    -1,
      -1,    25,    -1,    27,   502,    -1,    -1,    -1,  1038,  1039,
      -1,    -1,   692,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
     611,    -1,    -1,    -1,    -1,   731,    -1,   733,    -1,    -1,
      -1,    -1,   738,    -1,    -1,   741,    -1,    -1,    72,    -1,
      -1,   747,    -1,    -1,   750,    -1,    -1,    -1,    -1,    -1,
      -1,     2,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    12,    -1,    85,   754,    99,    -1,   757,   774,   103,
      -1,    -1,   663,    -1,    25,    -1,    27,    -1,   669,   785,
      -1,   787,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   779,
      -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,
      -1,    -1,   250,   611,    -1,    -1,    -1,    -1,    -1,   799,
     132,   133,    -1,   135,   136,   137,    -1,   139,   140,   141,
      -1,    72,   144,   145,   146,    -1,    -1,   149,   150,   151,
     152,   165,    -1,   155,    -1,   825,   158,   159,   160,    -1,
     731,    -1,   733,    -1,    -1,    -1,     3,   738,    99,    -1,
     741,    -1,   103,    -1,    -1,   663,   747,    -1,    -1,   750,
      17,   669,   310,    20,    -1,    -1,    -1,   873,    25,    -1,
      -1,    -1,    -1,    -1,   880,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,   774,    -1,   891,    -1,    44,    -1,    -1,
      -1,    -1,    49,    -1,   785,    -1,   787,    -1,    -1,   905,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,   914,   243,
      -1,    -1,   918,    -1,   165,    -1,   250,    -1,    -1,    -1,
      -1,    -1,    79,   731,    -1,   733,    -1,    -1,    -1,    -1,
     738,    -1,    -1,   741,    91,    -1,    -1,    -1,    95,   747,
      -1,    -1,   750,    -1,    -1,   102,    -1,   395,    -1,   939,
      -1,   108,    -1,    -1,    -1,    -1,   962,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   774,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   423,   310,   785,    -1,   787,
      -1,   429,   873,    -1,    -1,    -1,    -1,    -1,   436,   880,
     324,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,   250,
     891,    -1,    -1,    -1,    -1,    -1,    -1,  1013,  1014,  1015,
    1016,    -1,    -1,    -1,   905,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   914,    -1,    -1,    -1,   918,    -1,    -1,
      -1,    -1,  1038,  1039,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     2,   490,    -1,    -1,    -1,   494,    -1,    -1,    -1,
      -1,    12,    -1,    -1,   502,    -1,    -1,    -1,    -1,   310,
      -1,   395,    -1,    -1,    25,   873,    27,    -1,    -1,    -1,
      -1,   962,   880,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   891,    -1,    -1,    -1,    -1,    -1,   423,
      -1,    -1,    -1,    -1,    -1,   429,    -1,   905,    -1,    -1,
      -1,    -1,   436,    -1,    -1,    -1,   914,    -1,    -1,    -1,
     918,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1013,  1014,  1015,  1016,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,   103,    -1,   395,    -1,    -1,  1038,  1039,    -1,
      -1,    -1,    -1,    -1,   962,    -1,   490,    -1,    -1,    -1,
     494,    -1,    -1,   611,    -1,    -1,    -1,    -1,   502,    -1,
      -1,    -1,   423,     3,    -1,    -1,    -1,    -1,   429,    -1,
      -1,    -1,    -1,    -1,    -1,   436,    -1,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,   165,  1013,  1014,  1015,  1016,    39,
      -1,    -1,    -1,    -1,    44,   663,    46,    -1,    -1,    49,
      -1,   669,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
    1038,  1039,    -1,    63,    64,    -1,    -1,    -1,    -1,   490,
      70,    12,    -1,   494,    -1,    -1,    -1,    -1,    19,    79,
      -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      31,    91,    -1,    93,    -1,    95,    -1,    -1,    98,    -1,
      -1,    -1,   102,   103,    -1,   105,    -1,   611,   108,    -1,
      -1,    -1,   243,   731,    -1,   733,    -1,    -1,    -1,   250,
     738,    -1,    -1,   741,    -1,    -1,    -1,    -1,    -1,   747,
      -1,    -1,   750,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   774,    -1,    -1,   663,
      -1,    -1,    -1,    -1,   164,   669,    -1,   785,    -1,   787,
      -1,   112,    -1,    -1,    -1,   116,    -1,    -1,    -1,   310,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     611,   132,   133,   324,   135,   136,   137,    -1,   139,   140,
     141,    -1,   143,   144,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    -1,    -1,   158,   159,   160,
      22,    -1,    -1,    -1,    26,    27,   167,   731,    -1,   733,
      -1,    -1,    -1,    35,   738,    37,    38,   741,    -1,    -1,
      42,    -1,   663,   747,    -1,    47,   750,    -1,   669,    -1,
      -1,    -1,    -1,    -1,    -1,   873,    -1,    -1,    -1,    -1,
      -1,    -1,   880,    -1,   395,    -1,    -1,    69,    -1,    71,
     774,    -1,    -1,   891,    -1,    -1,    -1,    -1,    80,    -1,
      82,   785,    -1,   787,    -1,    -1,    -1,   905,    -1,     3,
      -1,    -1,   423,    -1,    -1,    -1,   914,    -1,   429,   101,
     918,    -1,   104,    17,    18,   107,    20,    -1,    -1,    -1,
     731,    25,   733,    -1,    -1,    -1,    -1,   738,    -1,    33,
     741,    -1,    -1,    -1,    -1,    39,   747,    -1,    31,   750,
      44,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,   962,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,   774,    -1,    -1,    70,    -1,    -1,   490,
      -1,    -1,    -1,   494,   785,    79,   787,    -1,    -1,   873,
      -1,   502,    -1,    -1,    88,    89,   880,    91,    81,    93,
      -1,    95,    85,    -1,    98,    -1,    -1,   891,   102,    -1,
      -1,   105,    -1,    -1,   108,  1013,  1014,  1015,  1016,    -1,
      -1,   905,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     914,    -1,    -1,    -1,   918,    -1,    -1,    -1,    -1,    -1,
    1038,  1039,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,    -1,    -1,   136,   137,    -1,   139,   140,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,   162,   152,
     164,    -1,   873,    -1,    -1,   158,   159,   160,   962,   880,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     891,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
     611,    -1,    25,    -1,   905,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,   914,    -1,    -1,    39,   918,    -1,    -1,
      -1,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,  1013,
    1014,  1015,  1016,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,   663,    -1,  1038,  1039,    79,    -1,   669,    -1,
      -1,   962,    -1,    -1,    -1,    88,    89,    -1,    91,    -1,
      93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,    -1,  1013,  1014,  1015,  1016,    -1,    -1,    -1,    -1,
     731,    -1,   733,    -1,    -1,    -1,    -1,   738,    -1,    -1,
     741,    -1,    -1,    -1,    -1,    -1,   747,  1038,  1039,   750,
     161,   164,    -1,   164,    -1,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   774,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   785,    -1,   787,     0,     1,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    47,    -1,    49,    50,    -1,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      83,    84,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    -1,    95,    96,    -1,    98,    99,   100,   101,   102,
     891,   104,   105,   106,   107,   108,    -1,    -1,   111,    -1,
     113,    -1,    -1,   116,   905,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   914,    -1,    -1,    -1,   918,    -1,   132,
     133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,   157,    -1,    -1,   160,    -1,   162,
      -1,   164,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,
       1,   962,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,
      61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,   162,    -1,   164,    -1,   166,   167,     1,    -1,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    49,    50,    -1,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    -1,    98,    99,   100,   101,   102,    -1,
     104,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,    -1,   143,
     144,   145,   146,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    -1,   162,   163,
     164,     1,   166,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    49,
      50,    -1,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    95,    96,    -1,    98,    99,
     100,   101,   102,    -1,   104,   105,   106,   107,   108,    -1,
      -1,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   154,   155,   156,   157,    -1,    -1,
     160,    -1,   162,   163,   164,     1,   166,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    49,    50,    -1,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    83,    84,    -1,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    95,
      96,    -1,    98,    99,   100,   101,   102,    -1,   104,   105,
     106,   107,   108,    -1,    -1,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,   157,    -1,    -1,   160,    -1,   162,   163,   164,     1,
     166,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    47,    -1,    49,    50,    -1,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    83,    84,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    95,    96,    -1,    98,    99,   100,   101,
     102,    -1,   104,   105,   106,   107,   108,    -1,    -1,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,   157,    -1,    -1,   160,    -1,
     162,   163,   164,     1,   166,     3,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    49,    50,    -1,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    83,    84,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    96,    -1,
      98,    99,   100,   101,   102,    -1,   104,   105,   106,   107,
     108,    -1,    -1,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,   157,
      -1,    -1,   160,    -1,   162,   163,   164,     1,   166,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    49,    50,    -1,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    -1,    98,    99,   100,   101,   102,    -1,
     104,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,
     154,   155,   156,   157,    -1,    -1,   160,    -1,   162,   163,
     164,     1,   166,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    49,
      50,    -1,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    95,    96,    -1,    98,    99,
     100,   101,   102,    -1,   104,   105,   106,   107,   108,    -1,
      -1,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   154,   155,   156,   157,    -1,    -1,
     160,    -1,   162,     1,   164,     3,   166,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    49,    50,    -1,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    83,    84,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    96,    -1,
      98,    99,   100,   101,   102,    -1,   104,   105,   106,   107,
     108,    -1,    -1,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,   157,
      -1,    -1,   160,    -1,   162,     1,   164,     3,   166,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    49,    50,    -1,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    83,    84,    -1,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    95,
      96,    -1,    98,    99,   100,   101,   102,    -1,   104,   105,
     106,   107,   108,    -1,    -1,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,   157,    -1,    -1,   160,    -1,   162,     1,   164,     3,
     166,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    49,    50,    -1,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    -1,    98,    99,   100,   101,   102,    -1,
     104,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,
     154,   155,   156,   157,    -1,    -1,   160,    -1,   162,     1,
     164,     3,   166,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    47,    -1,    49,    50,    -1,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    83,    84,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    95,    96,    -1,    98,    99,   100,   101,
     102,    -1,   104,   105,   106,   107,   108,    -1,    -1,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,   157,    -1,    -1,   160,    -1,
     162,     1,   164,     3,   166,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    49,
      50,    -1,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    95,    96,    -1,    98,    99,
     100,   101,   102,    -1,   104,   105,   106,   107,   108,    -1,
      -1,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   154,   155,   156,   157,    -1,    -1,
     160,    -1,   162,     1,   164,     3,   166,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    49,    50,    -1,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    83,    84,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    96,    -1,
      98,    99,   100,   101,   102,    -1,   104,   105,   106,   107,
     108,    -1,    -1,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,   157,
      -1,    -1,   160,    -1,   162,     1,   164,     3,   166,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    49,    50,    -1,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    83,    84,    -1,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    95,
      96,    -1,    98,    99,   100,   101,   102,    -1,   104,   105,
     106,   107,   108,    -1,    -1,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,   157,    -1,    -1,   160,    -1,   162,     1,   164,     3,
     166,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    49,    50,    -1,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    95,    96,    -1,    98,    99,   100,   101,   102,    -1,
     104,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,
     154,   155,   156,   157,    -1,    -1,   160,    -1,   162,     1,
     164,     3,   166,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    47,    -1,    49,    50,    -1,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    83,    84,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    95,    96,    -1,    98,    99,   100,   101,
     102,    -1,   104,   105,   106,   107,   108,    -1,    -1,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,   157,    -1,    -1,   160,    -1,
     162,     1,   164,     3,   166,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    49,
      50,    -1,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    95,    96,    -1,    98,    99,
     100,   101,   102,    -1,   104,   105,   106,   107,   108,    -1,
      -1,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   154,   155,   156,   157,    -1,    -1,
     160,    -1,   162,    -1,   164,     1,   166,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,
      -1,    57,    58,    -1,    60,    61,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    93,    -1,    95,
      -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,   105,
      -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,    -1,    -1,    -1,   160,    -1,   162,    -1,   164,    -1,
     166,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,    61,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,
     162,    -1,   164,    -1,   166,   167,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    58,    -1,    60,    61,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    -1,
      -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    -1,    95,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      -1,    -1,    -1,   160,    -1,   162,    -1,   164,    -1,   166,
     167,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,    61,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,
     162,    -1,   164,    -1,   166,   167,     3,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    58,    -1,    60,    61,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    74,    -1,    -1,
      -1,    -1,    79,    80,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    -1,    95,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      -1,    -1,    -1,   160,    -1,   162,    -1,   164,    -1,   166,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    -1,    60,    61,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    -1,    95,    -1,    -1,    98,    99,   100,    -1,   102,
     103,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,   162,
      -1,   164,    -1,   166,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      99,   100,    -1,   102,   103,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,   162,    -1,   164,   165,   166,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    -1,
      95,    -1,    -1,    98,    99,   100,    -1,   102,   103,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    -1,    -1,    -1,   160,    -1,   162,    -1,   164,
     165,   166,     3,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    45,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,
      61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,   162,    -1,   164,     3,   166,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,   157,    -1,
      -1,   160,    -1,   162,    -1,   164,    -1,   166,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    -1,
      95,    -1,    -1,    98,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    -1,    -1,    -1,   160,    -1,   162,    -1,   164,
       3,   166,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    -1,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    -1,    95,    -1,    -1,    98,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,   162,
      -1,   164,     3,   166,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,
      61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,
     101,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,   162,    -1,   164,     3,   166,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,   162,    -1,   164,    -1,   166,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    -1,
      95,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    -1,    -1,    -1,   160,    -1,   162,    -1,   164,
       3,   166,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    -1,    60,    61,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    -1,    95,    -1,    -1,    98,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,   162,
      -1,   164,    -1,   166,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,   132,   133,   134,   135,   136,    -1,    -1,
      -1,    12,   141,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,   151,    -1,    25,   154,   155,   156,    -1,    -1,
      -1,   160,    33,   162,   163,   164,    -1,   166,    39,    -1,
      -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    49,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,    -1,    -1,   125,   126,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,   136,    -1,    -1,   139,    -1,
      -1,    -1,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,    -1,    -1,   158,   159,   160,
     161,    -1,     3,   164,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,
      61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,   162,    -1,   164,     3,   166,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,   162,    -1,   164,    -1,   166,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    -1,
      95,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    -1,    -1,    -1,   160,    -1,   162,    -1,   164,
       3,   166,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    -1,    60,    61,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    -1,    95,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,   162,
      -1,   164,    -1,   166,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,   162,    -1,   164,    -1,   166,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    -1,
      95,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    -1,    -1,    -1,   160,    -1,   162,    -1,   164,
      -1,   166,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,
      61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,   162,    -1,   164,     3,   166,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,   162,    -1,   164,     3,   166,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    58,    -1,    60,    61,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    -1,
      -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    -1,    95,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      -1,    -1,    -1,   160,    -1,   162,    -1,   164,     3,   166,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    -1,
      95,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    -1,    -1,    -1,   160,    -1,   162,    -1,   164,
       3,   166,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    -1,    60,    61,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,   162,
      -1,   164,     3,   166,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,
      61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,   162,    -1,   164,     3,   166,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,   162,    -1,   164,     3,   166,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    58,    -1,    60,    61,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    -1,
      -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    -1,    95,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      -1,    -1,    -1,   160,    -1,   162,    -1,   164,     3,   166,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    -1,
      95,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    -1,    -1,    -1,   160,    -1,   162,    -1,   164,
       3,   166,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    -1,    60,    61,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,   162,
      -1,   164,     3,   166,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,
      61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,   162,    -1,   164,     3,   166,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,   162,    -1,   164,     3,   166,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    58,    -1,    60,    61,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    -1,
      -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    -1,    95,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,
      -1,    -1,    -1,   160,    -1,   162,    -1,   164,     3,   166,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    58,    -1,    60,    61,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    -1,
      95,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    -1,    -1,    -1,   160,    -1,   162,    -1,   164,
       3,   166,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    -1,    60,    61,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,   162,
      -1,   164,     3,   166,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,
      61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,   160,
      -1,   162,    -1,   164,     3,   166,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
      -1,   160,    -1,    -1,    -1,   164,     3,   166,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    58,    -1,    60,    61,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    -1,
      -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    -1,    95,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,
      -1,   108,    -1,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,    -1,   161,   155,   156,
     164,    -1,   166,   160,    -1,   162,    -1,   164,    -1,   166,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      43,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    -1,    60,    61,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,    -1,    -1,    -1,   138,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,   162,
      -1,   164,   165,   166,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    55,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    97,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,   134,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,   156,   157,    -1,
      -1,    -1,    -1,   162,    33,   164,    35,   166,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,     3,   134,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,   156,    -1,    -1,
      -1,    -1,    -1,   162,    33,   164,    35,   166,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,   134,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,   156,    -1,    -1,
      -1,    -1,    -1,   162,    33,   164,    35,   166,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      -1,    60,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,     3,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    -1,    95,    17,    18,    98,
      20,    -1,    -1,   102,    -1,    25,   105,    -1,    -1,   108,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,   134,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,   164,    -1,   166,    88,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    -1,    98,    -1,
       3,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    44,    -1,    46,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,   164,    12,    -1,    70,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    88,    89,    -1,    91,    -1,
      93,    -1,    95,    -1,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,   121,   122,
      -1,    -1,   125,   126,   127,   128,    31,   130,   131,   132,
     133,   134,   135,   136,    81,    -1,   139,    -1,    85,    -1,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,    12,    -1,   158,   159,   160,   161,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    31,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,   132,   133,    -1,   135,   136,
     137,    -1,   139,   140,   141,    -1,   143,   144,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    -1,
      12,   158,   159,   160,    -1,    -1,    -1,    19,    -1,    -1,
     167,    -1,    81,    -1,    -1,    -1,    85,   132,   133,    31,
     135,   136,   137,    -1,   139,   140,   141,    -1,   143,   144,
     145,   146,    -1,    -1,   149,   150,   151,   152,   153,    -1,
     155,    12,    -1,   158,   159,   160,    -1,   116,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,   132,   133,    -1,   135,   136,   137,    81,
     139,   140,   141,    85,   143,   144,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,   154,   155,    12,    -1,   158,
     159,   160,    -1,    -1,    19,    -1,    -1,    -1,   167,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    31,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
     132,   133,    -1,   135,   136,   137,    -1,   139,   140,   141,
      -1,   143,   144,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,    12,   116,   158,   159,   160,    -1,
      -1,    19,    -1,    -1,    -1,   167,    81,    -1,    -1,    -1,
      85,   132,   133,    31,   135,   136,   137,    -1,   139,   140,
     141,    -1,   143,   144,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    12,    -1,   158,   159,   160,
      -1,   116,    19,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,   132,   133,    -1,
     135,   136,   137,    81,   139,   140,   141,    85,   143,   144,
     145,   146,   147,    -1,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,   158,   159,   160,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,   132,   133,    -1,   135,   136,   137,
      -1,   139,   140,   141,    -1,   143,   144,   145,   146,   147,
      -1,   149,   150,   151,   152,   153,   154,   155,    12,   116,
     158,   159,   160,    -1,    -1,    19,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,    31,   135,   136,
     137,    -1,   139,   140,   141,    -1,   143,   144,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    -1,
      -1,   158,   159,   160,    -1,    -1,    -1,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      94,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,   125,   126,   127,   128,    -1,   130,   131,   132,   133,
      -1,   135,   136,   137,    -1,   139,   140,   141,    -1,   143,
     144,   145,   146,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,    -1,    81,   158,   159,   160,    85,   162,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    94,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,   125,   126,   127,
     128,    -1,   130,   131,   132,   133,    -1,   135,   136,   137,
      -1,   139,   140,   141,    -1,   143,   144,   145,   146,   147,
      -1,   149,   150,   151,   152,   153,   154,   155,    -1,    81,
     158,   159,   160,    85,   162,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    94,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,   125,   126,   127,   128,    -1,   130,   131,
     132,   133,    -1,   135,   136,   137,    -1,   139,   140,   141,
      -1,   143,   144,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,    -1,    81,   158,   159,   160,    85,
     162,    -1,    12,    -1,    -1,    -1,    -1,    -1,    94,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,   125,
     126,   127,   128,    -1,   130,   131,   132,   133,    -1,   135,
     136,   137,    -1,   139,   140,   141,    -1,   143,   144,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      -1,    81,   158,   159,   160,    85,   162,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    94,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,   125,   126,   127,   128,    -1,
     130,   131,   132,   133,    -1,   135,   136,   137,    -1,   139,
     140,   141,    -1,   143,   144,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,    -1,    81,   158,   159,
     160,    85,   162,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      94,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,   125,   126,   127,   128,    -1,   130,   131,   132,   133,
      -1,   135,   136,   137,    -1,   139,   140,   141,    -1,   143,
     144,   145,   146,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,    -1,    81,   158,   159,   160,    85,   162,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    94,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,   125,   126,   127,
     128,    -1,   130,   131,   132,   133,    -1,   135,   136,   137,
      -1,   139,   140,   141,    -1,   143,   144,   145,   146,   147,
      -1,   149,   150,   151,   152,   153,   154,   155,    -1,    81,
     158,   159,   160,    85,   162,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    94,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,   125,   126,   127,   128,    -1,   130,   131,
     132,   133,    -1,   135,   136,   137,    -1,   139,   140,   141,
      -1,   143,   144,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,    -1,    81,   158,   159,   160,    85,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,   125,
     126,   127,   128,    -1,   130,   131,   132,   133,    -1,   135,
     136,   137,    -1,   139,   140,   141,    -1,   143,   144,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      12,    -1,   158,   159,   160,    -1,   162,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    45,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
     112,    81,    -1,    -1,   116,    85,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,    -1,   135,   136,   137,    -1,   139,   140,   141,
      -1,   143,   144,   145,   146,   147,   116,   149,   150,   151,
     152,   153,   154,   155,    -1,    -1,   158,   159,   160,    -1,
     162,    -1,   132,   133,    -1,   135,   136,   137,    81,   139,
     140,   141,    85,   143,   144,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,    12,    -1,   158,   159,
     160,    -1,   162,    19,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,   116,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,    -1,   135,   136,   137,    -1,   139,   140,   141,    -1,
     143,   144,   145,   146,   147,    -1,   149,   150,   151,   152,
     153,   154,   155,    12,    -1,   158,   159,   160,    -1,   162,
      19,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,   135,
     136,   137,    81,   139,   140,   141,    85,   143,   144,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,   158,   159,   160,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,   116,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,   132,   133,    -1,   135,   136,   137,    -1,
     139,   140,   141,    -1,   143,   144,   145,   146,   147,   116,
     149,   150,   151,   152,   153,   154,   155,    -1,    -1,   158,
     159,   160,    -1,   162,    -1,   132,   133,    -1,   135,   136,
     137,    -1,   139,   140,   141,    -1,   143,   144,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    12,
      -1,   158,   159,   160,    22,   162,    19,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    31,    37,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    12,    50,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    69,    -1,    71,    -1,    36,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    82,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    66,   104,    -1,   106,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,   116,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,    -1,   135,   136,   137,    -1,   139,   140,   141,    -1,
     143,   144,   145,   146,   147,   116,   149,   150,   151,   152,
     153,   154,   155,    -1,    -1,   158,   159,   160,    -1,   162,
      -1,   132,   133,    -1,   135,   136,   137,    -1,   139,   140,
     141,    -1,   143,   144,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,     3,   157,   158,   159,   160,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    -1,    31,
      -1,    -1,    -1,    -1,    36,    33,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    44,    -1,    46,    -1,
      -1,    49,    -1,    -1,    -1,    12,    -1,    -1,    -1,    57,
      -1,    -1,    19,    -1,    66,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    31,    -1,    -1,    -1,    -1,    81,
      -1,    79,    -1,    85,    -1,    -1,    -1,    -1,    45,    -1,
      88,    89,    -1,    91,    -1,    93,    12,    95,    -1,    -1,
      98,    -1,    -1,    19,   102,    -1,    -1,   105,    -1,    -1,
     108,    -1,    -1,    -1,   116,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    45,
     132,   133,    -1,   135,   136,   137,    -1,   139,   140,   141,
      -1,   143,   144,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,    -1,   112,   158,   159,   160,   116,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,   132,   133,    -1,   135,   136,
     137,    -1,   139,   140,   141,    -1,   143,   144,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    -1,
     116,   158,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,   135,
     136,   137,    -1,   139,   140,   141,    -1,   143,   144,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      12,    -1,   158,   159,   160,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    45,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    66,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    81,    -1,    -1,   116,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,    -1,   135,   136,   137,    -1,   139,   140,   141,
      -1,   143,   144,   145,   146,   147,   116,   149,   150,   151,
     152,   153,   154,   155,    -1,    -1,   158,   159,   160,    -1,
      81,    -1,   132,   133,    85,   135,   136,   137,    -1,   139,
     140,   141,    -1,   143,   144,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,    12,    -1,   158,   159,
     160,    -1,    -1,    19,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,   132,   133,    -1,   135,   136,   137,    -1,   139,   140,
     141,    -1,   143,   144,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    12,   157,   158,   159,   160,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,   132,   133,    85,   135,
     136,   137,    -1,   139,   140,   141,    -1,   143,   144,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,    -1,    81,    -1,    -1,   116,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,    -1,   135,   136,
     137,    -1,   139,   140,   141,    -1,   143,   144,   145,   146,
     147,   116,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,    -1,    -1,    -1,   132,   133,    -1,
     135,   136,   137,    -1,   139,   140,   141,    -1,   143,   144,
     145,   146,   147,    -1,   149,   150,   151,   152,   153,   154,
     155,    12,   157,   158,   159,   160,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    81,    -1,   115,   116,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,   132,   133,    -1,   135,   136,   137,    -1,   139,   140,
     141,    -1,   143,   144,   145,   146,   147,   116,   149,   150,
     151,   152,   153,   154,   155,    -1,    -1,   158,   159,   160,
      -1,    81,    -1,   132,   133,    85,   135,   136,   137,    -1,
     139,   140,   141,    -1,   143,   144,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,   154,   155,    12,    -1,   158,
     159,   160,    -1,    -1,    19,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,   132,   133,    -1,   135,   136,   137,    -1,   139,
     140,   141,    -1,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    12,    -1,   158,   159,
     160,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    81,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,   112,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,   132,   133,    85,
     135,   136,   137,    -1,   139,   140,   141,    -1,   143,   144,
     145,   146,   147,    -1,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,   158,   159,   160,    -1,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,   135,
     136,   137,    -1,   139,   140,   141,    -1,   143,   144,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
     116,   157,   158,   159,   160,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,   135,
     136,   137,    -1,   139,   140,   141,    -1,   143,   144,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,   154,   155,
      12,    -1,   158,   159,   160,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
     132,   133,    -1,   135,   136,   137,    -1,   139,   140,   141,
      -1,   143,   144,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,   154,   155,   115,   116,   158,   159,   160,    -1,
      81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,    -1,   135,   136,   137,    -1,   139,   140,
     141,    -1,   143,   144,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,   116,    -1,   158,   159,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,    -1,   135,   136,   137,    -1,   139,   140,
     141,    -1,   143,   144,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    12,     3,   158,   159,   160,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    20,    31,    32,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    12,    13,    -1,
      -1,    -1,    39,    -1,    19,    -1,    -1,    44,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,    70,    81,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    -1,    91,    -1,    93,    -1,    95,    -1,
      -1,    98,    -1,    -1,    -1,   102,    81,    -1,   105,   116,
      85,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,    -1,   135,   136,
     137,    -1,   139,   140,   141,    -1,   143,   144,   145,   146,
     147,   116,   149,   150,   151,   152,   153,   154,   155,    -1,
      -1,   158,   159,   160,    -1,    -1,    -1,   132,   133,    -1,
     135,   136,   137,    -1,   139,   140,   141,    -1,   143,   144,
     145,   146,   147,    -1,   149,   150,   151,   152,   153,   154,
     155,    12,     3,   158,   159,   160,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    20,
      31,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    12,    -1,    -1,    -1,    -1,    39,    -1,
      19,    -1,    -1,    44,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,
      81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    88,    89,    -1,
      91,    -1,    93,    -1,    95,    -1,    -1,    98,    -1,    -1,
      -1,   102,    81,    -1,   105,   116,    85,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,   132,   133,    -1,   135,   136,   137,    -1,   139,   140,
     141,    -1,   143,   144,   145,   146,   147,   116,   149,   150,
     151,   152,   153,   154,   155,    -1,    -1,   158,   159,   160,
      -1,    -1,    -1,   132,   133,    -1,   135,   136,   137,    -1,
     139,   140,   141,    -1,   143,   144,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,   154,   155,    12,     3,   158,
     159,   160,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    20,    31,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    12,
      -1,    -1,    -1,    -1,    39,    -1,    19,    -1,    -1,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    81,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    88,    89,    -1,    91,    -1,    93,    -1,
      95,    -1,    -1,    98,    -1,    -1,    -1,   102,    81,    -1,
     105,   116,    85,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,
     135,   136,   137,    -1,   139,   140,   141,    -1,   143,   144,
     145,   146,   147,   116,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,   158,   159,   160,    -1,    -1,    -1,   132,
     133,    -1,   135,   136,   137,    -1,   139,   140,   141,    -1,
     143,   144,   145,   146,   147,    -1,   149,   150,   151,   152,
     153,   154,   155,    12,     3,   158,   159,   160,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    20,    31,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    12,    -1,    -1,    -1,    -1,
      39,    -1,    19,    -1,    -1,    44,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    31,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    70,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    88,
      89,    -1,    91,    -1,    93,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,   102,    81,    -1,   105,   116,    85,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,   132,   133,    -1,   135,   136,   137,    -1,
     139,   140,   141,    -1,   143,   144,   145,   146,   147,   116,
     149,   150,   151,   152,   153,   154,   155,    -1,    -1,   158,
     159,   160,    -1,    -1,    -1,   132,   133,    -1,   135,   136,
     137,    -1,   139,   140,   141,    -1,   143,   144,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    12,
      -1,   158,   159,   160,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      81,    -1,    -1,   116,    85,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,   132,
     133,    -1,   135,   136,   137,    -1,   139,   140,   141,    -1,
     143,   144,   145,   146,   147,   116,   149,   150,   151,   152,
     153,   154,   155,    -1,    -1,   158,   159,   160,    31,    -1,
      -1,   132,   133,    -1,   135,   136,   137,    81,   139,   140,
     141,    85,   143,   144,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,   154,   155,    12,    -1,   158,   159,   160,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    31,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,   132,   133,
      -1,   135,   136,   137,    -1,   139,   140,   141,    55,   143,
     144,   145,   146,   147,    -1,   149,   150,   151,   152,   153,
     154,   155,    12,   116,   158,   159,   160,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,   132,
     133,    31,   135,   136,   137,    -1,   139,   140,   141,    -1,
     143,   144,   145,   146,    -1,    -1,   149,   150,   151,   152,
     153,   154,   155,    -1,    -1,   158,   159,   160,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,    -1,   135,   136,
     137,    81,   139,   140,   141,    85,   143,   144,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,   154,   155,    -1,
      -1,   158,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,    -1,   135,   136,   137,    -1,   139,
     140,   141,    -1,   143,   144,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,    -1,    22,   158,   159,
     160,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    22,    37,    38,    -1,    26,    27,    42,    -1,    -1,
      -1,    -1,    47,    -1,    35,    -1,    37,    38,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    -1,    78,    -1,    80,    -1,    82,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,    -1,    22,    -1,    -1,    -1,    26,    27,
     101,    -1,    -1,   104,    -1,    -1,   107,    35,    22,    37,
      38,    -1,    26,    27,    42,    -1,    -1,    -1,    -1,    47,
      -1,    35,    -1,    37,    38,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,   157,    71,    -1,    73,    -1,    75,   163,    -1,
      78,    -1,    80,    -1,    82,    69,   157,    71,    -1,    73,
      -1,    75,   163,    31,    78,    -1,    80,    -1,    82,    -1,
      -1,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,   107,
      -1,    22,    -1,    -1,    -1,    26,    27,   101,    -1,    -1,
     104,    -1,    -1,   107,    35,    -1,    37,    38,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,   157,
      71,    -1,    73,    -1,    75,   163,    -1,    78,    -1,    80,
      -1,    82,    -1,   157,    -1,    -1,    -1,    -1,   116,   163,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,   104,   132,   133,   107,   135,   136,   137,
      -1,   139,   140,   141,    -1,   143,   144,   145,   146,    -1,
      -1,   149,   150,   151,   152,   153,     1,   155,     3,    -1,
     158,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,   157,    -1,    33,    -1,
      -1,    -1,   163,    -1,    39,    -1,    -1,    -1,    -1,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,     3,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    17,
      18,    -1,    20,    -1,    79,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    88,    89,    33,    91,    -1,    93,    -1,
      95,    39,    -1,    98,    -1,    -1,    44,   102,    46,    -1,
     105,    49,    -1,   108,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    -1,    91,    -1,    93,    -1,    95,    -1,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,
     108
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   173,   174,     0,     1,     3,     5,     6,     7,     8,
       9,    10,    14,    15,    16,    17,    18,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    33,    35,
      37,    38,    39,    40,    41,    42,    43,    44,    46,    47,
      49,    52,    53,    54,    56,    57,    58,    60,    61,    63,
      64,    65,    69,    70,    71,    72,    73,    74,    75,    78,
      79,    80,    82,    83,    84,    86,    87,    88,    89,    90,
      91,    92,    93,    95,    96,    98,    99,   100,   101,   102,
     104,   105,   107,   108,   111,   113,   116,   132,   133,   134,
     135,   136,   141,   151,   154,   155,   156,   157,   160,   162,
     164,   166,   175,   176,   177,   178,   179,   180,   182,   187,
     188,   189,   190,   194,   196,   199,   200,   202,   203,   204,
     209,   210,   212,   213,   214,   218,   219,   222,   223,   226,
     227,   230,   233,   234,   259,   262,   263,   283,   284,   285,
     286,   287,   288,   289,   297,   298,   299,   300,   301,   304,
     305,   306,   307,   308,   309,   310,   312,   313,   314,   315,
     316,   157,   177,   301,   112,   290,   291,     3,   191,    14,
      22,    35,    40,    41,    43,    80,    93,   162,   166,   230,
     283,   288,   299,   300,   301,   304,   306,   307,   290,   301,
     101,   262,    82,   191,   177,   277,   301,   177,   164,     8,
      80,   301,   302,     8,    11,    80,   101,   302,    71,   114,
     211,   301,   211,   301,    26,   263,   301,   301,   164,     3,
      17,    18,    20,    25,    33,    39,    44,    46,    49,    57,
      63,    64,    70,    79,    88,    89,    91,    93,    95,    98,
     102,   105,   108,   193,   195,   231,   164,   193,   264,   265,
      32,   182,   198,   301,   301,    18,    70,    88,   105,   301,
     301,   301,     8,   164,   201,    22,    35,    38,    80,   202,
       4,   156,   253,   276,   301,    99,   100,   157,   301,   303,
     301,   198,   301,   301,   301,    92,   164,   177,   301,   301,
     182,   190,   301,   304,   182,   190,   301,   193,   260,   301,
     301,   301,   301,   301,   301,   301,   301,     1,   163,   175,
     183,   276,   103,   142,   253,   278,   279,   303,   211,   276,
     301,   311,    73,   177,   162,    77,   181,   106,   193,   193,
      50,    76,   248,   264,   156,   157,   148,   301,    12,    19,
      31,    81,    85,   116,   132,   133,   135,   136,   137,   139,
     140,   141,   143,   144,   145,   146,   147,   149,   150,   151,
     152,   153,   154,   155,   158,   159,   160,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   161,   240,   164,   166,    81,    85,   164,   177,
     157,   301,   301,   301,   276,   162,   182,    45,   290,   260,
     264,   157,   138,   157,   111,   194,   253,   280,   281,   282,
     303,    80,   207,   234,   262,    80,   205,   260,   234,   262,
     193,   164,   198,    32,    45,   198,   112,   198,   293,    32,
      45,   198,   293,    36,    66,   157,    94,   182,   240,   280,
     177,   164,   242,   103,   164,   193,   266,   267,     1,   137,
     271,    45,   138,   177,   198,   164,   164,   198,   280,   202,
     193,   138,   157,   301,   301,   157,   162,   198,   164,   280,
     157,   215,   157,   215,   157,   117,   261,   157,   198,   157,
     163,   163,   175,   138,   163,   301,   138,   165,   138,   165,
     167,   293,    45,   138,   167,   293,   115,   138,   167,     8,
       1,   163,   183,    59,   184,   301,   137,   224,   162,   235,
     157,   301,   301,   301,   301,   211,   301,   211,   301,   301,
     301,   301,   301,   301,   301,    20,    33,    57,   101,   194,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   303,   303,   303,   303,
     303,   280,   280,   211,   301,   211,   301,    27,    45,    82,
     107,   292,   295,   296,   301,   316,    32,    45,    32,    45,
      94,    45,   167,   211,   301,   198,   157,   157,   301,   301,
     117,   165,   138,   208,   193,   264,   206,   193,   157,   264,
      45,   276,    43,   301,   211,   301,   164,   198,    43,   301,
     211,   301,   198,   160,   184,   186,   301,   184,   185,   177,
     301,    34,   301,   165,    27,    45,    48,    68,    71,    82,
     101,   176,   243,   244,   245,   246,   232,   267,   138,   165,
      33,    46,    89,    93,   166,   197,   272,   284,   117,   268,
     301,   265,   301,   301,   165,   253,   301,     1,   220,   280,
     165,    21,   216,   272,   284,   138,   163,   165,   165,   278,
     165,   278,   177,   167,   211,   301,   167,   177,   301,   167,
     301,   167,   301,   163,   163,   193,   138,   157,    13,    36,
      66,   276,   162,     1,   193,   228,   229,    27,    71,    82,
     101,   237,   247,   164,   157,   157,   157,   157,   157,   165,
     167,    45,    82,   138,   165,   283,    81,    81,    43,   211,
     301,    43,   211,   301,   211,   301,   290,   290,   157,   253,
     303,   282,   193,   224,   157,   193,   224,   157,   301,   165,
     301,    32,   198,    32,   198,   294,   295,   301,    32,   198,
     293,    32,   198,   293,   157,    13,   157,    34,    34,   177,
      94,   182,    45,    82,   245,   138,   165,   164,   193,    27,
      71,    82,   101,   249,   165,   267,   271,     1,   276,    62,
     303,   165,   165,   163,    67,   109,   163,   221,   165,   164,
     182,   193,   217,   260,   177,   167,   293,   167,   293,   177,
     115,   301,   301,   186,   185,     1,   225,   163,   117,   138,
     163,    82,   236,     1,     3,    12,    17,    19,    20,    25,
      39,    44,    49,    51,    57,    63,    64,    79,    91,    95,
      98,   102,   108,   132,   133,   134,   135,   136,   139,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     155,   158,   159,   160,   161,   164,   192,   193,   195,   238,
     239,   240,   283,   165,   295,   271,   283,   283,   301,    32,
      32,   301,    32,    32,   167,   167,   198,   198,   224,   162,
     224,   162,   198,    94,    43,   301,    43,   301,   138,   165,
      94,    43,   301,   198,    43,   301,   198,   301,   177,   301,
     177,    34,   193,   244,   267,   137,   275,    82,   271,   268,
     167,    45,   167,   164,   164,    32,   177,   276,   217,   137,
     182,    43,   177,   301,   167,    43,   177,   301,   167,   301,
      13,    36,    66,   157,   157,   163,    75,    78,   163,   176,
     200,   301,   229,   249,   164,   241,   193,   301,   132,   140,
     241,   241,   268,    94,    43,    43,    94,    43,    43,    43,
      43,   162,   225,   162,   225,   301,   301,   301,   295,   301,
     301,   301,    34,   177,   275,   165,   166,   197,   253,   274,
     284,   142,   254,   268,    55,   110,   255,   301,   272,   284,
     280,   280,   177,   198,   165,   301,   301,   177,   301,   177,
     301,   186,   185,   200,     1,   137,   270,   243,   165,     3,
      95,   239,   240,   301,   301,   301,   301,   301,   301,   225,
     163,   225,   163,    94,    94,    94,    94,   177,   268,   275,
     167,   276,   253,   301,     3,    84,    95,   256,   257,   258,
     301,   182,   199,   252,   167,   165,   165,   182,    94,    94,
     157,   157,   166,   197,   269,   284,    97,   250,   165,   241,
     241,    94,    94,    94,    94,    94,    94,   163,   163,   301,
     301,   301,   301,   254,   268,   253,   273,   274,   284,    45,
     167,   258,   110,   138,   117,   143,   145,   146,   149,   150,
      55,   284,   156,   156,   301,   301,     1,   167,   276,   255,
     301,   273,   274,   301,   257,   258,   258,   258,   258,   258,
     258,   256,   167,   269,   284,   167,   157,   251,   252,   167,
     269,   284,   273
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
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
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, context); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    ParserContext* context;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (context);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, context)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    ParserContext* context;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ParserContext* context)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, context)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    ParserContext* context;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, context); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserContext* context)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, context)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    ParserContext* context;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}



struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;
    /* Used to determine if this is the first time this instance has
       been used.  */
    int yynew;
  };

/* Initialize the parser data structure.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
yypstate *
yypstate_new (void)
#else
yypstate *
yypstate_new ()

#endif
{
  yypstate *yyps;
  yyps = (yypstate *) malloc (sizeof *yyps);
  if (!yyps)
    return YY_NULL;
  yyps->yynew = 1;
  return yyps;
}

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void
yypstate_delete (yypstate *yyps)
#else
void
yypstate_delete (yyps)
    yypstate *yyps;
#endif
{
#ifndef yyoverflow
  /* If the stack was reallocated but the parse did not complete, then the
     stack still needs to be freed.  */
  if (!yyps->yynew && yyps->yyss != yyps->yyssa)
    YYSTACK_FREE (yyps->yyss);
#endif
  free (yyps);
}

#define yynerrs yyps->yynerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yyerror_range yyps->yyerror_range
#define yystacksize yyps->yystacksize


/*---------------.
| yypush_parse.  |
`---------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yypush_parse (yypstate *yyps, int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, ParserContext* context)
#else
int
yypush_parse (yyps, yypushed_char, yypushed_val, yypushed_loc, context)
    yypstate *yyps;
    int yypushed_char;
    YYSTYPE const *yypushed_val;
    YYLTYPE *yypushed_loc;
    ParserContext* context;
#endif
{
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc = yyloc_default;


  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  if (!yyps->yynew)
    {
      yyn = yypact[yystate];
      goto yyread_pushed_token;
    }

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = *yypushed_loc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 497 "chapel.ypp"
    { yyblock = (yyval.pblockstmt); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 502 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); resetTempID(); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 503 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->appendChapelStmt((yyvsp[(2) - (2)].pblockstmt)); context->generatedStmt = (yyvsp[(1) - (2)].pblockstmt); resetTempID(); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 510 "chapel.ypp"
    { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[(1) - (2)].vpch), (yyvsp[(2) - (2)].pblockstmt) ); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 515 "chapel.ypp"
    { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[(2) - (2)].pch))); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 516 "chapel.ypp"
    { (yyvsp[(1) - (3)].vpch)->add(astr((yyvsp[(3) - (3)].pch))); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 535 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (2)].pexpr)); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 536 "chapel.ypp"
    { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 537 "chapel.ypp"
    { (yyval.pblockstmt) = buildBeginStmt((yyvsp[(2) - (3)].pcallexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 538 "chapel.ypp"
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[(2) - (3)].pch)); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 539 "chapel.ypp"
    { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[(2) - (3)].pcallexpr), (yyvsp[(3) - (3)].pblockstmt));  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 540 "chapel.ypp"
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[(2) - (3)].pch)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 541 "chapel.ypp"
    { (yyval.pblockstmt) = buildDeleteStmt((yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 542 "chapel.ypp"
    { (yyval.pblockstmt) = buildLabelStmt((yyvsp[(2) - (3)].pch), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 543 "chapel.ypp"
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 544 "chapel.ypp"
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 545 "chapel.ypp"
    { (yyval.pblockstmt) = buildOnStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 546 "chapel.ypp"
    { (yyval.pblockstmt) = buildSerialStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 547 "chapel.ypp"
    { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 548 "chapel.ypp"
    { (yyval.pblockstmt) = buildSyncStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 549 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 550 "chapel.ypp"
    { (yyval.pblockstmt) = buildErrorStandin(); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 555 "chapel.ypp"
    {
      (yyval.pmodsymbol) = buildModule((yyvsp[(4) - (4)].pch), currentModuleType, NULL, yyfilename, (yyvsp[(1) - (4)].b), (yyvsp[(2) - (4)].b), (yylsp[(1) - (4)]).comment);
      // store previous module name in order to restore it once we're
      // done with this module in module_decl_stmt below.  Ultimately,
      // we will need to store a stack of module names in order to
      // support full module path resolution of -s config flags.
      (yyloc).prevModule = currentModuleName;
      currentModuleName = (yyvsp[(4) - (4)].pch);
    }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 568 "chapel.ypp"
    { (yyvsp[(1) - (3)].pmodsymbol)->block = new BlockStmt();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[(1) - (3)].pmodsymbol)));
      currentModuleName = (yylsp[(1) - (3)]).prevModule;  // restore previous module name
    }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 573 "chapel.ypp"
    { (yyvsp[(1) - (4)].pmodsymbol)->block = (yyvsp[(3) - (4)].pblockstmt);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[(1) - (4)].pmodsymbol)));
      currentModuleName = (yylsp[(1) - (4)]).prevModule;  // restore previous module name
    }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 578 "chapel.ypp"
    { (yyvsp[(1) - (4)].pmodsymbol)->block = buildErrorStandin();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[(1) - (4)].pmodsymbol)));
      currentModuleName = (yylsp[(1) - (4)]).prevModule;  // restore previous module name
    }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 585 "chapel.ypp"
    { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 586 "chapel.ypp"
    { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 587 "chapel.ypp"
    { (yyval.b) = true; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 591 "chapel.ypp"
    { (yyval.b) = false; }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 592 "chapel.ypp"
    { (yyval.b) = true;  }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 605 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 606 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (3)].pblockstmt);              }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 607 "chapel.ypp"
    { (yyval.pblockstmt) = buildErrorStandin(); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 612 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[(1) - (1)].pblockstmt)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 613 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->appendChapelStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 618 "chapel.ypp"
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[(1) - (1)].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 623 "chapel.ypp"
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 628 "chapel.ypp"
    { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[(3) - (3)].pexpr);
                                         (yyvsp[(1) - (3)].ponlylist)->push_back(cur); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 632 "chapel.ypp"
    { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[(3) - (5)].pexpr), (yyvsp[(5) - (5)].pexpr));
                                         (yyvsp[(1) - (5)].ponlylist)->push_back(cur); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 639 "chapel.ypp"
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 648 "chapel.ypp"
    { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 657 "chapel.ypp"
    { (yyval.b) = (currentModuleType != MOD_INTERNAL ? true : false); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 658 "chapel.ypp"
    { (yyval.b) = false; }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 659 "chapel.ypp"
    { (yyval.b) = true; }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 663 "chapel.ypp"
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[(3) - (4)].ponlylist), (yyvsp[(1) - (4)].b)); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 664 "chapel.ypp"
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[(3) - (6)].pexpr), "", (yyvsp[(5) - (6)].ponlylist), true, (yyvsp[(1) - (6)].b)); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 665 "chapel.ypp"
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[(3) - (8)].pexpr), (yyvsp[(5) - (8)].pexpr), (yyvsp[(7) - (8)].ponlylist), true, (yyvsp[(1) - (8)].b)); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 666 "chapel.ypp"
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[(3) - (6)].pexpr), "", (yyvsp[(5) - (6)].ponlylist), false, (yyvsp[(1) - (6)].b)); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 667 "chapel.ypp"
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[(3) - (8)].pexpr), (yyvsp[(5) - (8)].pexpr), (yyvsp[(7) - (8)].ponlylist), false, (yyvsp[(1) - (8)].b)); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 671 "chapel.ypp"
    { (yyval.pblockstmt) = buildRequireStmt((yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 676 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), (yyvsp[(2) - (4)].pch));   }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 678 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "<=>"); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 680 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), PRIM_REDUCE_ASSIGN); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 682 "chapel.ypp"
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr));    }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 684 "chapel.ypp"
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr));     }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 690 "chapel.ypp"
    { (yyval.pch) = NULL; }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 691 "chapel.ypp"
    { (yyval.pch) = (yyvsp[(1) - (1)].pch); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 695 "chapel.ypp"
    { (yyval.pch) = (yyvsp[(1) - (1)].pch); }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 696 "chapel.ypp"
    { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 697 "chapel.ypp"
    { (yyval.pch) = "this"; }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 698 "chapel.ypp"
    { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 699 "chapel.ypp"
    { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 700 "chapel.ypp"
    { (yyval.pch) = (yyvsp[(1) - (1)].pch); redefiningReservedTypeError((yyvsp[(1) - (1)].pch)); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 703 "chapel.ypp"
    { (yyval.pch) = (yyvsp[(1) - (1)].pch); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 704 "chapel.ypp"
    { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 705 "chapel.ypp"
    { (yyval.pch) = "this"; redefiningReservedWordError((yyval.pch)); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 706 "chapel.ypp"
    { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 707 "chapel.ypp"
    { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 708 "chapel.ypp"
    { (yyval.pch) = (yyvsp[(1) - (1)].pch); redefiningReservedTypeError((yyvsp[(1) - (1)].pch)); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 720 "chapel.ypp"
    { (yyval.pch) = (yyvsp[(1) - (1)].pch); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 721 "chapel.ypp"
    { (yyval.pch) = "this"; }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 732 "chapel.ypp"
    { (yyval.pch) = "bool"; }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 733 "chapel.ypp"
    { (yyval.pch) = "int"; }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 734 "chapel.ypp"
    { (yyval.pch) = "uint"; }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 735 "chapel.ypp"
    { (yyval.pch) = "real"; }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 736 "chapel.ypp"
    { (yyval.pch) = "imag"; }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 737 "chapel.ypp"
    { (yyval.pch) = "complex"; }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 738 "chapel.ypp"
    { (yyval.pch) = "bytes"; }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 739 "chapel.ypp"
    { (yyval.pch) = "string"; }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 740 "chapel.ypp"
    { (yyval.pch) = "sync"; }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 741 "chapel.ypp"
    { (yyval.pch) = "single"; }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 742 "chapel.ypp"
    { (yyval.pch) = "owned"; }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 743 "chapel.ypp"
    { (yyval.pch) = "shared"; }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 744 "chapel.ypp"
    { (yyval.pch) = "borrowed"; }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 745 "chapel.ypp"
    { (yyval.pch) = "unmanaged"; }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 746 "chapel.ypp"
    { (yyval.pch) = "domain"; }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 747 "chapel.ypp"
    { (yyval.pch) = "index"; }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 748 "chapel.ypp"
    { (yyval.pch) = "locale"; }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 749 "chapel.ypp"
    { (yyval.pch) = "nothing"; }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 750 "chapel.ypp"
    { (yyval.pch) = "void"; }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 754 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtBools[BOOL_SIZE_DEFAULT]->symbol); }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 755 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtInt[INT_SIZE_DEFAULT]->symbol); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 756 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtUInt[INT_SIZE_DEFAULT]->symbol); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 757 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtReal[FLOAT_SIZE_DEFAULT]->symbol); }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 758 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtImag[FLOAT_SIZE_DEFAULT]->symbol); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 759 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtComplex[COMPLEX_SIZE_DEFAULT]->symbol); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 760 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtBytes->symbol); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 761 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtString->symbol); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 762 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtLocale->symbol); }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 763 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtNothing->symbol); }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 764 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtVoid->symbol); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 771 "chapel.ypp"
    { (yyval.pch) = "_syncvar"; }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 772 "chapel.ypp"
    { (yyval.pch) = "_singlevar"; }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 773 "chapel.ypp"
    { (yyval.pch) = "_domain"; }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 774 "chapel.ypp"
    { (yyval.pch) = "_index"; }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 778 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (2)].pblockstmt); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 779 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(1) - (1)].pblockstmt); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 783 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 784 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 788 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 790 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (2)].pblockstmt); }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 800 "chapel.ypp"
    { (yyval.b) = parsingPrivate; parsingPrivate=true;}
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 801 "chapel.ypp"
    { parsingPrivate=(yyvsp[(2) - (3)].b); applyPrivateToBlock((yyvsp[(3) - (3)].pblockstmt)); (yyval.pblockstmt) = (yyvsp[(3) - (3)].pblockstmt); }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 815 "chapel.ypp"
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[(2) - (3)].pexpr)); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 816 "chapel.ypp"
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].ponlylist), true); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 817 "chapel.ypp"
    { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].ponlylist), false); }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 818 "chapel.ypp"
    { (yyval.pblockstmt) = buildForwardingDeclStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 823 "chapel.ypp"
    {
      (yylsp[(2) - (2)]).comment = context->latestComment;
      context->latestComment = NULL;
    }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 828 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[(4) - (8)].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[(5) - (8)].pcallexpr),
                                             (yyvsp[(7) - (8)].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[(2) - (8)]).comment));
    }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 838 "chapel.ypp"
    {
      (yylsp[(3) - (3)]).comment = context->latestComment;
      context->latestComment = NULL;
    }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 843 "chapel.ypp"
    {

      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[(5) - (9)].pch),
                                             (yyvsp[(2) - (9)].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[(6) - (9)].pcallexpr),
                                             (yyvsp[(8) - (9)].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[(3) - (9)]).comment));
    }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 854 "chapel.ypp"
    {
      (yylsp[(2) - (2)]).comment = context->latestComment;
      context->latestComment = NULL;
    }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 859 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[(4) - (8)].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[(5) - (8)].pcallexpr),
                                             (yyvsp[(7) - (8)].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[(2) - (8)]).comment));
    }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 869 "chapel.ypp"
    {
      (yylsp[(3) - (3)]).comment = context->latestComment;
      context->latestComment = NULL;
    }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 874 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[(5) - (9)].pch),
                                             (yyvsp[(2) - (9)].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[(6) - (9)].pcallexpr),
                                             (yyvsp[(8) - (9)].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[(3) - (9)]).comment));
    }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 885 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXTERN, (yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt));
    }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 889 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXPORT, (yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt));
    }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 894 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[(3) - (5)].pflagset)->insert(FLAG_EXTERN);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(4) - (5)].pblockstmt), comment, (yyvsp[(3) - (5)].pflagset), (yyvsp[(2) - (5)].pexpr));
    }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 902 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[(3) - (5)].pflagset)->insert(FLAG_EXPORT);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(4) - (5)].pblockstmt), comment, (yyvsp[(3) - (5)].pflagset), (yyvsp[(2) - (5)].pexpr));
    }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 913 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[(2) - (2)].pch)));
    }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 919 "chapel.ypp"
    { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[(4) - (5)].pexpr), (yyvsp[(2) - (5)].pblockstmt)); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 920 "chapel.ypp"
    { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 921 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(5) - (6)].pcallexpr), (yyvsp[(6) - (6)].pblockstmt));       }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 922 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pcallexpr), (yyvsp[(5) - (6)].pcallexpr), (yyvsp[(6) - (6)].pblockstmt), true); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 923 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr), (yyvsp[(4) - (4)].pblockstmt));     }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 924 "chapel.ypp"
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt), false, false); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 925 "chapel.ypp"
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pcallexpr), (yyvsp[(5) - (5)].pblockstmt), true, false); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 926 "chapel.ypp"
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt), false, false); }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 927 "chapel.ypp"
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[(2) - (3)].pcallexpr), (yyvsp[(3) - (3)].pblockstmt), true, false); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 928 "chapel.ypp"
    { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[(3) - (6)].pch), (yyvsp[(5) - (6)].pexpr), (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 929 "chapel.ypp"
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[(2) - (5)].pexpr),   (yyvsp[(4) - (5)].pexpr), NULL, (yyvsp[(5) - (5)].pblockstmt), false, false); }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 930 "chapel.ypp"
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[(2) - (6)].pexpr),   (yyvsp[(4) - (6)].pexpr), (yyvsp[(5) - (6)].pcallexpr),   (yyvsp[(6) - (6)].pblockstmt), false, false); }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 931 "chapel.ypp"
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[(2) - (5)].pexpr),   (yyvsp[(4) - (5)].pcallexpr), NULL, (yyvsp[(5) - (5)].pblockstmt), true,  false); }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 932 "chapel.ypp"
    { (yyval.pblockstmt) = ForallStmt::build((yyvsp[(2) - (6)].pexpr),   (yyvsp[(4) - (6)].pcallexpr), (yyvsp[(5) - (6)].pcallexpr),   (yyvsp[(6) - (6)].pblockstmt), true,  false); }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 933 "chapel.ypp"
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[(2) - (3)].pexpr), NULL, (yyvsp[(3) - (3)].pblockstmt), false, false); }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 934 "chapel.ypp"
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr),   (yyvsp[(4) - (4)].pblockstmt), false, false); }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 935 "chapel.ypp"
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[(2) - (3)].pcallexpr), NULL, (yyvsp[(3) - (3)].pblockstmt), true,  false); }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 936 "chapel.ypp"
    { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[(2) - (4)].pcallexpr), (yyvsp[(3) - (4)].pcallexpr),   (yyvsp[(4) - (4)].pblockstmt), true,  false); }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 938 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), NULL, new BlockStmt((yyvsp[(6) - (6)].pblockstmt)), false, true);
    }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 944 "chapel.ypp"
    {
      if ((yyvsp[(2) - (7)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (7)].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[(2) - (7)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (7)].pexpr), (yyvsp[(5) - (7)].pcallexpr),   new BlockStmt((yyvsp[(7) - (7)].pblockstmt)), false, true);
    }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 950 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pcallexpr), NULL, new BlockStmt((yyvsp[(6) - (6)].pblockstmt)), true,  true);
    }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 956 "chapel.ypp"
    {
      if ((yyvsp[(2) - (7)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (7)].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[(2) - (7)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (7)].pcallexpr), (yyvsp[(5) - (7)].pcallexpr),   new BlockStmt((yyvsp[(7) - (7)].pblockstmt)), true,  true);
    }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 962 "chapel.ypp"
    {
      if ((yyvsp[(2) - (4)].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), NULL, new BlockStmt((yyvsp[(4) - (4)].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[(2) - (4)].pcallexpr)->get(1)->remove(),                       NULL, new BlockStmt((yyvsp[(4) - (4)].pblockstmt)), false, true);
    }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 969 "chapel.ypp"
    {
      if ((yyvsp[(2) - (5)].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (5)].pcallexpr)), (yyvsp[(3) - (5)].pcallexpr), new BlockStmt((yyvsp[(5) - (5)].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[(2) - (5)].pcallexpr)->get(1)->remove(),                       (yyvsp[(3) - (5)].pcallexpr), new BlockStmt((yyvsp[(5) - (5)].pblockstmt)), false, true);
    }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 976 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[(2) - (4)].pcallexpr), NULL, new BlockStmt((yyvsp[(4) - (4)].pblockstmt)), true,  true);
    }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 980 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[(2) - (5)].pcallexpr), (yyvsp[(3) - (5)].pcallexpr),   new BlockStmt((yyvsp[(5) - (5)].pblockstmt)), true,  true);
    }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 986 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ZIP, (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 990 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pblockstmt)); }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 991 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 992 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pblockstmt), (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 993 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(3) - (5)].pblockstmt), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 994 "chapel.ypp"
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[(2) - (6)].pexpr),(yyvsp[(3) - (6)].pch),(yyvsp[(4) - (6)].pexpr)), (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 996 "chapel.ypp"
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[(2) - (5)].pexpr),(yyvsp[(3) - (5)].pch),(yyvsp[(4) - (5)].pexpr)), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 998 "chapel.ypp"
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[(2) - (8)].pexpr),(yyvsp[(3) - (8)].pch),(yyvsp[(4) - (8)].pexpr)), (yyvsp[(6) - (8)].pblockstmt), (yyvsp[(8) - (8)].pblockstmt)); }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 1000 "chapel.ypp"
    {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[(2) - (7)].pexpr),(yyvsp[(3) - (7)].pch),(yyvsp[(4) - (7)].pexpr)), (yyvsp[(5) - (7)].pblockstmt), (yyvsp[(7) - (7)].pblockstmt)); }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 1005 "chapel.ypp"
    { (yyval.pblockstmt) = DeferStmt::build((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 1008 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 1009 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 1010 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 1011 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 1012 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[(2) - (3)].pblockstmt), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 1013 "chapel.ypp"
    { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[(2) - (3)].pblockstmt), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 1017 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(); }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 1018 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pexpr)); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 1022 "chapel.ypp"
    { (yyval.pexpr) = CatchStmt::build((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 1023 "chapel.ypp"
    { (yyval.pexpr) = CatchStmt::build((yyvsp[(2) - (3)].pdefexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 1024 "chapel.ypp"
    { (yyval.pexpr) = CatchStmt::build((yyvsp[(3) - (5)].pdefexpr), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 1028 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[(1) - (1)].pch)), NULL, new UnresolvedSymExpr("Error")); }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 1029 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[(1) - (3)].pch)), NULL, (yyvsp[(3) - (3)].pexpr));   }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 1033 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_THROW, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 1037 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pblockstmt))); }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 1039 "chapel.ypp"
    { (yyval.pblockstmt) = buildErrorStandin(); }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 1043 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(); }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 1044 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pexpr)); }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 1049 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[(2) - (3)].pcallexpr)), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 1051 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 1053 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 1060 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[(2) - (6)].pch),
                                             NULL,
                                             (yyvsp[(1) - (6)].aggrTag),
                                             (yyvsp[(3) - (6)].pcallexpr),
                                             (yyvsp[(5) - (6)].pblockstmt),
                                             FLAG_UNKNOWN,
                                             (yylsp[(1) - (6)]).comment));
    }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 1070 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[(2) - (6)].pch),
                                             NULL,
                                             (yyvsp[(1) - (6)].aggrTag),
                                             (yyvsp[(3) - (6)].pcallexpr),
                                             new BlockStmt(),
                                             FLAG_UNKNOWN,
                                             (yylsp[(1) - (6)]).comment));
    }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 1083 "chapel.ypp"
    {
             (yyval.aggrTag)                     = AGGREGATE_CLASS;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 1088 "chapel.ypp"
    {
             (yyval.aggrTag)                     = AGGREGATE_RECORD;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 1093 "chapel.ypp"
    {
             (yyval.aggrTag)                     = AGGREGATE_UNION;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 1101 "chapel.ypp"
    { (yyval.pcallexpr) = NULL; }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 1102 "chapel.ypp"
    { (yyval.pcallexpr) = (yyvsp[(2) - (2)].pcallexpr); }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 1107 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 1109 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 1111 "chapel.ypp"
    { (yyvsp[(1) - (3)].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[(2) - (3)].vpch), (yyvsp[(3) - (3)].pblockstmt))); }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 1116 "chapel.ypp"
    {
      EnumType* pdt = (yyvsp[(1) - (5)].penumtype);
      for_vector(DefExpr, ec, *(yyvsp[(4) - (5)].pvecOfDefs)) {
        ec->sym->type = pdt;
        pdt->constants.insertAtTail(ec);
        if (pdt->defaultValue == NULL) {
          pdt->defaultValue = ec->sym;
        }
      }
      delete (yyvsp[(4) - (5)].pvecOfDefs);
      pdt->doc = (yylsp[(1) - (5)]).comment;
      TypeSymbol* pst = new TypeSymbol((yyvsp[(2) - (5)].pch), pdt);
      (yyvsp[(1) - (5)].penumtype)->symbol = pst;
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(pst));
    }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 1132 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildErrorStandin();
    }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 1139 "chapel.ypp"
    {
      (yyval.penumtype) = new EnumType();
      (yyloc).comment = context->latestComment;
      context->latestComment = NULL;
    }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 1148 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = new std::vector<DefExpr*>();
      (yyval.pvecOfDefs)->push_back((yyvsp[(1) - (1)].pdefexpr));
      //$$->doc = context->latestComment;
      // start here for enabling documentation of enum constants
      //context->latestComment = NULL;
    }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 1156 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = (yyvsp[(1) - (2)].pvecOfDefs);
    }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 1160 "chapel.ypp"
    {
      (yyvsp[(1) - (3)].pvecOfDefs)->push_back((yyvsp[(3) - (3)].pdefexpr));
    }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 1166 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[(1) - (1)].pch))); }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 1167 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[(1) - (3)].pch)), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 1172 "chapel.ypp"
    {
      captureTokens = 1;
      captureString.clear();
    }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 1177 "chapel.ypp"
    {
      captureTokens = 0;
      (yyvsp[(3) - (3)].pfnsymbol)->userString = astr(captureString);
    }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 1182 "chapel.ypp"
    {
      (yyvsp[(3) - (8)].pfnsymbol)->retTag = (yyvsp[(5) - (8)].retTag);
      if ((yyvsp[(5) - (8)].retTag) == RET_REF || (yyvsp[(5) - (8)].retTag) == RET_CONST_REF)
        USR_FATAL("'ref' return types are not allowed in lambdas");
      if ((yyvsp[(5) - (8)].retTag) == RET_PARAM)
        USR_FATAL("'param' return types are not allowed in lambdas");
      if ((yyvsp[(5) - (8)].retTag) == RET_TYPE)
        USR_FATAL("'type' return types are not allowed in lambdas");
      if ((yyvsp[(6) - (8)].pexpr))
        (yyvsp[(3) - (8)].pfnsymbol)->retExprType = new BlockStmt((yyvsp[(6) - (8)].pexpr), BLOCK_SCOPELESS);
      if ((yyvsp[(7) - (8)].lifetimeAndWhere).where)
        (yyvsp[(3) - (8)].pfnsymbol)->where = new BlockStmt((yyvsp[(7) - (8)].lifetimeAndWhere).where);
      if ((yyvsp[(7) - (8)].lifetimeAndWhere).lifetime)
        (yyvsp[(3) - (8)].pfnsymbol)->lifetimeConstraints = new BlockStmt((yyvsp[(7) - (8)].lifetimeAndWhere).lifetime);
      (yyvsp[(3) - (8)].pfnsymbol)->insertAtTail((yyvsp[(8) - (8)].pblockstmt));
      (yyval.pexpr) = new DefExpr(buildLambda((yyvsp[(3) - (8)].pfnsymbol)));
    }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 1204 "chapel.ypp"
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 1207 "chapel.ypp"
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);
                }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 1211 "chapel.ypp"
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_OVERRIDE);
                }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 1219 "chapel.ypp"
    {
      // Capture the latest comment
      (yylsp[(2) - (2)]).comment = context->latestComment;
      context->latestComment = NULL;

      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString.clear();
    }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 1229 "chapel.ypp"
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[(4) - (4)].pfnsymbol)->userString = astr(captureString);
    }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 1236 "chapel.ypp"
    {
      FnSymbol* fn = (yyvsp[(4) - (10)].pfnsymbol);
      FnSymbol* linkageFn = (yyvsp[(1) - (10)].pfnsymbol);

      fn->copyFlags((yyvsp[(1) - (10)].pfnsymbol));
      if (*linkageFn->name)
        // The user explicitly named this function (controls mangling).
        fn->cname = linkageFn->name;
      else if (linkageFn->numFormals() == 1)
        // cname should be set based upon param
        fn->insertFormalAtTail(linkageFn->getFormal(1));

      if ((yyvsp[(2) - (10)].procIter) == ProcIter_ITER)
      {
        if (fn->hasFlag(FLAG_EXTERN))
          USR_FATAL_CONT(fn, "'iter' is not legal with 'extern'");
        fn->addFlag(FLAG_ITERATOR_FN);
      }

      (yyval.pblockstmt) = buildFunctionDecl((yyvsp[(4) - (10)].pfnsymbol), (yyvsp[(6) - (10)].retTag), (yyvsp[(7) - (10)].pexpr), (yyvsp[(8) - (10)].b), (yyvsp[(9) - (10)].lifetimeAndWhere).where, (yyvsp[(9) - (10)].lifetimeAndWhere).lifetime, (yyvsp[(10) - (10)].pblockstmt), (yylsp[(2) - (10)]).comment);
      context->latestComment = NULL;
    }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 1262 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(3) - (3)].pfnsymbol), (yyvsp[(2) - (3)].pch), (yyvsp[(1) - (3)].pt), NULL);
    }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 1266 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(3) - (3)].pfnsymbol), (yyvsp[(2) - (3)].pch), (yyvsp[(1) - (3)].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 1271 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(5) - (5)].pfnsymbol), (yyvsp[(4) - (5)].pch), (yyvsp[(1) - (5)].pt), (yyvsp[(2) - (5)].pexpr));
    }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 1275 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(5) - (5)].pfnsymbol), (yyvsp[(4) - (5)].pch), (yyvsp[(1) - (5)].pt), (yyvsp[(2) - (5)].pexpr));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 1280 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(3) - (3)].pfnsymbol), "dummy", INTENT_BLANK, NULL);
    }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 1287 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (3)].pexpr); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 1291 "chapel.ypp"
    { (yyval.pch) = (yyvsp[(1) - (1)].pch); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 1292 "chapel.ypp"
    { (yyval.pch) = astr("~", (yyvsp[(2) - (2)].pch)); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 1293 "chapel.ypp"
    { (yyval.pch) = "&"; }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 1294 "chapel.ypp"
    { (yyval.pch) = "|"; }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 1295 "chapel.ypp"
    { (yyval.pch) = "^"; }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 1296 "chapel.ypp"
    { (yyval.pch) = "~"; }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 1297 "chapel.ypp"
    { (yyval.pch) = "=="; }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 1298 "chapel.ypp"
    { (yyval.pch) = "!="; }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 1299 "chapel.ypp"
    { (yyval.pch) = "<="; }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 1300 "chapel.ypp"
    { (yyval.pch) = ">="; }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 1301 "chapel.ypp"
    { (yyval.pch) = "<"; }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 1302 "chapel.ypp"
    { (yyval.pch) = ">"; }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 1303 "chapel.ypp"
    { (yyval.pch) = "+"; }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 1304 "chapel.ypp"
    { (yyval.pch) = "-"; }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 1305 "chapel.ypp"
    { (yyval.pch) = "*"; }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 1306 "chapel.ypp"
    { (yyval.pch) = "/"; }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 1307 "chapel.ypp"
    { (yyval.pch) = "<<"; }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 1308 "chapel.ypp"
    { (yyval.pch) = ">>"; }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 1309 "chapel.ypp"
    { (yyval.pch) = "%"; }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 1310 "chapel.ypp"
    { (yyval.pch) = "**"; }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 1311 "chapel.ypp"
    { (yyval.pch) = "!"; }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 1312 "chapel.ypp"
    { (yyval.pch) = "chpl_by"; }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 1313 "chapel.ypp"
    { (yyval.pch) = "#"; }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 1314 "chapel.ypp"
    { (yyval.pch) = "chpl_align"; }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 1315 "chapel.ypp"
    { (yyval.pch) = "<=>"; }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 1316 "chapel.ypp"
    { (yyval.pch) = "<~>"; }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 1317 "chapel.ypp"
    { (yyval.pch) = "init="; }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 1318 "chapel.ypp"
    { (yyval.pch) = astr((yyvsp[(1) - (2)].pch), "!"); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 1322 "chapel.ypp"
    { (yyval.pch) = "="; }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 1323 "chapel.ypp"
    { (yyval.pch) = "+="; }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 1324 "chapel.ypp"
    { (yyval.pch) = "-="; }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 1325 "chapel.ypp"
    { (yyval.pch) = "*="; }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 1326 "chapel.ypp"
    { (yyval.pch) = "/="; }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 1327 "chapel.ypp"
    { (yyval.pch) = "%="; }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 1328 "chapel.ypp"
    { (yyval.pch) = "**="; }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 1329 "chapel.ypp"
    { (yyval.pch) = "&="; }
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 1330 "chapel.ypp"
    { (yyval.pch) = "|="; }
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 1331 "chapel.ypp"
    { (yyval.pch) = "^="; }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 1332 "chapel.ypp"
    { (yyval.pch) = ">>="; }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 1333 "chapel.ypp"
    { (yyval.pch) = "<<="; }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 1337 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 1338 "chapel.ypp"
    { (yyval.pfnsymbol) = (yyvsp[(2) - (3)].pfnsymbol); }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 1342 "chapel.ypp"
    { (yyval.pfnsymbol) = (yyvsp[(2) - (3)].pfnsymbol); }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 1346 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 1347 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[(1) - (1)].pdefexpr)); }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 1348 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[(1) - (3)].pfnsymbol), (yyvsp[(3) - (3)].pdefexpr)); }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 1353 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[(1) - (4)].pt), (yyvsp[(2) - (4)].pch), (yyvsp[(3) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr), NULL); }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 1355 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[(1) - (5)].vpch), buildArgDefExpr((yyvsp[(2) - (5)].pt), (yyvsp[(3) - (5)].pch), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pexpr), NULL)); }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 1357 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[(1) - (4)].pt), (yyvsp[(2) - (4)].pch), (yyvsp[(3) - (4)].pexpr), NULL, (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 1359 "chapel.ypp"
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[(1) - (6)].pt), (yyvsp[(3) - (6)].pblockstmt), (yyvsp[(5) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 1361 "chapel.ypp"
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 1365 "chapel.ypp"
    { (yyval.pt) = INTENT_BLANK; }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 1366 "chapel.ypp"
    { (yyval.pt) = (yyvsp[(1) - (1)].pt); }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 1370 "chapel.ypp"
    { (yyval.pt) = INTENT_IN; }
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 1371 "chapel.ypp"
    { (yyval.pt) = INTENT_INOUT; }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 1372 "chapel.ypp"
    { (yyval.pt) = INTENT_OUT; }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 1373 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST; }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 1374 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST_IN; }
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 1375 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST_REF; }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 1376 "chapel.ypp"
    { (yyval.pt) = INTENT_PARAM; }
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 1377 "chapel.ypp"
    { (yyval.pt) = INTENT_REF; }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 1378 "chapel.ypp"
    { (yyval.pt) = INTENT_TYPE; }
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 1382 "chapel.ypp"
    { (yyval.pt) = INTENT_BLANK; }
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 1383 "chapel.ypp"
    { (yyval.pt) = INTENT_PARAM; }
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 1384 "chapel.ypp"
    { (yyval.pt) = INTENT_REF;   }
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 1385 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST_REF;   }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 1386 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST;   }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 1387 "chapel.ypp"
    { (yyval.pt) = INTENT_TYPE;  }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 1391 "chapel.ypp"
    { (yyval.procIter) = ProcIter_PROC; }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 1392 "chapel.ypp"
    { (yyval.procIter) = ProcIter_ITER; }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 1396 "chapel.ypp"
    { (yyval.retTag) = RET_VALUE; }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 1397 "chapel.ypp"
    { (yyval.retTag) = RET_VALUE; }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 1398 "chapel.ypp"
    { (yyval.retTag) = RET_CONST_REF; }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 1399 "chapel.ypp"
    { (yyval.retTag) = RET_REF; }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 1400 "chapel.ypp"
    { (yyval.retTag) = RET_PARAM; }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 1401 "chapel.ypp"
    { (yyval.retTag) = RET_TYPE; }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 1405 "chapel.ypp"
    { (yyval.b) = false; }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 1406 "chapel.ypp"
    { (yyval.b) = true;  }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 1409 "chapel.ypp"
    { (yyval.pblockstmt) = NULL; }
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 1415 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt((yyvsp[(1) - (1)].pblockstmt)); }
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 1419 "chapel.ypp"
    { 
      DefExpr * de = new DefExpr(new VarSymbol((yyvsp[(2) - (2)].pch)));
      USR_WARN(de, "support for space in query expressions is deprecated");
      (yyval.pexpr) = de;
  }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 1424 "chapel.ypp"
    { (yyval.pexpr) = buildQueriedExpr((yyvsp[(1) - (1)].pch)); }
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 1428 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 1429 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 1430 "chapel.ypp"
    { if (DefExpr* def = toDefExpr((yyvsp[(2) - (2)].pexpr))) {
                             def->sym->addFlag(FLAG_PARAM);
                           }
                           (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr);
                         }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 1438 "chapel.ypp"
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, NULL); }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 1440 "chapel.ypp"
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[(2) - (2)].pexpr), NULL); }
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 1442 "chapel.ypp"
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 1444 "chapel.ypp"
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 1446 "chapel.ypp"
    { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[(4) - (4)].pexpr), (yyvsp[(2) - (4)].pexpr)); }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 1451 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 1453 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(",", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 1457 "chapel.ypp"
    {(yyval.pexpr) = new CallExpr("=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));}
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 1458 "chapel.ypp"
    {(yyval.pexpr) = new CallExpr("<", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));}
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 1459 "chapel.ypp"
    {(yyval.pexpr) = new CallExpr("<=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));}
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 1460 "chapel.ypp"
    {(yyval.pexpr) = new CallExpr("==", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));}
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 1461 "chapel.ypp"
    {(yyval.pexpr) = new CallExpr(">", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));}
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 1462 "chapel.ypp"
    {(yyval.pexpr) = new CallExpr(">=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));}
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 1463 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_RETURN, (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 1468 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr((yyvsp[(1) - (1)].pch))); }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 1470 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr("this")); }
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 1475 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (3)].pblockstmt); }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 1477 "chapel.ypp"
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[(3) - (4)].pblockstmt)); }
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 1479 "chapel.ypp"
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[(3) - (4)].pblockstmt)); }
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 1484 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[(1) - (2)].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[(2) - (2)].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 1497 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[(1) - (4)].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[(2) - (4)].pexpr));

      (yyvsp[(4) - (4)].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[(4) - (4)].pblockstmt));
    }
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 1513 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 1515 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 359:
/* Line 1792 of yacc.c  */
#line 1517 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[(2) - (2)].pcallexpr)); }
    break;

  case 360:
/* Line 1792 of yacc.c  */
#line 1521 "chapel.ypp"
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_PARAM); }
    break;

  case 361:
/* Line 1792 of yacc.c  */
#line 1522 "chapel.ypp"
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST); }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 1523 "chapel.ypp"
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_REF_VAR); }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 1524 "chapel.ypp"
    { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST, FLAG_REF_VAR); }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 1525 "chapel.ypp"
    { (yyval.pflagset) = buildVarDeclFlags(); }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 1530 "chapel.ypp"
    {
      (yyvsp[(2) - (4)].pflagset)->insert(FLAG_CONFIG);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(3) - (4)].pblockstmt), context->latestComment, (yyvsp[(2) - (4)].pflagset));
      context->latestComment = NULL;
    }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 1536 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(2) - (3)].pblockstmt), context->latestComment, (yyvsp[(1) - (3)].pflagset));
      context->latestComment = NULL;
    }
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 1545 "chapel.ypp"
    {
      for_alist(expr, (yyvsp[(3) - (3)].pblockstmt)->body)
        (yyvsp[(1) - (3)].pblockstmt)->insertAtTail(expr->remove());
    }
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 1553 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[(1) - (3)].pch)), (yyvsp[(3) - (3)].pexpr), (yyvsp[(2) - (3)].pexpr))); }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 1555 "chapel.ypp"
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[(2) - (5)].pblockstmt), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pexpr)); }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 1560 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 1562 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[(1) - (1)].pch))); }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 1564 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (3)].pblockstmt); }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 1569 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (1)].pexpr)); }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 1571 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (2)].pexpr)); }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 1573 "chapel.ypp"
    { (yyval.pblockstmt) = ((yyvsp[(3) - (3)].pblockstmt)->insertAtHead((yyvsp[(1) - (3)].pexpr)), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 1579 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 1580 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gNoInit); }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 1581 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 1587 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 1589 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, NULL); }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 1591 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pexpr));
    }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 1595 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (3)].pcallexpr)), NULL);
    }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 1599 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 1601 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pexpr));
    }
    break;

  case 386:
/* Line 1792 of yacc.c  */
#line 1605 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr(PRIM_ERROR);
    }
    break;

  case 387:
/* Line 1792 of yacc.c  */
#line 1612 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 388:
/* Line 1792 of yacc.c  */
#line 1613 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 1614 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 390:
/* Line 1792 of yacc.c  */
#line 1615 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[(2) - (2)].pch)); }
    break;

  case 391:
/* Line 1792 of yacc.c  */
#line 1616 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 392:
/* Line 1792 of yacc.c  */
#line 1621 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 393:
/* Line 1792 of yacc.c  */
#line 1622 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 1623 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pcallexpr); }
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 1624 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[(2) - (2)].pch)); }
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 1625 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 1646 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pexpr));
    }
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 1650 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pcallexpr));
    }
    break;

  case 399:
/* Line 1792 of yacc.c  */
#line 1654 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(4) - (6)].pexpr)), (yyvsp[(6) - (6)].pexpr), (yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(4) - (6)].pexpr)->copy()));
    }
    break;

  case 400:
/* Line 1792 of yacc.c  */
#line 1662 "chapel.ypp"
    {
      (yyval.pcallexpr) = new CallExpr(PRIM_ERROR);
    }
    break;

  case 401:
/* Line 1792 of yacc.c  */
#line 1668 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 402:
/* Line 1792 of yacc.c  */
#line 1669 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 403:
/* Line 1792 of yacc.c  */
#line 1670 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 404:
/* Line 1792 of yacc.c  */
#line 1675 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 405:
/* Line 1792 of yacc.c  */
#line 1677 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(2) - (4)].pcallexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 406:
/* Line 1792 of yacc.c  */
#line 1683 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 407:
/* Line 1792 of yacc.c  */
#line 1685 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(2) - (4)].pcallexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 408:
/* Line 1792 of yacc.c  */
#line 1687 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), (yyvsp[(2) - (6)].pcallexpr)); }
    break;

  case 409:
/* Line 1792 of yacc.c  */
#line 1691 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 410:
/* Line 1792 of yacc.c  */
#line 1692 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 411:
/* Line 1792 of yacc.c  */
#line 1693 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 412:
/* Line 1792 of yacc.c  */
#line 1694 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[(2) - (2)].pch)); }
    break;

  case 413:
/* Line 1792 of yacc.c  */
#line 1695 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 414:
/* Line 1792 of yacc.c  */
#line 1701 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 415:
/* Line 1792 of yacc.c  */
#line 1702 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 1703 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 1704 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 1708 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr));}
    break;

  case 419:
/* Line 1792 of yacc.c  */
#line 1709 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 420:
/* Line 1792 of yacc.c  */
#line 1713 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 1714 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 1715 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 1719 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 1720 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 1724 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 1729 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 1730 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 1734 "chapel.ypp"
    { (yyval.pexpr) = buildNamedActual((yyvsp[(1) - (3)].pch), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 1735 "chapel.ypp"
    { (yyval.pexpr) = buildNamedActual((yyvsp[(1) - (3)].pch), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 1736 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 1737 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 1741 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[(1) - (1)].pch)); }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 1742 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 1754 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 1756 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[(1) - (2)].pexpr)); }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 1758 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 1769 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 1771 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 1773 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 1775 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 1777 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", buildDotExpr((yyvsp[(4) - (5)].pcallexpr)->copy(), "defaultSparseDist"), (yyvsp[(4) - (5)].pcallexpr)); }
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 1779 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 1781 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 1784 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_owned"); }
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 1786 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_owned", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 1788 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtUnmanaged->symbol); }
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 1790 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_UNMANAGED_CLASS_CHECKED, (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 1792 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_shared"); }
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 1794 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_shared", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 1796 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtBorrowed->symbol); }
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 1798 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_BORROWED_CLASS_CHECKED, (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 458:
/* Line 1792 of yacc.c  */
#line 1801 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyManagementNonNilable->symbol); }
    break;

  case 459:
/* Line 1792 of yacc.c  */
#line 1803 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyRecord->symbol); }
    break;

  case 460:
/* Line 1792 of yacc.c  */
#line 1805 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyEnumerated->symbol); }
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 1810 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 1812 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pcallexpr), (yyvsp[(6) - (6)].pexpr), NULL, false, true); }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 1814 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 1816 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr)); }
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 1818 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pcallexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true); }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 1820 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[(2) - (7)].pexpr), (yyvsp[(7) - (7)].pexpr), (yyvsp[(5) - (7)].pexpr)); }
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 1822 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 1824 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pcallexpr), (yyvsp[(6) - (6)].pexpr), NULL, false, true); }
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 1826 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 1828 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr)); }
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 1830 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pcallexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true); }
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 1832 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (7)].pexpr), (yyvsp[(7) - (7)].pexpr), (yyvsp[(5) - (7)].pexpr)); }
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 1834 "chapel.ypp"
    {
      if ((yyvsp[(2) - (4)].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (4)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (4)].pexpr), NULL, true);
    }
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 1841 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), NULL, true);
    }
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 1847 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pcallexpr), (yyvsp[(6) - (6)].pexpr), NULL, false, true);
    }
    break;

  case 476:
/* Line 1792 of yacc.c  */
#line 1853 "chapel.ypp"
    {
      if ((yyvsp[(2) - (9)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (9)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr));
    }
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 1859 "chapel.ypp"
    {
      if ((yyvsp[(2) - (9)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (9)].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (9)].pcallexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true);
    }
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 1868 "chapel.ypp"
    { (yyval.pexpr) = new IfExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 1877 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gNil); }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 1893 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 1897 "chapel.ypp"
    { (yyval.pcallexpr) = NULL; }
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 1902 "chapel.ypp"
    { (yyval.pcallexpr) = (yyvsp[(3) - (4)].pcallexpr); }
    break;

  case 491:
/* Line 1792 of yacc.c  */
#line 1906 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addTaskIntent((yyval.pcallexpr), (yyvsp[(1) - (1)].pShadowVar)); }
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 1907 "chapel.ypp"
    { addTaskIntent((yyvsp[(1) - (3)].pcallexpr), (yyvsp[(3) - (3)].pShadowVar)); }
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 1911 "chapel.ypp"
    { (yyval.pcallexpr) = (yyvsp[(3) - (4)].pcallexpr); }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 1915 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addForallIntent((yyval.pcallexpr), (yyvsp[(1) - (1)].pShadowVar)); }
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 1916 "chapel.ypp"
    { addForallIntent((yyvsp[(1) - (3)].pcallexpr), (yyvsp[(3) - (3)].pShadowVar)); }
    break;

  case 496:
/* Line 1792 of yacc.c  */
#line 1921 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildForPrefix((yyvsp[(1) - (4)].pShadowVarPref), (yyvsp[(2) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr));
    }
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 1925 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[(3) - (3)].pexpr), (yyvsp[(1) - (3)].pexpr));
    }
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 1929 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[(3) - (3)].pexpr), (yyvsp[(1) - (3)].pexpr));
    }
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 1935 "chapel.ypp"
    { (yyval.pShadowVarPref) = SVP_CONST;     }
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 1936 "chapel.ypp"
    { (yyval.pShadowVarPref) = SVP_IN;        }
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 1937 "chapel.ypp"
    { (yyval.pShadowVarPref) = SVP_CONST_IN;  }
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 1938 "chapel.ypp"
    { (yyval.pShadowVarPref) = SVP_REF;       }
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 1939 "chapel.ypp"
    { (yyval.pShadowVarPref) = SVP_CONST_REF; }
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 1940 "chapel.ypp"
    { (yyval.pShadowVarPref) = SVP_VAR;       }
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 1946 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 507:
/* Line 1792 of yacc.c  */
#line 1951 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW); }
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 1953 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol))); }
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 1957 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol))); }
    break;

  case 510:
/* Line 1792 of yacc.c  */
#line 1961 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtUnmanaged->symbol))); }
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 1965 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtBorrowed->symbol))); }
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 1973 "chapel.ypp"
    { (yyvsp[(1) - (2)].pcallexpr)->insertAtTail((yyvsp[(2) - (2)].pexpr));
      (yyval.pexpr) = (yyvsp[(1) - (2)].pcallexpr); }
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 1978 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr((yyvsp[(4) - (8)].pexpr), (yyvsp[(7) - (8)].pcallexpr)));
    }
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 1984 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr((yyvsp[(4) - (8)].pexpr), (yyvsp[(7) - (8)].pcallexpr)));
    }
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 1990 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[(4) - (9)].pexpr), (yyvsp[(7) - (9)].pcallexpr))));
    }
    break;

  case 516:
/* Line 1792 of yacc.c  */
#line 1997 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[(4) - (9)].pexpr), (yyvsp[(7) - (9)].pcallexpr))));
    }
    break;

  case 517:
/* Line 1792 of yacc.c  */
#line 2006 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW, new CallExpr(dtOwned->symbol, (yyvsp[(4) - (5)].pexpr))); }
    break;

  case 518:
/* Line 1792 of yacc.c  */
#line 2008 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW, new CallExpr(dtShared->symbol, (yyvsp[(4) - (5)].pexpr))); }
    break;

  case 519:
/* Line 1792 of yacc.c  */
#line 2013 "chapel.ypp"
    { (yyval.pexpr) = buildLetExpr((yyvsp[(2) - (4)].pblockstmt), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 2029 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[(3) - (4)].pexpr)); }
    break;

  case 529:
/* Line 1792 of yacc.c  */
#line 2031 "chapel.ypp"
    { (yyval.pexpr) = createCast((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 530:
/* Line 1792 of yacc.c  */
#line 2033 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_build_bounded_range", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 2035 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_build_low_bounded_range", (yyvsp[(1) - (2)].pexpr)); }
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 2037 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_build_high_bounded_range", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 533:
/* Line 1792 of yacc.c  */
#line 2039 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_build_unbounded_range"); }
    break;

  case 534:
/* Line 1792 of yacc.c  */
#line 2043 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 2044 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 536:
/* Line 1792 of yacc.c  */
#line 2048 "chapel.ypp"
    { (yyval.pexpr) = tryExpr((yyvsp[(2) - (2)].pexpr)); }
    break;

  case 537:
/* Line 1792 of yacc.c  */
#line 2049 "chapel.ypp"
    { (yyval.pexpr) = tryBangExpr((yyvsp[(2) - (2)].pexpr)); }
    break;

  case 538:
/* Line 1792 of yacc.c  */
#line 2050 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 2068 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 544:
/* Line 1792 of yacc.c  */
#line 2069 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[(1) - (2)].pexpr)); }
    break;

  case 545:
/* Line 1792 of yacc.c  */
#line 2070 "chapel.ypp"
    {(yyval.pexpr) = new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[(1) - (2)].pexpr));}
    break;

  case 546:
/* Line 1792 of yacc.c  */
#line 2071 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 547:
/* Line 1792 of yacc.c  */
#line 2075 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 548:
/* Line 1792 of yacc.c  */
#line 2076 "chapel.ypp"
    { (yyval.pexpr) = buildSquareCallExpr((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 2077 "chapel.ypp"
    { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 2081 "chapel.ypp"
    { (yyval.pexpr) = buildDotExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pch)); }
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 2082 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[(1) - (3)].pexpr)); }
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 2083 "chapel.ypp"
    { (yyval.pexpr) = buildDotExpr((yyvsp[(1) - (3)].pexpr), "_dom"); }
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 2084 "chapel.ypp"
    { (yyval.pexpr) = buildDotExpr((yyvsp[(1) - (3)].pexpr), "locale"); }
    break;

  case 554:
/* Line 1792 of yacc.c  */
#line 2085 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(buildDotExpr((yyvsp[(1) - (5)].pexpr), "chpl_bytes")); }
    break;

  case 555:
/* Line 1792 of yacc.c  */
#line 2093 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (3)].pexpr); }
    break;

  case 556:
/* Line 1792 of yacc.c  */
#line 2094 "chapel.ypp"
    { (yyval.pexpr) = buildOneTuple((yyvsp[(2) - (4)].pexpr)); }
    break;

  case 557:
/* Line 1792 of yacc.c  */
#line 2095 "chapel.ypp"
    { (yyval.pexpr) = buildTuple((yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 558:
/* Line 1792 of yacc.c  */
#line 2096 "chapel.ypp"
    { (yyval.pexpr) = buildTuple((yyvsp[(2) - (4)].pcallexpr)); }
    break;

  case 559:
/* Line 1792 of yacc.c  */
#line 2100 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gFalse); }
    break;

  case 560:
/* Line 1792 of yacc.c  */
#line 2101 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gTrue); }
    break;

  case 562:
/* Line 1792 of yacc.c  */
#line 2106 "chapel.ypp"
    { (yyval.pexpr) = buildIntLiteral((yyvsp[(1) - (1)].pch), yyfilename, chplLineno);    }
    break;

  case 563:
/* Line 1792 of yacc.c  */
#line 2107 "chapel.ypp"
    { (yyval.pexpr) = buildRealLiteral((yyvsp[(1) - (1)].pch));   }
    break;

  case 564:
/* Line 1792 of yacc.c  */
#line 2108 "chapel.ypp"
    { (yyval.pexpr) = buildImagLiteral((yyvsp[(1) - (1)].pch));   }
    break;

  case 565:
/* Line 1792 of yacc.c  */
#line 2109 "chapel.ypp"
    { (yyval.pexpr) = buildStringLiteral((yyvsp[(1) - (1)].pch)); }
    break;

  case 566:
/* Line 1792 of yacc.c  */
#line 2110 "chapel.ypp"
    { (yyval.pexpr) = buildBytesLiteral((yyvsp[(1) - (1)].pch)); }
    break;

  case 567:
/* Line 1792 of yacc.c  */
#line 2111 "chapel.ypp"
    { (yyval.pexpr) = buildCStringLiteral((yyvsp[(1) - (1)].pch)); }
    break;

  case 568:
/* Line 1792 of yacc.c  */
#line 2112 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gNone); }
    break;

  case 569:
/* Line 1792 of yacc.c  */
#line 2113 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 570:
/* Line 1792 of yacc.c  */
#line 2114 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[(2) - (4)].pcallexpr)); }
    break;

  case 571:
/* Line 1792 of yacc.c  */
#line 2115 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 572:
/* Line 1792 of yacc.c  */
#line 2116 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[(2) - (4)].pcallexpr)); }
    break;

  case 573:
/* Line 1792 of yacc.c  */
#line 2118 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[(2) - (3)].pcallexpr));
    }
    break;

  case 574:
/* Line 1792 of yacc.c  */
#line 2122 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[(2) - (4)].pcallexpr));
    }
    break;

  case 575:
/* Line 1792 of yacc.c  */
#line 2129 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 576:
/* Line 1792 of yacc.c  */
#line 2130 "chapel.ypp"
    { (yyvsp[(1) - (5)].pcallexpr)->insertAtTail((yyvsp[(3) - (5)].pexpr)); (yyvsp[(1) - (5)].pcallexpr)->insertAtTail((yyvsp[(5) - (5)].pexpr)); }
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 2134 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 2135 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 2136 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("*", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 580:
/* Line 1792 of yacc.c  */
#line 2137 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("/", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 2138 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<<", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 2139 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 2140 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("%", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 2141 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("==", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 2142 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("!=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 2143 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 2144 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 2145 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 2146 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 2147 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("&", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 2148 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("|", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 2149 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("^", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 2150 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("&&", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 2151 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("||", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 595:
/* Line 1792 of yacc.c  */
#line 2152 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("**", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 596:
/* Line 1792 of yacc.c  */
#line 2153 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 597:
/* Line 1792 of yacc.c  */
#line 2154 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl_align", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 598:
/* Line 1792 of yacc.c  */
#line 2155 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("#", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 599:
/* Line 1792 of yacc.c  */
#line 2156 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[(3) - (3)].pexpr), (yyvsp[(1) - (3)].pexpr)); }
    break;

  case 600:
/* Line 1792 of yacc.c  */
#line 2160 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 2161 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 2162 "chapel.ypp"
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[(2) - (2)].pexpr), '-'); }
    break;

  case 603:
/* Line 1792 of yacc.c  */
#line 2163 "chapel.ypp"
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[(2) - (2)].pexpr), '+'); }
    break;

  case 604:
/* Line 1792 of yacc.c  */
#line 2164 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("!", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 605:
/* Line 1792 of yacc.c  */
#line 2165 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[(1) - (2)].pexpr)); }
    break;

  case 606:
/* Line 1792 of yacc.c  */
#line 2166 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("~", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 607:
/* Line 1792 of yacc.c  */
#line 2170 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 608:
/* Line 1792 of yacc.c  */
#line 2171 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pcallexpr), true); }
    break;

  case 609:
/* Line 1792 of yacc.c  */
#line 2172 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 610:
/* Line 1792 of yacc.c  */
#line 2173 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pcallexpr), true); }
    break;

  case 611:
/* Line 1792 of yacc.c  */
#line 2177 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 612:
/* Line 1792 of yacc.c  */
#line 2178 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pcallexpr), true); }
    break;

  case 613:
/* Line 1792 of yacc.c  */
#line 2179 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 614:
/* Line 1792 of yacc.c  */
#line 2180 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pcallexpr), true); }
    break;

  case 615:
/* Line 1792 of yacc.c  */
#line 2185 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
    break;

  case 616:
/* Line 1792 of yacc.c  */
#line 2186 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
    break;

  case 617:
/* Line 1792 of yacc.c  */
#line 2187 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
    break;

  case 618:
/* Line 1792 of yacc.c  */
#line 2188 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
    break;

  case 619:
/* Line 1792 of yacc.c  */
#line 2189 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
    break;

  case 620:
/* Line 1792 of yacc.c  */
#line 2190 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
    break;

  case 621:
/* Line 1792 of yacc.c  */
#line 2191 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
    break;


/* Line 1792 of yacc.c  */
#line 10229 "bison-chapel.cpp"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, context, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, context, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
		      yytoken, &yylval, &yylloc, context);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  yyps->yynew = 1;

yypushreturn:
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


