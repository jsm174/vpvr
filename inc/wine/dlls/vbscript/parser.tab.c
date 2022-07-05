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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         PARSER_STYPE
#define YYLTYPE         PARSER_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         parser_parse
#define yylex           parser_lex
#define yyerror         parser_error
#define yydebug         parser_debug
#define yynerrs         parser_nerrs

/* First part of user prologue.  */
#line 19 "dlls/vbscript/parser.y"


#include "vbscript.h"
#include "parse.h"

#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(vbscript);

static int parser_error(unsigned*,parser_ctx_t*,const char*);

static void handle_isexpression_script(parser_ctx_t *ctx, expression_t *expr);

static void source_add_statement(parser_ctx_t*,statement_t*);
static void source_add_class(parser_ctx_t*,class_decl_t*);

static void *new_expression(parser_ctx_t*,expression_type_t,size_t);
static expression_t *new_bool_expression(parser_ctx_t*,VARIANT_BOOL);
static expression_t *new_date_expression(parser_ctx_t*,DATE);
static expression_t *new_string_expression(parser_ctx_t*,const WCHAR*);
static expression_t *new_long_expression(parser_ctx_t*,expression_type_t,LONG);
static expression_t *new_double_expression(parser_ctx_t*,double);
static expression_t *new_unary_expression(parser_ctx_t*,expression_type_t,expression_t*);
static expression_t *new_binary_expression(parser_ctx_t*,expression_type_t,expression_t*,expression_t*);
static expression_t *new_new_expression(parser_ctx_t*,const WCHAR*);

static member_expression_t *new_member_expression(parser_ctx_t*,expression_t*,const WCHAR*);
static call_expression_t *new_call_expression(parser_ctx_t*,expression_t*,expression_t*);
static call_expression_t *make_call_expression(parser_ctx_t*,expression_t*,expression_t*);

static void *new_statement(parser_ctx_t*,statement_type_t,size_t,unsigned);
static statement_t *new_call_statement(parser_ctx_t*,unsigned,expression_t*);
static statement_t *new_assign_statement(parser_ctx_t*,unsigned,expression_t*,expression_t*);
static statement_t *new_set_statement(parser_ctx_t*,unsigned,expression_t*,expression_t*);
static statement_t *new_dim_statement(parser_ctx_t*,unsigned,dim_decl_t*);
static statement_t *new_redim_statement(parser_ctx_t*,unsigned,const WCHAR*,BOOL,expression_t*);
static statement_t *new_while_statement(parser_ctx_t*,unsigned,statement_type_t,expression_t*,statement_t*);
static statement_t *new_forto_statement(parser_ctx_t*,unsigned,const WCHAR*,expression_t*,expression_t*,expression_t*,statement_t*);
static statement_t *new_foreach_statement(parser_ctx_t*,unsigned,const WCHAR*,expression_t*,statement_t*);
static statement_t *new_if_statement(parser_ctx_t*,unsigned,expression_t*,statement_t*,elseif_decl_t*,statement_t*);
static statement_t *new_function_statement(parser_ctx_t*,unsigned,function_decl_t*);
static statement_t *new_onerror_statement(parser_ctx_t*,unsigned,BOOL);
static statement_t *new_const_statement(parser_ctx_t*,unsigned,const_decl_t*);
static statement_t *new_select_statement(parser_ctx_t*,unsigned,expression_t*,case_clausule_t*);
static statement_t *new_with_statement(parser_ctx_t*,unsigned,expression_t*,statement_t*);

static dim_decl_t *new_dim_decl(parser_ctx_t*,const WCHAR*,BOOL,dim_list_t*);
static dim_list_t *new_dim(parser_ctx_t*,unsigned,dim_list_t*);
static elseif_decl_t *new_elseif_decl(parser_ctx_t*,unsigned,expression_t*,statement_t*);
static function_decl_t *new_function_decl(parser_ctx_t*,const WCHAR*,function_type_t,unsigned,arg_decl_t*,statement_t*);
static arg_decl_t *new_argument_decl(parser_ctx_t*,const WCHAR*,BOOL);
static const_decl_t *new_const_decl(parser_ctx_t*,const WCHAR*,expression_t*);
static case_clausule_t *new_case_clausule(parser_ctx_t*,expression_t*,statement_t*,case_clausule_t*);

static class_decl_t *new_class_decl(parser_ctx_t*);
static class_decl_t *add_class_function(parser_ctx_t*,class_decl_t*,function_decl_t*);
static class_decl_t *add_dim_prop(parser_ctx_t*,class_decl_t*,dim_decl_t*,unsigned);

static statement_t *link_statements(statement_t*,statement_t*);

#define STORAGE_IS_PRIVATE    1
#define STORAGE_IS_DEFAULT    2

#define CHECK_ERROR if(((parser_ctx_t*)ctx)->hres != S_OK) YYABORT

#define PARSER_LTYPE unsigned
#define YYLLOC_DEFAULT(Cur, Rhs, N) Cur = YYRHSLOC((Rhs), (N) ? 1 : 0)


#line 148 "dlls/vbscript/parser.tab.c"

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


/* Debug traces.  */
#ifndef PARSER_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define PARSER_DEBUG 1
#  else
#   define PARSER_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define PARSER_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined PARSER_DEBUG */
#if PARSER_DEBUG
extern int parser_debug;
#endif

/* Token kinds.  */
#ifndef PARSER_TOKENTYPE
# define PARSER_TOKENTYPE
  enum parser_tokentype
  {
    PARSER_EMPTY = -2,
    PARSER_EOF = 0,                /* "end of file"  */
    PARSER_error = 256,            /* error  */
    PARSER_UNDEF = 257,            /* "invalid token"  */
    tEXPRESSION = 258,             /* tEXPRESSION  */
    tNL = 259,                     /* tNL  */
    tEMPTYBRACKETS = 260,          /* tEMPTYBRACKETS  */
    tEXPRLBRACKET = 261,           /* tEXPRLBRACKET  */
    tLTEQ = 262,                   /* tLTEQ  */
    tGTEQ = 263,                   /* tGTEQ  */
    tNEQ = 264,                    /* tNEQ  */
    tSTOP = 265,                   /* tSTOP  */
    tME = 266,                     /* tME  */
    tREM = 267,                    /* tREM  */
    tDOT = 268,                    /* tDOT  */
    tTRUE = 269,                   /* tTRUE  */
    tFALSE = 270,                  /* tFALSE  */
    tNOT = 271,                    /* tNOT  */
    tAND = 272,                    /* tAND  */
    tOR = 273,                     /* tOR  */
    tXOR = 274,                    /* tXOR  */
    tEQV = 275,                    /* tEQV  */
    tIMP = 276,                    /* tIMP  */
    tIS = 277,                     /* tIS  */
    tMOD = 278,                    /* tMOD  */
    tCALL = 279,                   /* tCALL  */
    tSUB = 280,                    /* tSUB  */
    tFUNCTION = 281,               /* tFUNCTION  */
    tGET = 282,                    /* tGET  */
    tLET = 283,                    /* tLET  */
    tCONST = 284,                  /* tCONST  */
    tDIM = 285,                    /* tDIM  */
    tREDIM = 286,                  /* tREDIM  */
    tPRESERVE = 287,               /* tPRESERVE  */
    tIF = 288,                     /* tIF  */
    tELSE = 289,                   /* tELSE  */
    tELSEIF = 290,                 /* tELSEIF  */
    tEND = 291,                    /* tEND  */
    tTHEN = 292,                   /* tTHEN  */
    tEXIT = 293,                   /* tEXIT  */
    tWHILE = 294,                  /* tWHILE  */
    tWEND = 295,                   /* tWEND  */
    tDO = 296,                     /* tDO  */
    tLOOP = 297,                   /* tLOOP  */
    tUNTIL = 298,                  /* tUNTIL  */
    tFOR = 299,                    /* tFOR  */
    tTO = 300,                     /* tTO  */
    tEACH = 301,                   /* tEACH  */
    tIN = 302,                     /* tIN  */
    tSELECT = 303,                 /* tSELECT  */
    tCASE = 304,                   /* tCASE  */
    tWITH = 305,                   /* tWITH  */
    tBYREF = 306,                  /* tBYREF  */
    tBYVAL = 307,                  /* tBYVAL  */
    tOPTION = 308,                 /* tOPTION  */
    tNOTHING = 309,                /* tNOTHING  */
    tEMPTY = 310,                  /* tEMPTY  */
    tNULL = 311,                   /* tNULL  */
    tCLASS = 312,                  /* tCLASS  */
    tSET = 313,                    /* tSET  */
    tNEW = 314,                    /* tNEW  */
    tPUBLIC = 315,                 /* tPUBLIC  */
    tPRIVATE = 316,                /* tPRIVATE  */
    tNEXT = 317,                   /* tNEXT  */
    tON = 318,                     /* tON  */
    tRESUME = 319,                 /* tRESUME  */
    tGOTO = 320,                   /* tGOTO  */
    tIdentifier = 321,             /* tIdentifier  */
    tString = 322,                 /* tString  */
    tDEFAULT = 323,                /* tDEFAULT  */
    tERROR = 324,                  /* tERROR  */
    tEXPLICIT = 325,               /* tEXPLICIT  */
    tPROPERTY = 326,               /* tPROPERTY  */
    tSTEP = 327,                   /* tSTEP  */
    tInt = 328,                    /* tInt  */
    tDouble = 329,                 /* tDouble  */
    tDate = 330                    /* tDate  */
  };
  typedef enum parser_tokentype parser_token_kind_t;
#endif

/* Value type.  */
#if ! defined PARSER_STYPE && ! defined PARSER_STYPE_IS_DECLARED
union PARSER_STYPE
{
#line 95 "dlls/vbscript/parser.y"

    const WCHAR *string;
    statement_t *statement;
    expression_t *expression;
    member_expression_t *member;
    elseif_decl_t *elseif;
    dim_decl_t *dim_decl;
    dim_list_t *dim_list;
    function_decl_t *func_decl;
    arg_decl_t *arg_decl;
    class_decl_t *class_decl;
    const_decl_t *const_decl;
    case_clausule_t *case_clausule;
    unsigned uint;
    LONG integer;
    BOOL boolean;
    double dbl;
    DATE date;

#line 298 "dlls/vbscript/parser.tab.c"

};
typedef union PARSER_STYPE PARSER_STYPE;
# define PARSER_STYPE_IS_TRIVIAL 1
# define PARSER_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined PARSER_LTYPE && ! defined PARSER_LTYPE_IS_DECLARED
typedef struct PARSER_LTYPE PARSER_LTYPE;
struct PARSER_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define PARSER_LTYPE_IS_DECLARED 1
# define PARSER_LTYPE_IS_TRIVIAL 1
#endif




int parser_parse (parser_ctx_t *ctx);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_tEXPRESSION = 3,                /* tEXPRESSION  */
  YYSYMBOL_tNL = 4,                        /* tNL  */
  YYSYMBOL_tEMPTYBRACKETS = 5,             /* tEMPTYBRACKETS  */
  YYSYMBOL_tEXPRLBRACKET = 6,              /* tEXPRLBRACKET  */
  YYSYMBOL_tLTEQ = 7,                      /* tLTEQ  */
  YYSYMBOL_tGTEQ = 8,                      /* tGTEQ  */
  YYSYMBOL_tNEQ = 9,                       /* tNEQ  */
  YYSYMBOL_tSTOP = 10,                     /* tSTOP  */
  YYSYMBOL_tME = 11,                       /* tME  */
  YYSYMBOL_tREM = 12,                      /* tREM  */
  YYSYMBOL_tDOT = 13,                      /* tDOT  */
  YYSYMBOL_tTRUE = 14,                     /* tTRUE  */
  YYSYMBOL_tFALSE = 15,                    /* tFALSE  */
  YYSYMBOL_tNOT = 16,                      /* tNOT  */
  YYSYMBOL_tAND = 17,                      /* tAND  */
  YYSYMBOL_tOR = 18,                       /* tOR  */
  YYSYMBOL_tXOR = 19,                      /* tXOR  */
  YYSYMBOL_tEQV = 20,                      /* tEQV  */
  YYSYMBOL_tIMP = 21,                      /* tIMP  */
  YYSYMBOL_tIS = 22,                       /* tIS  */
  YYSYMBOL_tMOD = 23,                      /* tMOD  */
  YYSYMBOL_tCALL = 24,                     /* tCALL  */
  YYSYMBOL_tSUB = 25,                      /* tSUB  */
  YYSYMBOL_tFUNCTION = 26,                 /* tFUNCTION  */
  YYSYMBOL_tGET = 27,                      /* tGET  */
  YYSYMBOL_tLET = 28,                      /* tLET  */
  YYSYMBOL_tCONST = 29,                    /* tCONST  */
  YYSYMBOL_tDIM = 30,                      /* tDIM  */
  YYSYMBOL_tREDIM = 31,                    /* tREDIM  */
  YYSYMBOL_tPRESERVE = 32,                 /* tPRESERVE  */
  YYSYMBOL_tIF = 33,                       /* tIF  */
  YYSYMBOL_tELSE = 34,                     /* tELSE  */
  YYSYMBOL_tELSEIF = 35,                   /* tELSEIF  */
  YYSYMBOL_tEND = 36,                      /* tEND  */
  YYSYMBOL_tTHEN = 37,                     /* tTHEN  */
  YYSYMBOL_tEXIT = 38,                     /* tEXIT  */
  YYSYMBOL_tWHILE = 39,                    /* tWHILE  */
  YYSYMBOL_tWEND = 40,                     /* tWEND  */
  YYSYMBOL_tDO = 41,                       /* tDO  */
  YYSYMBOL_tLOOP = 42,                     /* tLOOP  */
  YYSYMBOL_tUNTIL = 43,                    /* tUNTIL  */
  YYSYMBOL_tFOR = 44,                      /* tFOR  */
  YYSYMBOL_tTO = 45,                       /* tTO  */
  YYSYMBOL_tEACH = 46,                     /* tEACH  */
  YYSYMBOL_tIN = 47,                       /* tIN  */
  YYSYMBOL_tSELECT = 48,                   /* tSELECT  */
  YYSYMBOL_tCASE = 49,                     /* tCASE  */
  YYSYMBOL_tWITH = 50,                     /* tWITH  */
  YYSYMBOL_tBYREF = 51,                    /* tBYREF  */
  YYSYMBOL_tBYVAL = 52,                    /* tBYVAL  */
  YYSYMBOL_tOPTION = 53,                   /* tOPTION  */
  YYSYMBOL_tNOTHING = 54,                  /* tNOTHING  */
  YYSYMBOL_tEMPTY = 55,                    /* tEMPTY  */
  YYSYMBOL_tNULL = 56,                     /* tNULL  */
  YYSYMBOL_tCLASS = 57,                    /* tCLASS  */
  YYSYMBOL_tSET = 58,                      /* tSET  */
  YYSYMBOL_tNEW = 59,                      /* tNEW  */
  YYSYMBOL_tPUBLIC = 60,                   /* tPUBLIC  */
  YYSYMBOL_tPRIVATE = 61,                  /* tPRIVATE  */
  YYSYMBOL_tNEXT = 62,                     /* tNEXT  */
  YYSYMBOL_tON = 63,                       /* tON  */
  YYSYMBOL_tRESUME = 64,                   /* tRESUME  */
  YYSYMBOL_tGOTO = 65,                     /* tGOTO  */
  YYSYMBOL_tIdentifier = 66,               /* tIdentifier  */
  YYSYMBOL_tString = 67,                   /* tString  */
  YYSYMBOL_tDEFAULT = 68,                  /* tDEFAULT  */
  YYSYMBOL_tERROR = 69,                    /* tERROR  */
  YYSYMBOL_tEXPLICIT = 70,                 /* tEXPLICIT  */
  YYSYMBOL_tPROPERTY = 71,                 /* tPROPERTY  */
  YYSYMBOL_tSTEP = 72,                     /* tSTEP  */
  YYSYMBOL_tInt = 73,                      /* tInt  */
  YYSYMBOL_tDouble = 74,                   /* tDouble  */
  YYSYMBOL_tDate = 75,                     /* tDate  */
  YYSYMBOL_76_ = 76,                       /* ':'  */
  YYSYMBOL_77_ = 77,                       /* '='  */
  YYSYMBOL_78_ = 78,                       /* '('  */
  YYSYMBOL_79_ = 79,                       /* ')'  */
  YYSYMBOL_80_0_ = 80,                     /* '0'  */
  YYSYMBOL_81_ = 81,                       /* '.'  */
  YYSYMBOL_82_ = 82,                       /* ','  */
  YYSYMBOL_83_ = 83,                       /* '-'  */
  YYSYMBOL_84_ = 84,                       /* '>'  */
  YYSYMBOL_85_ = 85,                       /* '<'  */
  YYSYMBOL_86_ = 86,                       /* '&'  */
  YYSYMBOL_87_ = 87,                       /* '+'  */
  YYSYMBOL_88_ = 88,                       /* '\\'  */
  YYSYMBOL_89_ = 89,                       /* '*'  */
  YYSYMBOL_90_ = 90,                       /* '/'  */
  YYSYMBOL_91_ = 91,                       /* '^'  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_Program = 93,                   /* Program  */
  YYSYMBOL_OptionExplicit_opt = 94,        /* OptionExplicit_opt  */
  YYSYMBOL_SourceElements = 95,            /* SourceElements  */
  YYSYMBOL_GlobalDimDeclaration = 96,      /* GlobalDimDeclaration  */
  YYSYMBOL_ExpressionNl_opt = 97,          /* ExpressionNl_opt  */
  YYSYMBOL_BodyStatements = 98,            /* BodyStatements  */
  YYSYMBOL_StatementsNl_opt = 99,          /* StatementsNl_opt  */
  YYSYMBOL_StatementsNl = 100,             /* StatementsNl  */
  YYSYMBOL_StatementNl = 101,              /* StatementNl  */
  YYSYMBOL_Statement = 102,                /* Statement  */
  YYSYMBOL_SimpleStatement = 103,          /* SimpleStatement  */
  YYSYMBOL_MemberExpression = 104,         /* MemberExpression  */
  YYSYMBOL_Preserve_opt = 105,             /* Preserve_opt  */
  YYSYMBOL_DimDeclList = 106,              /* DimDeclList  */
  YYSYMBOL_DimDecl = 107,                  /* DimDecl  */
  YYSYMBOL_DimList = 108,                  /* DimList  */
  YYSYMBOL_ConstDeclList = 109,            /* ConstDeclList  */
  YYSYMBOL_ConstDecl = 110,                /* ConstDecl  */
  YYSYMBOL_ConstExpression = 111,          /* ConstExpression  */
  YYSYMBOL_DoType = 112,                   /* DoType  */
  YYSYMBOL_Step_opt = 113,                 /* Step_opt  */
  YYSYMBOL_IfStatement = 114,              /* IfStatement  */
  YYSYMBOL_EndIf_opt = 115,                /* EndIf_opt  */
  YYSYMBOL_ElseIfs_opt = 116,              /* ElseIfs_opt  */
  YYSYMBOL_ElseIfs = 117,                  /* ElseIfs  */
  YYSYMBOL_ElseIf = 118,                   /* ElseIf  */
  YYSYMBOL_Else_opt = 119,                 /* Else_opt  */
  YYSYMBOL_CaseClausules = 120,            /* CaseClausules  */
  YYSYMBOL_Arguments = 121,                /* Arguments  */
  YYSYMBOL_ArgumentList_opt = 122,         /* ArgumentList_opt  */
  YYSYMBOL_ArgumentList = 123,             /* ArgumentList  */
  YYSYMBOL_EmptyBrackets_opt = 124,        /* EmptyBrackets_opt  */
  YYSYMBOL_ExpressionList = 125,           /* ExpressionList  */
  YYSYMBOL_Expression = 126,               /* Expression  */
  YYSYMBOL_EqvExpression = 127,            /* EqvExpression  */
  YYSYMBOL_XorExpression = 128,            /* XorExpression  */
  YYSYMBOL_OrExpression = 129,             /* OrExpression  */
  YYSYMBOL_AndExpression = 130,            /* AndExpression  */
  YYSYMBOL_NotExpression = 131,            /* NotExpression  */
  YYSYMBOL_EqualityExpression = 132,       /* EqualityExpression  */
  YYSYMBOL_ConcatExpression = 133,         /* ConcatExpression  */
  YYSYMBOL_AdditiveExpression = 134,       /* AdditiveExpression  */
  YYSYMBOL_ModExpression = 135,            /* ModExpression  */
  YYSYMBOL_IntdivExpression = 136,         /* IntdivExpression  */
  YYSYMBOL_MultiplicativeExpression = 137, /* MultiplicativeExpression  */
  YYSYMBOL_ExpExpression = 138,            /* ExpExpression  */
  YYSYMBOL_SignExpression = 139,           /* SignExpression  */
  YYSYMBOL_UnaryExpression = 140,          /* UnaryExpression  */
  YYSYMBOL_CallExpression = 141,           /* CallExpression  */
  YYSYMBOL_LiteralExpression = 142,        /* LiteralExpression  */
  YYSYMBOL_NumericLiteralExpression = 143, /* NumericLiteralExpression  */
  YYSYMBOL_IntegerValue = 144,             /* IntegerValue  */
  YYSYMBOL_PrimaryExpression = 145,        /* PrimaryExpression  */
  YYSYMBOL_ClassDeclaration = 146,         /* ClassDeclaration  */
  YYSYMBOL_ClassBody = 147,                /* ClassBody  */
  YYSYMBOL_PropertyDecl = 148,             /* PropertyDecl  */
  YYSYMBOL_FunctionDecl = 149,             /* FunctionDecl  */
  YYSYMBOL_Storage_opt = 150,              /* Storage_opt  */
  YYSYMBOL_Storage = 151,                  /* Storage  */
  YYSYMBOL_ArgumentsDecl_opt = 152,        /* ArgumentsDecl_opt  */
  YYSYMBOL_ArgumentDeclList = 153,         /* ArgumentDeclList  */
  YYSYMBOL_ArgumentDecl = 154,             /* ArgumentDecl  */
  YYSYMBOL_Identifier = 155,               /* Identifier  */
  YYSYMBOL_StSep = 156                     /* StSep  */
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
typedef yytype_int16 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined PARSER_LTYPE_IS_TRIVIAL && PARSER_LTYPE_IS_TRIVIAL \
             && defined PARSER_STYPE_IS_TRIVIAL && PARSER_STYPE_IS_TRIVIAL)))

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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1296

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  371

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


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
       2,     2,     2,     2,     2,     2,     2,     2,    86,     2,
      78,    79,    89,    87,    82,    83,    81,    90,    80,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    76,     2,
      85,    77,    84,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    88,     2,    91,     2,     2,     2,     2,     2,
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
      75
};

#if PARSER_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   160,   160,   161,   164,   165,   168,   169,   171,   172,
     175,   176,   179,   180,   183,   184,   185,   188,   189,   192,
     193,   196,   199,   200,   201,   202,   203,   206,   208,   209,
     211,   212,   214,   215,   217,   220,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   237,
     239,   241,   245,   246,   247,   251,   252,   255,   256,   259,
     260,   261,   264,   265,   268,   269,   272,   275,   276,   279,
     280,   283,   284,   287,   289,   290,   294,   295,   298,   299,
     302,   303,   306,   310,   311,   314,   315,   316,   320,   321,
     324,   325,   328,   329,   330,   333,   334,   337,   338,   341,
     342,   345,   346,   349,   350,   353,   354,   357,   358,   361,
     362,   365,   366,   367,   368,   369,   370,   371,   372,   375,
     376,   379,   380,   381,   384,   385,   388,   389,   393,   394,
     396,   400,   401,   404,   405,   406,   409,   410,   411,   414,
     415,   416,   420,   421,   422,   423,   424,   425,   426,   427,
     430,   431,   432,   435,   436,   439,   440,   443,   446,   447,
     448,   450,   452,   454,   455,   456,   457,   460,   462,   464,
     468,   470,   474,   475,   478,   479,   480,   483,   484,   487,
     488,   491,   492,   493,   497,   498,   499,   500,   501,   502,
     506,   507,   508,   509
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if PARSER_DEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "tEXPRESSION", "tNL",
  "tEMPTYBRACKETS", "tEXPRLBRACKET", "tLTEQ", "tGTEQ", "tNEQ", "tSTOP",
  "tME", "tREM", "tDOT", "tTRUE", "tFALSE", "tNOT", "tAND", "tOR", "tXOR",
  "tEQV", "tIMP", "tIS", "tMOD", "tCALL", "tSUB", "tFUNCTION", "tGET",
  "tLET", "tCONST", "tDIM", "tREDIM", "tPRESERVE", "tIF", "tELSE",
  "tELSEIF", "tEND", "tTHEN", "tEXIT", "tWHILE", "tWEND", "tDO", "tLOOP",
  "tUNTIL", "tFOR", "tTO", "tEACH", "tIN", "tSELECT", "tCASE", "tWITH",
  "tBYREF", "tBYVAL", "tOPTION", "tNOTHING", "tEMPTY", "tNULL", "tCLASS",
  "tSET", "tNEW", "tPUBLIC", "tPRIVATE", "tNEXT", "tON", "tRESUME",
  "tGOTO", "tIdentifier", "tString", "tDEFAULT", "tERROR", "tEXPLICIT",
  "tPROPERTY", "tSTEP", "tInt", "tDouble", "tDate", "':'", "'='", "'('",
  "')'", "'0'", "'.'", "','", "'-'", "'>'", "'<'", "'&'", "'+'", "'\\\\'",
  "'*'", "'/'", "'^'", "$accept", "Program", "OptionExplicit_opt",
  "SourceElements", "GlobalDimDeclaration", "ExpressionNl_opt",
  "BodyStatements", "StatementsNl_opt", "StatementsNl", "StatementNl",
  "Statement", "SimpleStatement", "MemberExpression", "Preserve_opt",
  "DimDeclList", "DimDecl", "DimList", "ConstDeclList", "ConstDecl",
  "ConstExpression", "DoType", "Step_opt", "IfStatement", "EndIf_opt",
  "ElseIfs_opt", "ElseIfs", "ElseIf", "Else_opt", "CaseClausules",
  "Arguments", "ArgumentList_opt", "ArgumentList", "EmptyBrackets_opt",
  "ExpressionList", "Expression", "EqvExpression", "XorExpression",
  "OrExpression", "AndExpression", "NotExpression", "EqualityExpression",
  "ConcatExpression", "AdditiveExpression", "ModExpression",
  "IntdivExpression", "MultiplicativeExpression", "ExpExpression",
  "SignExpression", "UnaryExpression", "CallExpression",
  "LiteralExpression", "NumericLiteralExpression", "IntegerValue",
  "PrimaryExpression", "ClassDeclaration", "ClassBody", "PropertyDecl",
  "FunctionDecl", "Storage_opt", "Storage", "ArgumentsDecl_opt",
  "ArgumentDeclList", "ArgumentDecl", "Identifier", "StSep", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-260)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-175)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      54,   427,   -47,   132,  -260,   427,  -260,   -12,  -260,  -260,
     427,  -260,  -260,  -260,   284,  -260,  -260,  -260,  -260,  -260,
    -260,  -260,  -260,  -260,  -260,  -260,   498,   498,  -260,  -260,
      21,   105,   121,   146,   149,  -260,    37,    83,   -20,   152,
      89,    48,    92,  -260,  -260,     2,  -260,  -260,  -260,  -260,
      16,  -260,   576,    -9,  -260,  -260,  -260,  -260,  -260,  -260,
     427,   427,   427,   427,   427,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
    -260,   292,   119,  -260,    16,    16,  -260,  -260,   616,   284,
     284,   160,   427,   109,   427,    73,   125,   156,   427,   284,
     206,   319,   284,   153,   755,    16,  -260,   197,   140,  -260,
     327,  -260,  -260,   120,  -260,  -260,   105,   121,   146,   149,
    -260,    83,    83,    83,    83,    83,    83,    83,   -20,   152,
     152,    89,    48,    92,    92,  -260,   292,   144,   -13,  -260,
    -260,  -260,  -260,  -260,   145,   154,  -260,   148,    24,  -260,
     158,   115,  -260,  -260,  -260,  -260,  -260,    43,  -260,  -260,
     427,  1023,   284,   161,   427,    43,    16,    19,   173,  -260,
    -260,   142,   167,  -260,  -260,  -260,  -260,   755,   427,  -260,
    -260,   284,   284,  -260,  -260,   292,   284,   475,   284,  -260,
     -40,   162,   688,  1090,    43,   199,  -260,    16,   195,   427,
      43,  1157,    -8,   427,   183,   163,  -260,  -260,   225,    31,
      31,  -260,  -260,   108,  -260,  -260,  -260,  -260,  -260,   175,
     177,   292,   956,     7,   222,  1023,   147,   956,   427,     6,
     214,   230,   284,   231,    16,    16,    85,   202,   225,  -260,
    -260,  -260,   181,  -260,    16,    16,  -260,  -260,   -40,   192,
     238,   889,   249,  -260,  -260,   244,   427,  -260,    43,   427,
     405,   251,   239,    16,   234,    -8,    -8,    99,    16,   284,
     284,   209,   210,   289,   822,   822,  -260,  -260,   427,   261,
    -260,   238,   260,  -260,  -260,   225,  1224,    -4,    16,    16,
     -10,   252,  -260,    -8,    16,  -260,  -260,   284,   284,   284,
      -8,   289,   289,  -260,   181,  -260,   263,   822,   197,   266,
     141,   305,   275,  -260,  -260,   250,   427,    16,  1157,   956,
     427,  -260,  -260,  -260,    31,   240,   242,  -260,  -260,  -260,
    -260,   291,  -260,   296,   322,  1157,   290,  -260,   225,  1224,
    -260,   214,  -260,    16,   181,   181,  -260,  -260,   956,  -260,
    -260,   265,  -260,   822,   255,   258,  -260,  -260,   293,    16,
      16,   257,   822,   822,  -260,   303,   308,   274,   278,  -260,
    -260
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    12,     0,     0,     6,     0,   156,     0,   142,   143,
       0,   149,   147,   148,     0,   184,   144,   185,   186,   187,
     188,   189,   151,   152,   145,   150,     0,     0,     3,   140,
       0,    99,   101,   103,   105,   107,   109,   111,   119,   121,
     124,   126,   128,   131,   133,   137,   136,   146,   139,    52,
       0,     1,   172,     0,    54,   110,   138,   134,   135,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,   141,   190,   191,     5,    44,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,   176,     0,    22,     0,     8,     0,    24,    32,
      90,     9,    37,     0,   173,   155,   100,   102,   104,   106,
     108,   117,   116,   113,   118,   112,   114,   115,   120,   123,
     122,   125,   127,   129,   130,   132,     0,     0,    92,    53,
     192,   193,    28,    47,    64,     0,    30,    57,    59,    56,
       0,     0,    42,    40,    38,    39,    41,     0,    69,    70,
       0,   172,     0,     0,     0,     0,     0,     0,   185,    11,
      10,     0,   175,   176,    23,     7,    21,    26,     0,    27,
      91,     0,     0,    94,    89,     0,     0,     0,     0,    61,
       0,     0,   172,   172,     0,     0,    18,     0,     0,     0,
       0,   172,   172,     0,     0,     0,   174,    25,    29,    95,
      95,    93,    65,     0,    66,    67,    58,   154,   153,     0,
      62,     0,    17,    76,     0,   172,    36,    19,     0,     0,
      85,     0,     0,     0,   165,   159,     0,   173,    43,    45,
      46,    96,     0,   177,     0,     0,    68,    60,     0,     0,
      78,   172,     0,    74,    33,     0,     0,    20,     0,     0,
       0,     0,     0,   163,     0,   172,   172,     0,   161,     0,
       0,     0,   179,    95,   172,   172,    63,    31,     0,    83,
      79,    80,    76,    77,    34,    35,   172,    71,     0,     0,
      97,     0,    51,   172,     0,   166,   160,     0,     0,     0,
     172,    95,    95,   178,     0,   181,     0,   172,    15,     0,
       0,     0,     0,    81,    75,     0,     0,     0,   172,    17,
       0,    50,   164,   157,    95,     0,     0,   162,   182,   183,
     180,     0,    16,     0,     0,   172,     0,    49,    72,   172,
      86,    85,    98,     0,     0,     0,   170,   171,    17,    84,
      73,     0,    87,   172,     0,     0,    82,    48,     0,     0,
       0,     0,   172,   172,   167,     0,     0,     0,     0,   168,
     169
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -260,  -260,  -260,  -260,  -260,  -260,  -259,  -188,   130,   316,
     -48,   -49,  -260,  -260,   -83,   138,   123,   187,  -260,  -260,
     143,  -260,  -260,    94,  -260,    96,  -260,  -260,    39,  -260,
    -260,  -101,  -252,    58,     1,   324,   331,   341,   343,    22,
    -260,   357,   340,   135,   338,   339,   137,    12,   329,   -38,
     243,   216,  -260,  -260,  -260,  -235,  -260,  -192,  -187,  -176,
    -209,  -186,  -260,   -14,   -24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,    52,   105,    28,   306,   195,   196,   307,
     308,   197,    29,   150,   146,   147,   219,   143,   144,   214,
     160,   317,   109,   253,   279,   280,   281,   312,   261,    83,
     179,   137,   243,   289,   138,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   220,    48,   111,   233,   234,   112,   113,   114,
     244,   271,   272,    49,    86
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,   245,    30,   108,   107,   224,    53,    80,    60,   180,
     235,    60,    60,   231,   110,   236,   309,    60,   169,   170,
      84,   305,   232,    50,    80,    59,   237,    60,  -158,   189,
     295,   296,    55,   217,   250,   183,   241,   255,    57,    58,
     218,   251,    60,   252,    65,    66,    67,    84,   332,   328,
     329,   259,   172,   173,    54,   108,   174,     1,   322,    68,
     140,   141,   167,    73,    60,   327,   110,    74,   316,   185,
     115,   161,   320,   235,   235,   145,   148,    84,   236,   236,
      81,   175,   163,    82,   211,   166,   120,   148,   148,   237,
     237,   135,    85,   151,   358,   157,   203,    81,   315,   165,
      82,   235,   190,   365,   366,   216,   236,     2,   235,   242,
     181,   182,   158,   236,    69,   343,   159,   237,   330,    85,
     249,    70,    71,   110,   237,    61,   297,   298,   108,   207,
     340,   341,    51,   193,   152,   153,    60,    77,    78,   110,
      62,   201,   202,   108,   223,   181,   182,   349,   198,    85,
     154,   351,   192,   155,   110,   110,   267,   299,   354,   355,
     356,   194,    60,   110,    63,   200,    64,   209,   210,    72,
     225,   162,   145,   227,   148,    75,   230,    76,   334,   208,
     156,    22,    23,    79,   110,   139,   158,   110,    25,   110,
     159,    15,   149,    17,    18,    19,    20,    21,  -174,  -174,
     229,   176,   108,   282,   238,   164,   204,   205,   129,   130,
     265,   266,     5,   110,   133,   134,   177,     6,   148,     7,
     274,   275,   171,   184,   191,   108,   108,   186,   273,   258,
     188,   187,   269,   270,   286,   206,   110,   110,   199,   293,
     221,   226,   228,   240,   300,   239,    60,    15,   110,    17,
      18,    19,    20,    21,   247,   301,   302,   285,   108,   248,
     287,   290,   254,   260,   318,   319,   262,   264,   268,   110,
     323,   277,    15,   278,    17,    18,    19,    20,    21,   310,
     110,   110,   283,   324,   325,   326,   284,   291,   303,   292,
     273,   294,   304,   339,   241,   311,   252,   110,     5,   331,
     321,   110,   333,     6,   108,     7,     8,     9,    10,   335,
     110,   336,   337,   108,   108,   110,   346,   338,   344,   353,
     345,   290,   347,   350,   110,   110,   348,   357,   364,   361,
     273,   273,    80,     5,   359,   362,   363,   360,     6,   367,
       7,     8,     9,    10,   368,   369,    11,    12,    13,   370,
      15,    14,    17,    18,    19,    20,    21,   257,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   106,   256,
     263,   276,    25,   212,   136,    26,   314,   313,   342,    27,
     352,    11,    12,    13,   116,    15,    14,   168,    18,    19,
      20,    21,   117,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   118,   178,    81,   119,    25,    82,   136,
      26,     5,   128,   131,    27,   132,     6,   142,     7,     8,
       9,    10,   121,   122,   123,   124,   125,   126,   127,   246,
     215,     0,     0,     5,     0,     0,     0,     0,     6,   288,
       7,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    13,     0,     0,    14,     0,     0,     0,     0,     0,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    11,    12,    13,     0,    25,    14,     0,    26,     8,
       9,     0,    27,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,     5,     0,     0,    25,     0,     6,
      26,     7,     8,     9,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,    22,    23,
      24,     0,    11,    12,    13,    25,     0,    14,   213,     0,
       0,     0,     0,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,     0,    -2,     0,    25,     0,
       0,    26,     5,     0,     0,    27,    87,     6,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,    89,    90,    91,     0,    92,
       0,     0,     0,     0,    93,    94,     0,    95,     0,     0,
      96,     0,     5,     0,    97,     0,    98,     6,     0,     7,
       8,     9,     0,    99,   100,     0,   101,   102,     0,   103,
       0,     0,    15,     0,    17,    18,    19,    20,    21,     0,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,     0,     0,    14,     0,     0,     0,     0,
       0,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   222,     0,     5,     0,    25,     0,    87,     6,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,    92,     0,     0,     0,     0,    93,    94,     0,    95,
       0,     0,    96,     0,     0,     0,    97,     0,    98,     0,
       0,     0,     0,     0,     0,     0,   100,     0,   172,   173,
       0,   103,     0,     0,    15,     0,    17,    18,    19,    20,
      21,     5,     0,     0,   104,    87,     6,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
    -172,  -172,     0,     0,    89,    90,    91,     0,    92,     0,
       0,     0,     0,    93,    94,     0,    95,     0,     0,    96,
       0,     0,     0,    97,     0,    98,     0,     0,     0,     0,
       0,     0,     0,   100,     0,   172,   173,     0,   103,     0,
       0,    15,     0,    17,    18,    19,    20,    21,     5,     0,
       0,   104,    87,     6,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,    89,    90,    91,     0,    92,     0,     0,   -14,     0,
      93,    94,     0,    95,     0,     0,    96,     0,     0,     0,
      97,     0,    98,     0,     0,     0,     0,     0,     0,     0,
     100,     0,   172,   173,     0,   103,     0,     0,    15,     0,
      17,    18,    19,    20,    21,     5,     0,     0,   104,    87,
       6,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,    89,    90,
      91,     0,    92,     0,     0,     0,     0,    93,    94,     0,
      95,     0,     0,    96,     0,     0,     0,    97,     0,    98,
       0,     0,     0,     0,     0,     0,     0,   100,     0,   172,
     173,     0,   103,     0,     0,    15,     0,    17,    18,    19,
      20,    21,     5,     0,     0,   104,    87,     6,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,  -172,  -172,     0,     0,    89,    90,    91,     0,    92,
       0,     0,     0,     0,    93,    94,     0,    95,     0,     0,
      96,     0,     0,     0,    97,     0,    98,     0,     0,     0,
       0,     0,     0,     0,   100,     0,   172,   173,     0,   103,
       0,     0,    15,     0,    17,    18,    19,    20,    21,     5,
       0,     0,     0,    87,     6,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    89,    90,    91,     0,    92,     0,     0,     0,
       0,    93,    94,     0,    95,   -17,     0,    96,     0,     0,
       0,    97,     0,    98,     0,     0,     0,     0,     0,     0,
       0,   100,     0,   172,   173,     0,   103,     0,     0,    15,
       0,    17,    18,    19,    20,    21,     5,     0,     0,     0,
      87,     6,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,    92,     0,     0,     0,     0,    93,    94,
     -17,    95,     0,     0,    96,     0,     0,     0,    97,     0,
      98,     0,     0,     0,     0,     0,     0,     0,   100,     0,
     172,   173,     0,   103,     0,     0,    15,     0,    17,    18,
      19,    20,    21,     5,     0,     0,     0,    87,     6,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
      92,     0,     0,   -17,     0,    93,    94,     0,    95,     0,
       0,    96,     0,     0,     0,    97,     0,    98,     0,     0,
       0,     0,     0,     0,     0,   100,     0,   172,   173,     0,
     103,     0,     0,    15,     0,    17,    18,    19,    20,    21,
       5,     0,     0,     0,    87,     6,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,    92,     0,     0,
       0,     0,    93,    94,     0,    95,     0,     0,    96,     0,
       0,     0,    97,     0,    98,     0,     0,     0,     0,     0,
       0,     0,   100,     0,   172,   173,   -17,   103,     0,     0,
      15,     0,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
      14,   210,     1,    52,    52,   193,     5,     5,    21,   110,
     202,    21,    21,   201,    52,   202,   275,    21,   101,   102,
       4,   273,    30,    70,     5,     4,   202,    21,    36,     5,
     265,   266,    10,    73,   222,   136,     5,   225,    26,    27,
      80,    34,    21,    36,     7,     8,     9,     4,   307,   301,
     302,    45,    60,    61,    66,   104,   104,     3,   293,    22,
      84,    85,   100,    83,    21,   300,   104,    87,    72,    82,
      79,    95,    82,   265,   266,    89,    90,     4,   265,   266,
      78,   105,    96,    81,   185,    99,    64,   101,   102,   265,
     266,    79,    76,    92,   353,    94,    77,    78,   286,    98,
      81,   293,    78,   362,   363,   188,   293,    53,   300,    78,
      25,    26,    39,   300,    77,   324,    43,   293,   304,    76,
     221,    84,    85,   161,   300,    20,    27,    28,   177,   177,
     318,   319,     0,   157,    25,    26,    21,    89,    90,   177,
      19,   165,   166,   192,   192,    25,    26,   335,   162,    76,
      41,   339,    37,    44,   192,   193,    71,    58,   344,   345,
     348,   160,    21,   201,    18,   164,    17,   181,   182,    86,
     194,    46,   186,   197,   188,    23,   200,    88,    37,   178,
      71,    73,    74,    91,   222,    66,    39,   225,    80,   227,
      43,    66,    32,    68,    69,    70,    71,    72,    25,    26,
     199,     4,   251,   251,   203,    49,    64,    65,    73,    74,
     234,   235,     6,   251,    77,    78,    76,    11,   232,    13,
     244,   245,    69,    79,    66,   274,   275,    82,   242,   228,
      82,    77,    51,    52,   258,    68,   274,   275,    77,   263,
      78,    42,    47,    80,   268,    62,    21,    66,   286,    68,
      69,    70,    71,    72,    79,   269,   270,   256,   307,    82,
     259,   260,    40,    49,   288,   289,    36,    36,    66,   307,
     294,    79,    66,    35,    68,    69,    70,    71,    72,   278,
     318,   319,    33,   297,   298,   299,    42,    36,    79,    50,
     304,    57,    82,   317,     5,    34,    36,   335,     6,    36,
      48,   339,    36,    11,   353,    13,    14,    15,    16,     4,
     348,    36,    62,   362,   363,   353,    25,   316,    78,   343,
      78,   320,    26,    33,   362,   363,     4,    62,    71,    36,
     344,   345,     5,     6,    79,   359,   360,    79,    11,    36,
      13,    14,    15,    16,    36,    71,    54,    55,    56,    71,
      66,    59,    68,    69,    70,    71,    72,   227,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    52,   226,
     232,   248,    80,   186,    82,    83,   282,   281,   320,    87,
     341,    54,    55,    56,    60,    66,    59,    68,    69,    70,
      71,    72,    61,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    62,    77,    78,    63,    80,    81,    82,
      83,     6,    72,    75,    87,    76,    11,    88,    13,    14,
      15,    16,    65,    66,    67,    68,    69,    70,    71,   213,
     187,    -1,    -1,     6,    -1,    -1,    -1,    -1,    11,    34,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    54,    55,    56,    -1,    80,    59,    -1,    83,    14,
      15,    -1,    87,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,     6,    -1,    -1,    80,    -1,    11,
      83,    13,    14,    15,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    -1,    54,    55,    56,    80,    -1,    59,    83,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,     0,    -1,    80,    -1,
      -1,    83,     6,    -1,    -1,    87,    10,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    41,    -1,    -1,
      44,    -1,     6,    -1,    48,    -1,    50,    11,    -1,    13,
      14,    15,    -1,    57,    58,    -1,    60,    61,    -1,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     4,    -1,     6,    -1,    80,    -1,    10,    11,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,     6,    -1,    -1,    76,    10,    11,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    -1,    -1,    29,    30,    31,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    41,    -1,    -1,    44,
      -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    60,    61,    -1,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,     6,    -1,
      -1,    76,    10,    11,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    30,    31,    -1,    33,    -1,    -1,    36,    -1,
      38,    39,    -1,    41,    -1,    -1,    44,    -1,    -1,    -1,
      48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    60,    61,    -1,    63,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,     6,    -1,    -1,    76,    10,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      41,    -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      61,    -1,    63,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,     6,    -1,    -1,    76,    10,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    -1,    -1,    29,    30,    31,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    41,    -1,    -1,
      44,    -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    60,    61,    -1,    63,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,     6,
      -1,    -1,    -1,    10,    11,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    -1,    44,    -1,    -1,
      -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    60,    61,    -1,    63,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,     6,    -1,    -1,    -1,
      10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    -1,    -1,    44,    -1,    -1,    -1,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      60,    61,    -1,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,     6,    -1,    -1,    -1,    10,    11,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,
      33,    -1,    -1,    36,    -1,    38,    39,    -1,    41,    -1,
      -1,    44,    -1,    -1,    -1,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,    -1,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
       6,    -1,    -1,    -1,    10,    11,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    41,    -1,    -1,    44,    -1,
      -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    62,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    93,    94,     6,    11,    13,    14,    15,
      16,    54,    55,    56,    59,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    80,    83,    87,    97,   104,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   145,   155,
      70,     0,    95,   126,    66,   131,   155,   139,   139,     4,
      21,    20,    19,    18,    17,     7,     8,     9,    22,    77,
      84,    85,    86,    83,    87,    23,    88,    89,    90,    91,
       5,    78,    81,   121,     4,    76,   156,    10,    24,    29,
      30,    31,    33,    38,    39,    41,    44,    48,    50,    57,
      58,    60,    61,    63,    76,    96,   101,   102,   103,   114,
     141,   146,   149,   150,   151,    79,   127,   128,   129,   130,
     131,   133,   133,   133,   133,   133,   133,   133,   134,   135,
     135,   136,   137,   138,   138,   139,    82,   123,   126,    66,
     156,   156,   140,   109,   110,   155,   106,   107,   155,    32,
     105,   126,    25,    26,    41,    44,    71,   126,    39,    43,
     112,   156,    46,   155,    49,   126,   155,   141,    68,   106,
     106,    69,    60,    61,   102,   156,     4,    76,    77,   122,
     123,    25,    26,   123,    79,    82,    82,    77,    82,     5,
      78,    66,    37,   156,   126,    99,   100,   103,   155,    77,
     126,   156,   156,    77,    64,    65,    68,   102,   126,   155,
     155,   123,   109,    83,   111,   142,   106,    73,    80,   108,
     144,    78,     4,   102,    99,   156,    42,   156,    47,   126,
     156,    99,    30,   147,   148,   149,   150,   151,   126,    62,
      80,     5,    78,   124,   152,   152,   143,    79,    82,   123,
      99,    34,    36,   115,    40,    99,   112,   100,   126,    45,
      49,   120,    36,   107,    36,   156,   156,    71,    66,    51,
      52,   153,   154,   155,   156,   156,   108,    79,    35,   116,
     117,   118,   102,    33,    42,   126,   156,   126,    34,   125,
     126,    36,    50,   156,    57,   147,   147,    27,    28,    58,
     156,   155,   155,    79,    82,   124,    98,   101,   102,    98,
     126,    34,   119,   117,   115,    99,    72,   113,   156,   156,
      82,    48,   147,   156,   155,   155,   155,   147,   124,   124,
     153,    36,    98,    36,    37,     4,    36,    62,   126,   156,
      99,    99,   125,   152,    78,    78,    25,    26,     4,    99,
      33,    99,   120,   156,   153,   153,    99,    62,    98,    79,
      79,    36,   156,   156,    71,    98,    98,    36,    36,    71,
      71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    95,    95,    95,    95,
      96,    96,    97,    97,    98,    98,    98,    99,    99,   100,
     100,   101,   102,   102,   102,   102,   102,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   104,   104,   104,   105,   105,   106,   106,   107,
     107,   107,   108,   108,   109,   109,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   119,   119,   120,   120,   120,   121,   121,
     122,   122,   123,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     133,   134,   134,   134,   135,   135,   136,   136,   137,   137,
     137,   138,   138,   139,   139,   139,   140,   140,   140,   141,
     141,   141,   142,   142,   142,   142,   142,   142,   142,   142,
     143,   143,   143,   144,   144,   145,   145,   146,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   148,   148,   148,
     149,   149,   150,   150,   151,   151,   151,   152,   152,   153,
     153,   154,   154,   154,   155,   155,   155,   155,   155,   155,
     156,   156,   156,   156
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     3,     0,     3,     2,     2,
       2,     2,     0,     2,     0,     1,     2,     0,     1,     2,
       3,     2,     1,     2,     1,     3,     2,     2,     2,     3,
       2,     6,     1,     5,     6,     6,     4,     1,     2,     2,
       2,     2,     2,     4,     1,     4,     4,     2,    10,     8,
       7,     6,     1,     3,     2,     0,     1,     1,     3,     1,
       4,     2,     1,     3,     1,     3,     3,     1,     2,     1,
       1,     0,     2,     9,     5,     7,     0,     2,     0,     1,
       1,     2,     5,     0,     3,     0,     4,     5,     1,     3,
       0,     1,     1,     3,     2,     0,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       2,     1,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     1,     2,     2,     1,     1,     2,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     7,     0,     1,
       3,     2,     4,     2,     4,     1,     3,     9,    11,    11,
       8,     8,     0,     1,     2,     1,     1,     1,     3,     1,
       3,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = PARSER_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == PARSER_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, ctx, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use PARSER_error or PARSER_UNDEF. */
#define YYERRCODE PARSER_UNDEF

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
#if PARSER_DEBUG

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

#  elif defined PARSER_LTYPE_IS_TRIVIAL && PARSER_LTYPE_IS_TRIVIAL

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
                  Kind, Value, Location, ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, parser_ctx_t *ctx)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (ctx);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, parser_ctx_t *ctx)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, ctx);
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
                 int yyrule, parser_ctx_t *ctx)
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
                       &(yylsp[(yyi + 1) - (yynrhs)]), ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, ctx); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !PARSER_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !PARSER_DEBUG */


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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, parser_ctx_t *ctx)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (ctx);
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
yyparse (parser_ctx_t *ctx)
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
# if defined PARSER_LTYPE_IS_TRIVIAL && PARSER_LTYPE_IS_TRIVIAL
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



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = PARSER_EMPTY; /* Cause a token to be read.  */

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
  if (yychar == PARSER_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, ctx);
    }

  if (yychar <= PARSER_EOF)
    {
      yychar = PARSER_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == PARSER_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = PARSER_UNDEF;
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
  yychar = PARSER_EMPTY;
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
  case 3: /* Program: tEXPRESSION ExpressionNl_opt  */
#line 161 "dlls/vbscript/parser.y"
                                            { handle_isexpression_script(ctx, (yyvsp[0].expression)); }
#line 2031 "dlls/vbscript/parser.tab.c"
    break;

  case 5: /* OptionExplicit_opt: tOPTION tEXPLICIT StSep  */
#line 165 "dlls/vbscript/parser.y"
                                            { ctx->option_explicit = TRUE; }
#line 2037 "dlls/vbscript/parser.tab.c"
    break;

  case 7: /* SourceElements: SourceElements GlobalDimDeclaration StSep  */
#line 170 "dlls/vbscript/parser.y"
                                            { source_add_statement(ctx, (yyvsp[-1].statement)); }
#line 2043 "dlls/vbscript/parser.tab.c"
    break;

  case 8: /* SourceElements: SourceElements StatementNl  */
#line 171 "dlls/vbscript/parser.y"
                                            { source_add_statement(ctx, (yyvsp[0].statement)); }
#line 2049 "dlls/vbscript/parser.tab.c"
    break;

  case 9: /* SourceElements: SourceElements ClassDeclaration  */
#line 172 "dlls/vbscript/parser.y"
                                            { source_add_class(ctx, (yyvsp[0].class_decl)); }
#line 2055 "dlls/vbscript/parser.tab.c"
    break;

  case 10: /* GlobalDimDeclaration: tPRIVATE DimDeclList  */
#line 175 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_dim_statement(ctx, (yyloc), (yyvsp[0].dim_decl)); CHECK_ERROR; }
#line 2061 "dlls/vbscript/parser.tab.c"
    break;

  case 11: /* GlobalDimDeclaration: tPUBLIC DimDeclList  */
#line 176 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_dim_statement(ctx, (yyloc), (yyvsp[0].dim_decl)); CHECK_ERROR; }
#line 2067 "dlls/vbscript/parser.tab.c"
    break;

  case 12: /* ExpressionNl_opt: %empty  */
#line 179 "dlls/vbscript/parser.y"
                                            { (yyval.expression) = NULL; }
#line 2073 "dlls/vbscript/parser.tab.c"
    break;

  case 13: /* ExpressionNl_opt: Expression tNL  */
#line 180 "dlls/vbscript/parser.y"
                                            { (yyval.expression) = (yyvsp[-1].expression); }
#line 2079 "dlls/vbscript/parser.tab.c"
    break;

  case 14: /* BodyStatements: %empty  */
#line 183 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = NULL; }
#line 2085 "dlls/vbscript/parser.tab.c"
    break;

  case 15: /* BodyStatements: Statement  */
#line 184 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = (yyvsp[0].statement); }
#line 2091 "dlls/vbscript/parser.tab.c"
    break;

  case 16: /* BodyStatements: StatementNl BodyStatements  */
#line 185 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = link_statements((yyvsp[-1].statement), (yyvsp[0].statement)); }
#line 2097 "dlls/vbscript/parser.tab.c"
    break;

  case 17: /* StatementsNl_opt: %empty  */
#line 188 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = NULL; }
#line 2103 "dlls/vbscript/parser.tab.c"
    break;

  case 18: /* StatementsNl_opt: StatementsNl  */
#line 189 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = (yyvsp[0].statement); }
#line 2109 "dlls/vbscript/parser.tab.c"
    break;

  case 19: /* StatementsNl: SimpleStatement StSep  */
#line 192 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = (yyvsp[-1].statement); }
#line 2115 "dlls/vbscript/parser.tab.c"
    break;

  case 20: /* StatementsNl: SimpleStatement StSep StatementsNl  */
#line 193 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = link_statements((yyvsp[-2].statement), (yyvsp[0].statement)); }
#line 2121 "dlls/vbscript/parser.tab.c"
    break;

  case 21: /* StatementNl: Statement tNL  */
#line 196 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = (yyvsp[-1].statement); }
#line 2127 "dlls/vbscript/parser.tab.c"
    break;

  case 22: /* Statement: ':'  */
#line 199 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = NULL; }
#line 2133 "dlls/vbscript/parser.tab.c"
    break;

  case 23: /* Statement: ':' Statement  */
#line 200 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = (yyvsp[0].statement); }
#line 2139 "dlls/vbscript/parser.tab.c"
    break;

  case 24: /* Statement: SimpleStatement  */
#line 201 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = (yyvsp[0].statement); }
#line 2145 "dlls/vbscript/parser.tab.c"
    break;

  case 25: /* Statement: SimpleStatement ':' Statement  */
#line 202 "dlls/vbscript/parser.y"
                                            { (yyvsp[-2].statement)->next = (yyvsp[0].statement); (yyval.statement) = (yyvsp[-2].statement); }
#line 2151 "dlls/vbscript/parser.tab.c"
    break;

  case 26: /* Statement: SimpleStatement ':'  */
#line 203 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = (yyvsp[-1].statement); }
#line 2157 "dlls/vbscript/parser.tab.c"
    break;

  case 27: /* SimpleStatement: CallExpression ArgumentList_opt  */
#line 206 "dlls/vbscript/parser.y"
                                            { call_expression_t *call_expr = make_call_expression(ctx, (yyvsp[-1].expression), (yyvsp[0].expression)); CHECK_ERROR;
                                              (yyval.statement) = new_call_statement(ctx, (yyloc), &call_expr->expr); CHECK_ERROR; }
#line 2164 "dlls/vbscript/parser.tab.c"
    break;

  case 28: /* SimpleStatement: tCALL UnaryExpression  */
#line 208 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_call_statement(ctx, (yyloc), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2170 "dlls/vbscript/parser.tab.c"
    break;

  case 29: /* SimpleStatement: CallExpression '=' Expression  */
#line 210 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_assign_statement(ctx, (yyloc), (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2176 "dlls/vbscript/parser.tab.c"
    break;

  case 30: /* SimpleStatement: tDIM DimDeclList  */
#line 211 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_dim_statement(ctx, (yyloc), (yyvsp[0].dim_decl)); CHECK_ERROR; }
#line 2182 "dlls/vbscript/parser.tab.c"
    break;

  case 31: /* SimpleStatement: tREDIM Preserve_opt tIdentifier '(' ArgumentList ')'  */
#line 213 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_redim_statement(ctx, (yyloc), (yyvsp[-3].string), (yyvsp[-4].boolean), (yyvsp[-1].expression)); CHECK_ERROR; }
#line 2188 "dlls/vbscript/parser.tab.c"
    break;

  case 32: /* SimpleStatement: IfStatement  */
#line 214 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = (yyvsp[0].statement); }
#line 2194 "dlls/vbscript/parser.tab.c"
    break;

  case 33: /* SimpleStatement: tWHILE Expression StSep StatementsNl_opt tWEND  */
#line 216 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_while_statement(ctx, (yyloc), STAT_WHILE, (yyvsp[-3].expression), (yyvsp[-1].statement)); CHECK_ERROR; }
#line 2200 "dlls/vbscript/parser.tab.c"
    break;

  case 34: /* SimpleStatement: tDO DoType Expression StSep StatementsNl_opt tLOOP  */
#line 218 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_while_statement(ctx, (yyloc), (yyvsp[-4].boolean) ? STAT_WHILELOOP : STAT_UNTIL, (yyvsp[-3].expression), (yyvsp[-1].statement));
                                              CHECK_ERROR; }
#line 2207 "dlls/vbscript/parser.tab.c"
    break;

  case 35: /* SimpleStatement: tDO StSep StatementsNl_opt tLOOP DoType Expression  */
#line 221 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_while_statement(ctx, (yylsp[-2]), (yyvsp[-1].boolean) ? STAT_DOWHILE : STAT_DOUNTIL, (yyvsp[0].expression), (yyvsp[-3].statement));
                                              CHECK_ERROR; }
#line 2214 "dlls/vbscript/parser.tab.c"
    break;

  case 36: /* SimpleStatement: tDO StSep StatementsNl_opt tLOOP  */
#line 223 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_while_statement(ctx, (yyloc), STAT_DOWHILE, NULL, (yyvsp[-1].statement)); CHECK_ERROR; }
#line 2220 "dlls/vbscript/parser.tab.c"
    break;

  case 37: /* SimpleStatement: FunctionDecl  */
#line 224 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_function_statement(ctx, (yyloc), (yyvsp[0].func_decl)); CHECK_ERROR; }
#line 2226 "dlls/vbscript/parser.tab.c"
    break;

  case 38: /* SimpleStatement: tEXIT tDO  */
#line 225 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_statement(ctx, STAT_EXITDO, 0, (yyloc)); CHECK_ERROR; }
#line 2232 "dlls/vbscript/parser.tab.c"
    break;

  case 39: /* SimpleStatement: tEXIT tFOR  */
#line 226 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_statement(ctx, STAT_EXITFOR, 0, (yyloc)); CHECK_ERROR; }
#line 2238 "dlls/vbscript/parser.tab.c"
    break;

  case 40: /* SimpleStatement: tEXIT tFUNCTION  */
#line 227 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_statement(ctx, STAT_EXITFUNC, 0, (yyloc)); CHECK_ERROR; }
#line 2244 "dlls/vbscript/parser.tab.c"
    break;

  case 41: /* SimpleStatement: tEXIT tPROPERTY  */
#line 228 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_statement(ctx, STAT_EXITPROP, 0, (yyloc)); CHECK_ERROR; }
#line 2250 "dlls/vbscript/parser.tab.c"
    break;

  case 42: /* SimpleStatement: tEXIT tSUB  */
#line 229 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_statement(ctx, STAT_EXITSUB, 0, (yyloc)); CHECK_ERROR; }
#line 2256 "dlls/vbscript/parser.tab.c"
    break;

  case 43: /* SimpleStatement: tSET CallExpression '=' Expression  */
#line 230 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_set_statement(ctx, (yyloc), (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2262 "dlls/vbscript/parser.tab.c"
    break;

  case 44: /* SimpleStatement: tSTOP  */
#line 231 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_statement(ctx, STAT_STOP, 0, (yyloc)); CHECK_ERROR; }
#line 2268 "dlls/vbscript/parser.tab.c"
    break;

  case 45: /* SimpleStatement: tON tERROR tRESUME tNEXT  */
#line 232 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_onerror_statement(ctx, (yyloc), TRUE); CHECK_ERROR; }
#line 2274 "dlls/vbscript/parser.tab.c"
    break;

  case 46: /* SimpleStatement: tON tERROR tGOTO '0'  */
#line 233 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_onerror_statement(ctx, (yyloc), FALSE); CHECK_ERROR; }
#line 2280 "dlls/vbscript/parser.tab.c"
    break;

  case 47: /* SimpleStatement: tCONST ConstDeclList  */
#line 234 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_const_statement(ctx, (yyloc), (yyvsp[0].const_decl)); CHECK_ERROR; }
#line 2286 "dlls/vbscript/parser.tab.c"
    break;

  case 48: /* SimpleStatement: tFOR Identifier '=' Expression tTO Expression Step_opt StSep StatementsNl_opt tNEXT  */
#line 236 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_forto_statement(ctx, (yyloc), (yyvsp[-8].string), (yyvsp[-6].expression), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-1].statement)); CHECK_ERROR; }
#line 2292 "dlls/vbscript/parser.tab.c"
    break;

  case 49: /* SimpleStatement: tFOR tEACH Identifier tIN Expression StSep StatementsNl_opt tNEXT  */
#line 238 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_foreach_statement(ctx, (yyloc), (yyvsp[-5].string), (yyvsp[-3].expression), (yyvsp[-1].statement)); }
#line 2298 "dlls/vbscript/parser.tab.c"
    break;

  case 50: /* SimpleStatement: tSELECT tCASE Expression StSep CaseClausules tEND tSELECT  */
#line 240 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_select_statement(ctx, (yyloc), (yyvsp[-4].expression), (yyvsp[-2].case_clausule)); }
#line 2304 "dlls/vbscript/parser.tab.c"
    break;

  case 51: /* SimpleStatement: tWITH Expression StSep StatementsNl_opt tEND tWITH  */
#line 242 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = new_with_statement(ctx, (yyloc), (yyvsp[-4].expression), (yyvsp[-2].statement)); }
#line 2310 "dlls/vbscript/parser.tab.c"
    break;

  case 52: /* MemberExpression: Identifier  */
#line 245 "dlls/vbscript/parser.y"
                                            { (yyval.member) = new_member_expression(ctx, NULL, (yyvsp[0].string)); CHECK_ERROR; }
#line 2316 "dlls/vbscript/parser.tab.c"
    break;

  case 53: /* MemberExpression: CallExpression '.' tIdentifier  */
#line 246 "dlls/vbscript/parser.y"
                                            { (yyval.member) = new_member_expression(ctx, (yyvsp[-2].expression), (yyvsp[0].string)); CHECK_ERROR; }
#line 2322 "dlls/vbscript/parser.tab.c"
    break;

  case 54: /* MemberExpression: tDOT tIdentifier  */
#line 247 "dlls/vbscript/parser.y"
                                            { expression_t *dot_expr = new_expression(ctx, EXPR_DOT, sizeof(*dot_expr)); CHECK_ERROR;
                                              (yyval.member) = new_member_expression(ctx, dot_expr, (yyvsp[0].string)); CHECK_ERROR; }
#line 2329 "dlls/vbscript/parser.tab.c"
    break;

  case 55: /* Preserve_opt: %empty  */
#line 251 "dlls/vbscript/parser.y"
                                            { (yyval.boolean) = FALSE; }
#line 2335 "dlls/vbscript/parser.tab.c"
    break;

  case 56: /* Preserve_opt: tPRESERVE  */
#line 252 "dlls/vbscript/parser.y"
                                            { (yyval.boolean) = TRUE; }
#line 2341 "dlls/vbscript/parser.tab.c"
    break;

  case 57: /* DimDeclList: DimDecl  */
#line 255 "dlls/vbscript/parser.y"
                                            { (yyval.dim_decl) = (yyvsp[0].dim_decl); }
#line 2347 "dlls/vbscript/parser.tab.c"
    break;

  case 58: /* DimDeclList: DimDecl ',' DimDeclList  */
#line 256 "dlls/vbscript/parser.y"
                                            { (yyvsp[-2].dim_decl)->next = (yyvsp[0].dim_decl); (yyval.dim_decl) = (yyvsp[-2].dim_decl); }
#line 2353 "dlls/vbscript/parser.tab.c"
    break;

  case 59: /* DimDecl: Identifier  */
#line 259 "dlls/vbscript/parser.y"
                                            { (yyval.dim_decl) = new_dim_decl(ctx, (yyvsp[0].string), FALSE, NULL); CHECK_ERROR; }
#line 2359 "dlls/vbscript/parser.tab.c"
    break;

  case 60: /* DimDecl: Identifier '(' DimList ')'  */
#line 260 "dlls/vbscript/parser.y"
                                            { (yyval.dim_decl) = new_dim_decl(ctx, (yyvsp[-3].string), TRUE, (yyvsp[-1].dim_list)); CHECK_ERROR; }
#line 2365 "dlls/vbscript/parser.tab.c"
    break;

  case 61: /* DimDecl: Identifier tEMPTYBRACKETS  */
#line 261 "dlls/vbscript/parser.y"
                                            { (yyval.dim_decl) = new_dim_decl(ctx, (yyvsp[-1].string), TRUE, NULL); CHECK_ERROR; }
#line 2371 "dlls/vbscript/parser.tab.c"
    break;

  case 62: /* DimList: IntegerValue  */
#line 264 "dlls/vbscript/parser.y"
                                            { (yyval.dim_list) = new_dim(ctx, (yyvsp[0].uint), NULL); }
#line 2377 "dlls/vbscript/parser.tab.c"
    break;

  case 63: /* DimList: IntegerValue ',' DimList  */
#line 265 "dlls/vbscript/parser.y"
                                            { (yyval.dim_list) = new_dim(ctx, (yyvsp[-2].uint), (yyvsp[0].dim_list)); }
#line 2383 "dlls/vbscript/parser.tab.c"
    break;

  case 64: /* ConstDeclList: ConstDecl  */
#line 268 "dlls/vbscript/parser.y"
                                            { (yyval.const_decl) = (yyvsp[0].const_decl); }
#line 2389 "dlls/vbscript/parser.tab.c"
    break;

  case 65: /* ConstDeclList: ConstDecl ',' ConstDeclList  */
#line 269 "dlls/vbscript/parser.y"
                                            { (yyvsp[-2].const_decl)->next = (yyvsp[0].const_decl); (yyval.const_decl) = (yyvsp[-2].const_decl); }
#line 2395 "dlls/vbscript/parser.tab.c"
    break;

  case 66: /* ConstDecl: Identifier '=' ConstExpression  */
#line 272 "dlls/vbscript/parser.y"
                                            { (yyval.const_decl) = new_const_decl(ctx, (yyvsp[-2].string), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2401 "dlls/vbscript/parser.tab.c"
    break;

  case 67: /* ConstExpression: LiteralExpression  */
#line 275 "dlls/vbscript/parser.y"
                                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2407 "dlls/vbscript/parser.tab.c"
    break;

  case 68: /* ConstExpression: '-' NumericLiteralExpression  */
#line 276 "dlls/vbscript/parser.y"
                                            { (yyval.expression) = new_unary_expression(ctx, EXPR_NEG, (yyvsp[0].expression)); CHECK_ERROR; }
#line 2413 "dlls/vbscript/parser.tab.c"
    break;

  case 69: /* DoType: tWHILE  */
#line 279 "dlls/vbscript/parser.y"
                    { (yyval.boolean) = TRUE; }
#line 2419 "dlls/vbscript/parser.tab.c"
    break;

  case 70: /* DoType: tUNTIL  */
#line 280 "dlls/vbscript/parser.y"
                    { (yyval.boolean) = FALSE; }
#line 2425 "dlls/vbscript/parser.tab.c"
    break;

  case 71: /* Step_opt: %empty  */
#line 283 "dlls/vbscript/parser.y"
                                            { (yyval.expression) = NULL;}
#line 2431 "dlls/vbscript/parser.tab.c"
    break;

  case 72: /* Step_opt: tSTEP Expression  */
#line 284 "dlls/vbscript/parser.y"
                                            { (yyval.expression) = (yyvsp[0].expression); }
#line 2437 "dlls/vbscript/parser.tab.c"
    break;

  case 73: /* IfStatement: tIF Expression tTHEN tNL StatementsNl_opt ElseIfs_opt Else_opt tEND tIF  */
#line 288 "dlls/vbscript/parser.y"
                                               { (yyval.statement) = new_if_statement(ctx, (yyloc), (yyvsp[-7].expression), (yyvsp[-4].statement), (yyvsp[-3].elseif), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 2443 "dlls/vbscript/parser.tab.c"
    break;

  case 74: /* IfStatement: tIF Expression tTHEN Statement EndIf_opt  */
#line 289 "dlls/vbscript/parser.y"
                                               { (yyval.statement) = new_if_statement(ctx, (yyloc), (yyvsp[-3].expression), (yyvsp[-1].statement), NULL, NULL); CHECK_ERROR; }
#line 2449 "dlls/vbscript/parser.tab.c"
    break;

  case 75: /* IfStatement: tIF Expression tTHEN Statement tELSE Statement EndIf_opt  */
#line 291 "dlls/vbscript/parser.y"
                                               { (yyval.statement) = new_if_statement(ctx, (yyloc), (yyvsp[-5].expression), (yyvsp[-3].statement), NULL, (yyvsp[-1].statement)); CHECK_ERROR; }
#line 2455 "dlls/vbscript/parser.tab.c"
    break;

  case 78: /* ElseIfs_opt: %empty  */
#line 298 "dlls/vbscript/parser.y"
                                            { (yyval.elseif) = NULL; }
#line 2461 "dlls/vbscript/parser.tab.c"
    break;

  case 79: /* ElseIfs_opt: ElseIfs  */
#line 299 "dlls/vbscript/parser.y"
                                            { (yyval.elseif) = (yyvsp[0].elseif); }
#line 2467 "dlls/vbscript/parser.tab.c"
    break;

  case 80: /* ElseIfs: ElseIf  */
#line 302 "dlls/vbscript/parser.y"
                                            { (yyval.elseif) = (yyvsp[0].elseif); }
#line 2473 "dlls/vbscript/parser.tab.c"
    break;

  case 81: /* ElseIfs: ElseIf ElseIfs  */
#line 303 "dlls/vbscript/parser.y"
                                            { (yyvsp[-1].elseif)->next = (yyvsp[0].elseif); (yyval.elseif) = (yyvsp[-1].elseif); }
#line 2479 "dlls/vbscript/parser.tab.c"
    break;

  case 82: /* ElseIf: tELSEIF Expression tTHEN tNL StatementsNl_opt  */
#line 307 "dlls/vbscript/parser.y"
                                            { (yyval.elseif) = new_elseif_decl(ctx, (yyloc), (yyvsp[-3].expression), (yyvsp[0].statement)); }
#line 2485 "dlls/vbscript/parser.tab.c"
    break;

  case 83: /* Else_opt: %empty  */
#line 310 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = NULL; }
#line 2491 "dlls/vbscript/parser.tab.c"
    break;

  case 84: /* Else_opt: tELSE tNL StatementsNl_opt  */
#line 311 "dlls/vbscript/parser.y"
                                            { (yyval.statement) = (yyvsp[0].statement); }
#line 2497 "dlls/vbscript/parser.tab.c"
    break;

  case 85: /* CaseClausules: %empty  */
#line 314 "dlls/vbscript/parser.y"
                                           { (yyval.case_clausule) = NULL; }
#line 2503 "dlls/vbscript/parser.tab.c"
    break;

  case 86: /* CaseClausules: tCASE tELSE StSep StatementsNl_opt  */
#line 315 "dlls/vbscript/parser.y"
                                           { (yyval.case_clausule) = new_case_clausule(ctx, NULL, (yyvsp[0].statement), NULL); }
#line 2509 "dlls/vbscript/parser.tab.c"
    break;

  case 87: /* CaseClausules: tCASE ExpressionList StSep StatementsNl_opt CaseClausules  */
#line 317 "dlls/vbscript/parser.y"
                                           { (yyval.case_clausule) = new_case_clausule(ctx, (yyvsp[-3].expression), (yyvsp[-1].statement), (yyvsp[0].case_clausule)); }
#line 2515 "dlls/vbscript/parser.tab.c"
    break;

  case 88: /* Arguments: tEMPTYBRACKETS  */
#line 320 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = NULL; }
#line 2521 "dlls/vbscript/parser.tab.c"
    break;

  case 89: /* Arguments: '(' ArgumentList ')'  */
#line 321 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2527 "dlls/vbscript/parser.tab.c"
    break;

  case 90: /* ArgumentList_opt: %empty  */
#line 324 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = NULL; }
#line 2533 "dlls/vbscript/parser.tab.c"
    break;

  case 91: /* ArgumentList_opt: ArgumentList  */
#line 325 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2539 "dlls/vbscript/parser.tab.c"
    break;

  case 92: /* ArgumentList: Expression  */
#line 328 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2545 "dlls/vbscript/parser.tab.c"
    break;

  case 93: /* ArgumentList: Expression ',' ArgumentList  */
#line 329 "dlls/vbscript/parser.y"
                                    { (yyvsp[-2].expression)->next = (yyvsp[0].expression); (yyval.expression) = (yyvsp[-2].expression); }
#line 2551 "dlls/vbscript/parser.tab.c"
    break;

  case 94: /* ArgumentList: ',' ArgumentList  */
#line 330 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_expression(ctx, EXPR_NOARG, 0); CHECK_ERROR; (yyval.expression)->next = (yyvsp[0].expression); }
#line 2557 "dlls/vbscript/parser.tab.c"
    break;

  case 97: /* ExpressionList: Expression  */
#line 337 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2563 "dlls/vbscript/parser.tab.c"
    break;

  case 98: /* ExpressionList: Expression ',' ExpressionList  */
#line 338 "dlls/vbscript/parser.y"
                                    { (yyvsp[-2].expression)->next = (yyvsp[0].expression); (yyval.expression) = (yyvsp[-2].expression); }
#line 2569 "dlls/vbscript/parser.tab.c"
    break;

  case 99: /* Expression: EqvExpression  */
#line 341 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2575 "dlls/vbscript/parser.tab.c"
    break;

  case 100: /* Expression: Expression tIMP EqvExpression  */
#line 342 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_IMP, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2581 "dlls/vbscript/parser.tab.c"
    break;

  case 101: /* EqvExpression: XorExpression  */
#line 345 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2587 "dlls/vbscript/parser.tab.c"
    break;

  case 102: /* EqvExpression: EqvExpression tEQV XorExpression  */
#line 346 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_EQV, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2593 "dlls/vbscript/parser.tab.c"
    break;

  case 103: /* XorExpression: OrExpression  */
#line 349 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2599 "dlls/vbscript/parser.tab.c"
    break;

  case 104: /* XorExpression: XorExpression tXOR OrExpression  */
#line 350 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_XOR, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2605 "dlls/vbscript/parser.tab.c"
    break;

  case 105: /* OrExpression: AndExpression  */
#line 353 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2611 "dlls/vbscript/parser.tab.c"
    break;

  case 106: /* OrExpression: OrExpression tOR AndExpression  */
#line 354 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_OR, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2617 "dlls/vbscript/parser.tab.c"
    break;

  case 107: /* AndExpression: NotExpression  */
#line 357 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2623 "dlls/vbscript/parser.tab.c"
    break;

  case 108: /* AndExpression: AndExpression tAND NotExpression  */
#line 358 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_AND, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2629 "dlls/vbscript/parser.tab.c"
    break;

  case 109: /* NotExpression: EqualityExpression  */
#line 361 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2635 "dlls/vbscript/parser.tab.c"
    break;

  case 110: /* NotExpression: tNOT NotExpression  */
#line 362 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_unary_expression(ctx, EXPR_NOT, (yyvsp[0].expression)); CHECK_ERROR; }
#line 2641 "dlls/vbscript/parser.tab.c"
    break;

  case 111: /* EqualityExpression: ConcatExpression  */
#line 365 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2647 "dlls/vbscript/parser.tab.c"
    break;

  case 112: /* EqualityExpression: EqualityExpression '=' ConcatExpression  */
#line 366 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2653 "dlls/vbscript/parser.tab.c"
    break;

  case 113: /* EqualityExpression: EqualityExpression tNEQ ConcatExpression  */
#line 367 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_NEQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2659 "dlls/vbscript/parser.tab.c"
    break;

  case 114: /* EqualityExpression: EqualityExpression '>' ConcatExpression  */
#line 368 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_GT, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2665 "dlls/vbscript/parser.tab.c"
    break;

  case 115: /* EqualityExpression: EqualityExpression '<' ConcatExpression  */
#line 369 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_LT, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2671 "dlls/vbscript/parser.tab.c"
    break;

  case 116: /* EqualityExpression: EqualityExpression tGTEQ ConcatExpression  */
#line 370 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_GTEQ, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2677 "dlls/vbscript/parser.tab.c"
    break;

  case 117: /* EqualityExpression: EqualityExpression tLTEQ ConcatExpression  */
#line 371 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_LTEQ, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2683 "dlls/vbscript/parser.tab.c"
    break;

  case 118: /* EqualityExpression: EqualityExpression tIS ConcatExpression  */
#line 372 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_IS, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2689 "dlls/vbscript/parser.tab.c"
    break;

  case 119: /* ConcatExpression: AdditiveExpression  */
#line 375 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2695 "dlls/vbscript/parser.tab.c"
    break;

  case 120: /* ConcatExpression: ConcatExpression '&' AdditiveExpression  */
#line 376 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_CONCAT, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2701 "dlls/vbscript/parser.tab.c"
    break;

  case 121: /* AdditiveExpression: ModExpression  */
#line 379 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2707 "dlls/vbscript/parser.tab.c"
    break;

  case 122: /* AdditiveExpression: AdditiveExpression '+' ModExpression  */
#line 380 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_ADD, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2713 "dlls/vbscript/parser.tab.c"
    break;

  case 123: /* AdditiveExpression: AdditiveExpression '-' ModExpression  */
#line 381 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_SUB, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2719 "dlls/vbscript/parser.tab.c"
    break;

  case 124: /* ModExpression: IntdivExpression  */
#line 384 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2725 "dlls/vbscript/parser.tab.c"
    break;

  case 125: /* ModExpression: ModExpression tMOD IntdivExpression  */
#line 385 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_MOD, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2731 "dlls/vbscript/parser.tab.c"
    break;

  case 126: /* IntdivExpression: MultiplicativeExpression  */
#line 388 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2737 "dlls/vbscript/parser.tab.c"
    break;

  case 127: /* IntdivExpression: IntdivExpression '\\' MultiplicativeExpression  */
#line 390 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_IDIV, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2743 "dlls/vbscript/parser.tab.c"
    break;

  case 128: /* MultiplicativeExpression: ExpExpression  */
#line 393 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2749 "dlls/vbscript/parser.tab.c"
    break;

  case 129: /* MultiplicativeExpression: MultiplicativeExpression '*' ExpExpression  */
#line 395 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_MUL, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2755 "dlls/vbscript/parser.tab.c"
    break;

  case 130: /* MultiplicativeExpression: MultiplicativeExpression '/' ExpExpression  */
#line 397 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_DIV, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2761 "dlls/vbscript/parser.tab.c"
    break;

  case 131: /* ExpExpression: SignExpression  */
#line 400 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = (yyvsp[0].expression); }
#line 2767 "dlls/vbscript/parser.tab.c"
    break;

  case 132: /* ExpExpression: ExpExpression '^' SignExpression  */
#line 401 "dlls/vbscript/parser.y"
                                                { (yyval.expression) = new_binary_expression(ctx, EXPR_EXP, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2773 "dlls/vbscript/parser.tab.c"
    break;

  case 133: /* SignExpression: UnaryExpression  */
#line 404 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2779 "dlls/vbscript/parser.tab.c"
    break;

  case 134: /* SignExpression: '-' SignExpression  */
#line 405 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_unary_expression(ctx, EXPR_NEG, (yyvsp[0].expression)); CHECK_ERROR; }
#line 2785 "dlls/vbscript/parser.tab.c"
    break;

  case 135: /* SignExpression: '+' SignExpression  */
#line 406 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2791 "dlls/vbscript/parser.tab.c"
    break;

  case 136: /* UnaryExpression: LiteralExpression  */
#line 409 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2797 "dlls/vbscript/parser.tab.c"
    break;

  case 137: /* UnaryExpression: CallExpression  */
#line 410 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2803 "dlls/vbscript/parser.tab.c"
    break;

  case 138: /* UnaryExpression: tNEW Identifier  */
#line 411 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_new_expression(ctx, (yyvsp[0].string)); CHECK_ERROR; }
#line 2809 "dlls/vbscript/parser.tab.c"
    break;

  case 139: /* CallExpression: PrimaryExpression  */
#line 414 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2815 "dlls/vbscript/parser.tab.c"
    break;

  case 140: /* CallExpression: MemberExpression  */
#line 415 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = &(yyvsp[0].member)->expr; }
#line 2821 "dlls/vbscript/parser.tab.c"
    break;

  case 141: /* CallExpression: CallExpression Arguments  */
#line 416 "dlls/vbscript/parser.y"
                                    { call_expression_t *expr = new_call_expression(ctx, (yyvsp[-1].expression), (yyvsp[0].expression)); CHECK_ERROR;
                                      (yyval.expression) = &expr->expr; }
#line 2828 "dlls/vbscript/parser.tab.c"
    break;

  case 142: /* LiteralExpression: tTRUE  */
#line 420 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_bool_expression(ctx, VARIANT_TRUE); CHECK_ERROR; }
#line 2834 "dlls/vbscript/parser.tab.c"
    break;

  case 143: /* LiteralExpression: tFALSE  */
#line 421 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_bool_expression(ctx, VARIANT_FALSE); CHECK_ERROR; }
#line 2840 "dlls/vbscript/parser.tab.c"
    break;

  case 144: /* LiteralExpression: tString  */
#line 422 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_string_expression(ctx, (yyvsp[0].string)); CHECK_ERROR; }
#line 2846 "dlls/vbscript/parser.tab.c"
    break;

  case 145: /* LiteralExpression: tDate  */
#line 423 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_date_expression(ctx, (yyvsp[0].date)); CHECK_ERROR; }
#line 2852 "dlls/vbscript/parser.tab.c"
    break;

  case 146: /* LiteralExpression: NumericLiteralExpression  */
#line 424 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2858 "dlls/vbscript/parser.tab.c"
    break;

  case 147: /* LiteralExpression: tEMPTY  */
#line 425 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_expression(ctx, EXPR_EMPTY, 0); CHECK_ERROR; }
#line 2864 "dlls/vbscript/parser.tab.c"
    break;

  case 148: /* LiteralExpression: tNULL  */
#line 426 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_expression(ctx, EXPR_NULL, 0); CHECK_ERROR; }
#line 2870 "dlls/vbscript/parser.tab.c"
    break;

  case 149: /* LiteralExpression: tNOTHING  */
#line 427 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_expression(ctx, EXPR_NOTHING, 0); CHECK_ERROR; }
#line 2876 "dlls/vbscript/parser.tab.c"
    break;

  case 150: /* NumericLiteralExpression: '0'  */
#line 430 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_long_expression(ctx, EXPR_INT, 0); CHECK_ERROR; }
#line 2882 "dlls/vbscript/parser.tab.c"
    break;

  case 151: /* NumericLiteralExpression: tInt  */
#line 431 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_long_expression(ctx, EXPR_INT, (yyvsp[0].integer)); CHECK_ERROR; }
#line 2888 "dlls/vbscript/parser.tab.c"
    break;

  case 152: /* NumericLiteralExpression: tDouble  */
#line 432 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_double_expression(ctx, (yyvsp[0].dbl)); CHECK_ERROR; }
#line 2894 "dlls/vbscript/parser.tab.c"
    break;

  case 153: /* IntegerValue: '0'  */
#line 435 "dlls/vbscript/parser.y"
                                    { (yyval.uint) = 0; }
#line 2900 "dlls/vbscript/parser.tab.c"
    break;

  case 154: /* IntegerValue: tInt  */
#line 436 "dlls/vbscript/parser.y"
                                    { (yyval.uint) = (yyvsp[0].integer); }
#line 2906 "dlls/vbscript/parser.tab.c"
    break;

  case 155: /* PrimaryExpression: tEXPRLBRACKET Expression ')'  */
#line 439 "dlls/vbscript/parser.y"
                                              { (yyval.expression) = new_unary_expression(ctx, EXPR_BRACKETS, (yyvsp[-1].expression)); }
#line 2912 "dlls/vbscript/parser.tab.c"
    break;

  case 156: /* PrimaryExpression: tME  */
#line 440 "dlls/vbscript/parser.y"
                                    { (yyval.expression) = new_expression(ctx, EXPR_ME, 0); CHECK_ERROR; }
#line 2918 "dlls/vbscript/parser.tab.c"
    break;

  case 157: /* ClassDeclaration: tCLASS Identifier StSep ClassBody tEND tCLASS StSep  */
#line 443 "dlls/vbscript/parser.y"
                                                                { (yyvsp[-3].class_decl)->name = (yyvsp[-5].string); (yyval.class_decl) = (yyvsp[-3].class_decl); }
#line 2924 "dlls/vbscript/parser.tab.c"
    break;

  case 158: /* ClassBody: %empty  */
#line 446 "dlls/vbscript/parser.y"
                                                  { (yyval.class_decl) = new_class_decl(ctx); }
#line 2930 "dlls/vbscript/parser.tab.c"
    break;

  case 159: /* ClassBody: FunctionDecl  */
#line 447 "dlls/vbscript/parser.y"
                                                  { (yyval.class_decl) = add_class_function(ctx, new_class_decl(ctx), (yyvsp[0].func_decl)); CHECK_ERROR; }
#line 2936 "dlls/vbscript/parser.tab.c"
    break;

  case 160: /* ClassBody: FunctionDecl StSep ClassBody  */
#line 448 "dlls/vbscript/parser.y"
                                                  { (yyval.class_decl) = add_class_function(ctx, (yyvsp[0].class_decl), (yyvsp[-2].func_decl)); CHECK_ERROR; }
#line 2942 "dlls/vbscript/parser.tab.c"
    break;

  case 161: /* ClassBody: Storage tIdentifier  */
#line 450 "dlls/vbscript/parser.y"
                                                  { dim_decl_t *dim_decl = new_dim_decl(ctx, (yyvsp[0].string), FALSE, NULL); CHECK_ERROR;
                                                  (yyval.class_decl) = add_dim_prop(ctx, new_class_decl(ctx), dim_decl, (yyvsp[-1].uint)); CHECK_ERROR; }
#line 2949 "dlls/vbscript/parser.tab.c"
    break;

  case 162: /* ClassBody: Storage tIdentifier StSep ClassBody  */
#line 452 "dlls/vbscript/parser.y"
                                                  { dim_decl_t *dim_decl = new_dim_decl(ctx, (yyvsp[-2].string), FALSE, NULL); CHECK_ERROR;
                                                  (yyval.class_decl) = add_dim_prop(ctx, (yyvsp[0].class_decl), dim_decl, (yyvsp[-3].uint)); CHECK_ERROR; }
#line 2956 "dlls/vbscript/parser.tab.c"
    break;

  case 163: /* ClassBody: tDIM DimDecl  */
#line 454 "dlls/vbscript/parser.y"
                                                  { (yyval.class_decl) = add_dim_prop(ctx, new_class_decl(ctx), (yyvsp[0].dim_decl), 0); CHECK_ERROR; }
#line 2962 "dlls/vbscript/parser.tab.c"
    break;

  case 164: /* ClassBody: tDIM DimDecl StSep ClassBody  */
#line 455 "dlls/vbscript/parser.y"
                                                  { (yyval.class_decl) = add_dim_prop(ctx, (yyvsp[0].class_decl), (yyvsp[-2].dim_decl), 0); CHECK_ERROR; }
#line 2968 "dlls/vbscript/parser.tab.c"
    break;

  case 165: /* ClassBody: PropertyDecl  */
#line 456 "dlls/vbscript/parser.y"
                                                  { (yyval.class_decl) = add_class_function(ctx, new_class_decl(ctx), (yyvsp[0].func_decl)); CHECK_ERROR; }
#line 2974 "dlls/vbscript/parser.tab.c"
    break;

  case 166: /* ClassBody: PropertyDecl StSep ClassBody  */
#line 457 "dlls/vbscript/parser.y"
                                                  { (yyval.class_decl) = add_class_function(ctx, (yyvsp[0].class_decl), (yyvsp[-2].func_decl)); CHECK_ERROR; }
#line 2980 "dlls/vbscript/parser.tab.c"
    break;

  case 167: /* PropertyDecl: Storage_opt tPROPERTY tGET Identifier ArgumentsDecl_opt StSep BodyStatements tEND tPROPERTY  */
#line 461 "dlls/vbscript/parser.y"
                                    { (yyval.func_decl) = new_function_decl(ctx, (yyvsp[-5].string), FUNC_PROPGET, (yyvsp[-8].uint), (yyvsp[-4].arg_decl), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 2986 "dlls/vbscript/parser.tab.c"
    break;

  case 168: /* PropertyDecl: Storage_opt tPROPERTY tLET Identifier '(' ArgumentDeclList ')' StSep BodyStatements tEND tPROPERTY  */
#line 463 "dlls/vbscript/parser.y"
                                    { (yyval.func_decl) = new_function_decl(ctx, (yyvsp[-7].string), FUNC_PROPLET, (yyvsp[-10].uint), (yyvsp[-5].arg_decl), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 2992 "dlls/vbscript/parser.tab.c"
    break;

  case 169: /* PropertyDecl: Storage_opt tPROPERTY tSET Identifier '(' ArgumentDeclList ')' StSep BodyStatements tEND tPROPERTY  */
#line 465 "dlls/vbscript/parser.y"
                                    { (yyval.func_decl) = new_function_decl(ctx, (yyvsp[-7].string), FUNC_PROPSET, (yyvsp[-10].uint), (yyvsp[-5].arg_decl), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 2998 "dlls/vbscript/parser.tab.c"
    break;

  case 170: /* FunctionDecl: Storage_opt tSUB Identifier ArgumentsDecl_opt StSep BodyStatements tEND tSUB  */
#line 469 "dlls/vbscript/parser.y"
                                    { (yyval.func_decl) = new_function_decl(ctx, (yyvsp[-5].string), FUNC_SUB, (yyvsp[-7].uint), (yyvsp[-4].arg_decl), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 3004 "dlls/vbscript/parser.tab.c"
    break;

  case 171: /* FunctionDecl: Storage_opt tFUNCTION Identifier ArgumentsDecl_opt StSep BodyStatements tEND tFUNCTION  */
#line 471 "dlls/vbscript/parser.y"
                                    { (yyval.func_decl) = new_function_decl(ctx, (yyvsp[-5].string), FUNC_FUNCTION, (yyvsp[-7].uint), (yyvsp[-4].arg_decl), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 3010 "dlls/vbscript/parser.tab.c"
    break;

  case 172: /* Storage_opt: %empty  */
#line 474 "dlls/vbscript/parser.y"
                                    { (yyval.uint) = 0; }
#line 3016 "dlls/vbscript/parser.tab.c"
    break;

  case 173: /* Storage_opt: Storage  */
#line 475 "dlls/vbscript/parser.y"
                                    { (yyval.uint) = (yyvsp[0].uint); }
#line 3022 "dlls/vbscript/parser.tab.c"
    break;

  case 174: /* Storage: tPUBLIC tDEFAULT  */
#line 478 "dlls/vbscript/parser.y"
                                    { (yyval.uint) = STORAGE_IS_DEFAULT; }
#line 3028 "dlls/vbscript/parser.tab.c"
    break;

  case 175: /* Storage: tPUBLIC  */
#line 479 "dlls/vbscript/parser.y"
                                    { (yyval.uint) = 0; }
#line 3034 "dlls/vbscript/parser.tab.c"
    break;

  case 176: /* Storage: tPRIVATE  */
#line 480 "dlls/vbscript/parser.y"
                                    { (yyval.uint) = STORAGE_IS_PRIVATE; }
#line 3040 "dlls/vbscript/parser.tab.c"
    break;

  case 177: /* ArgumentsDecl_opt: EmptyBrackets_opt  */
#line 483 "dlls/vbscript/parser.y"
                                                { (yyval.arg_decl) = NULL; }
#line 3046 "dlls/vbscript/parser.tab.c"
    break;

  case 178: /* ArgumentsDecl_opt: '(' ArgumentDeclList ')'  */
#line 484 "dlls/vbscript/parser.y"
                                                { (yyval.arg_decl) = (yyvsp[-1].arg_decl); }
#line 3052 "dlls/vbscript/parser.tab.c"
    break;

  case 179: /* ArgumentDeclList: ArgumentDecl  */
#line 487 "dlls/vbscript/parser.y"
                                                { (yyval.arg_decl) = (yyvsp[0].arg_decl); }
#line 3058 "dlls/vbscript/parser.tab.c"
    break;

  case 180: /* ArgumentDeclList: ArgumentDecl ',' ArgumentDeclList  */
#line 488 "dlls/vbscript/parser.y"
                                                { (yyvsp[-2].arg_decl)->next = (yyvsp[0].arg_decl); (yyval.arg_decl) = (yyvsp[-2].arg_decl); }
#line 3064 "dlls/vbscript/parser.tab.c"
    break;

  case 181: /* ArgumentDecl: Identifier EmptyBrackets_opt  */
#line 491 "dlls/vbscript/parser.y"
                                                { (yyval.arg_decl) = new_argument_decl(ctx, (yyvsp[-1].string), TRUE); }
#line 3070 "dlls/vbscript/parser.tab.c"
    break;

  case 182: /* ArgumentDecl: tBYREF Identifier EmptyBrackets_opt  */
#line 492 "dlls/vbscript/parser.y"
                                                { (yyval.arg_decl) = new_argument_decl(ctx, (yyvsp[-1].string), TRUE); }
#line 3076 "dlls/vbscript/parser.tab.c"
    break;

  case 183: /* ArgumentDecl: tBYVAL Identifier EmptyBrackets_opt  */
#line 493 "dlls/vbscript/parser.y"
                                                { (yyval.arg_decl) = new_argument_decl(ctx, (yyvsp[-1].string), FALSE); }
#line 3082 "dlls/vbscript/parser.tab.c"
    break;

  case 184: /* Identifier: tIdentifier  */
#line 497 "dlls/vbscript/parser.y"
                     { (yyval.string) = (yyvsp[0].string); }
#line 3088 "dlls/vbscript/parser.tab.c"
    break;

  case 185: /* Identifier: tDEFAULT  */
#line 498 "dlls/vbscript/parser.y"
                     { ctx->last_token = tIdentifier; (yyval.string) = (yyvsp[0].string); }
#line 3094 "dlls/vbscript/parser.tab.c"
    break;

  case 186: /* Identifier: tERROR  */
#line 499 "dlls/vbscript/parser.y"
                     { ctx->last_token = tIdentifier; (yyval.string) = (yyvsp[0].string); }
#line 3100 "dlls/vbscript/parser.tab.c"
    break;

  case 187: /* Identifier: tEXPLICIT  */
#line 500 "dlls/vbscript/parser.y"
                     { ctx->last_token = tIdentifier; (yyval.string) = (yyvsp[0].string); }
#line 3106 "dlls/vbscript/parser.tab.c"
    break;

  case 188: /* Identifier: tPROPERTY  */
#line 501 "dlls/vbscript/parser.y"
                     { ctx->last_token = tIdentifier; (yyval.string) = (yyvsp[0].string); }
#line 3112 "dlls/vbscript/parser.tab.c"
    break;

  case 189: /* Identifier: tSTEP  */
#line 502 "dlls/vbscript/parser.y"
                     { ctx->last_token = tIdentifier; (yyval.string) = (yyvsp[0].string); }
#line 3118 "dlls/vbscript/parser.tab.c"
    break;


#line 3122 "dlls/vbscript/parser.tab.c"

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
  yytoken = yychar == PARSER_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, ctx, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= PARSER_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == PARSER_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, ctx);
          yychar = PARSER_EMPTY;
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, ctx);
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
  yyerror (&yylloc, ctx, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != PARSER_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, ctx);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 511 "dlls/vbscript/parser.y"


static int parser_error(unsigned *loc, parser_ctx_t *ctx, const char *str)
{
    if(ctx->error_loc == -1)
        ctx->error_loc = *loc;
    if(ctx->hres == S_OK) {
        FIXME("%s: %s\n", debugstr_w(ctx->code + *loc), debugstr_a(str));
        ctx->hres = E_FAIL;
    }else {
        WARN("%s: %08lx\n", debugstr_w(ctx->code + *loc), ctx->hres);
    }
    return 0;
}

static void source_add_statement(parser_ctx_t *ctx, statement_t *stat)
{
    if(!stat)
        return;

    /* concatenate both linked lists */
    if(ctx->stats) {
        ctx->stats_tail->next = stat;
        ctx->stats_tail = stat;
    }else {
        ctx->stats = ctx->stats_tail = stat;
    }
    /* find new tail */
    while(ctx->stats_tail->next) {
        ctx->stats_tail=ctx->stats_tail->next;
    }
}

static void source_add_class(parser_ctx_t *ctx, class_decl_t *class_decl)
{
    class_decl->next = ctx->class_decls;
    ctx->class_decls = class_decl;
}

static void handle_isexpression_script(parser_ctx_t *ctx, expression_t *expr)
{
    retval_statement_t *stat;

    if(!expr)
        return;

    stat = new_statement(ctx, STAT_RETVAL, sizeof(*stat), 0);
    if(!stat)
        return;

    stat->expr = expr;
    ctx->stats = &stat->stat;
}

static void *new_expression(parser_ctx_t *ctx, expression_type_t type, size_t size)
{
    expression_t *expr;

    expr = parser_alloc(ctx, size ? size : sizeof(*expr));
    if(expr) {
        expr->type = type;
        expr->next = NULL;
    }

    return expr;
}

static expression_t *new_bool_expression(parser_ctx_t *ctx, VARIANT_BOOL value)
{
    bool_expression_t *expr;

    expr = new_expression(ctx, EXPR_BOOL, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = value;
    return &expr->expr;
}

static expression_t *new_string_expression(parser_ctx_t *ctx, const WCHAR *value)
{
    string_expression_t *expr;

    expr = new_expression(ctx, EXPR_STRING, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = value;
    return &expr->expr;
}

static expression_t *new_date_expression(parser_ctx_t *ctx, DATE value)
{
    date_expression_t *expr;

    expr = new_expression(ctx, EXPR_DATE, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = value;
    return &expr->expr;
}

static expression_t *new_long_expression(parser_ctx_t *ctx, expression_type_t type, LONG value)
{
    int_expression_t *expr;

    expr = new_expression(ctx, type, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = value;
    return &expr->expr;
}

static expression_t *new_double_expression(parser_ctx_t *ctx, double value)
{
    double_expression_t *expr;

    expr = new_expression(ctx, EXPR_DOUBLE, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = value;
    return &expr->expr;
}

static expression_t *new_unary_expression(parser_ctx_t *ctx, expression_type_t type, expression_t *subexpr)
{
    unary_expression_t *expr;

    expr = new_expression(ctx, type, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->subexpr = subexpr;
    return &expr->expr;
}

static expression_t *new_binary_expression(parser_ctx_t *ctx, expression_type_t type, expression_t *left, expression_t *right)
{
    binary_expression_t *expr;

    expr = new_expression(ctx, type, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->left = left;
    expr->right = right;
    return &expr->expr;
}

static member_expression_t *new_member_expression(parser_ctx_t *ctx, expression_t *obj_expr, const WCHAR *identifier)
{
    member_expression_t *expr;

    expr = new_expression(ctx, EXPR_MEMBER, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->obj_expr = obj_expr;
    expr->identifier = identifier;
    return expr;
}

static call_expression_t *new_call_expression(parser_ctx_t *ctx, expression_t *expr, expression_t *arguments)
{
    call_expression_t *call_expr;

    call_expr = new_expression(ctx, EXPR_CALL, sizeof(*call_expr));
    if(!call_expr)
        return NULL;

    call_expr->call_expr = expr;
    call_expr->args = arguments;
    return call_expr;
}

static call_expression_t *make_call_expression(parser_ctx_t *ctx, expression_t *callee_expr, expression_t *arguments)
{
    call_expression_t *call_expr;

    if(callee_expr->type == EXPR_MEMBER)
        return new_call_expression(ctx, callee_expr, arguments);
    if(callee_expr->type != EXPR_CALL) {
        FIXME("Unhandled for expr type %u\n", callee_expr->type);
        ctx->hres = E_FAIL;
        return NULL;
    }
    call_expr = (call_expression_t*)callee_expr;
    if(!call_expr->args) {
        call_expr->args = arguments;
        return call_expr;
    }

    if(call_expr->args->next) {
        FIXME("Invalid syntax: invalid use of parentheses for arguments\n");
        ctx->hres = E_FAIL;
        return NULL;
    }

    call_expr->args = new_unary_expression(ctx, EXPR_BRACKETS, call_expr->args);
    if(!call_expr->args)
        return NULL;
    if(!arguments)
        return call_expr;

    if(arguments->type != EXPR_NOARG) {
        FIXME("Invalid syntax: missing comma\n");
        ctx->hres = E_FAIL;
        return NULL;
    }

    call_expr->args->next = arguments->next;
    return call_expr;
}

static expression_t *new_new_expression(parser_ctx_t *ctx, const WCHAR *identifier)
{
    string_expression_t *expr;

    expr = new_expression(ctx, EXPR_NEW, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = identifier;
    return &expr->expr;
}

static void *new_statement(parser_ctx_t *ctx, statement_type_t type, size_t size, unsigned loc)
{
    statement_t *stat;

    stat = parser_alloc(ctx, size ? size : sizeof(*stat));
    if(stat) {
        stat->type = type;
        stat->loc = loc;
        stat->next = NULL;
    }

    return stat;
}

static statement_t *new_call_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr)
{
    call_expression_t *call_expr = NULL;
    call_statement_t *stat;

    stat = new_statement(ctx, STAT_CALL, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    switch(expr->type) {
    case EXPR_MEMBER:
        call_expr = new_call_expression(ctx, expr, NULL);
        break;
    case EXPR_CALL:
        call_expr = (call_expression_t*)expr;
        break;
    default:
        FIXME("Unsupported expr type %u\n", expr->type);
        ctx->hres = E_NOTIMPL;
    }
    if(!call_expr)
        return NULL;

    stat->expr = call_expr;
    return &stat->stat;
}

static statement_t *new_assign_statement(parser_ctx_t *ctx, unsigned loc, expression_t *left, expression_t *right)
{
    assign_statement_t *stat;

    stat = new_statement(ctx, STAT_ASSIGN, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->left_expr = left;
    stat->value_expr = right;

    return &stat->stat;
}

static statement_t *new_set_statement(parser_ctx_t *ctx, unsigned loc, expression_t *left, expression_t *right)
{
    assign_statement_t *stat;

    stat = new_statement(ctx, STAT_SET, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->left_expr = left;
    stat->value_expr = right;

    return &stat->stat;
}

static dim_decl_t *new_dim_decl(parser_ctx_t *ctx, const WCHAR *name, BOOL is_array, dim_list_t *dims)
{
    dim_decl_t *decl;

    decl = parser_alloc(ctx, sizeof(*decl));
    if(!decl)
        return NULL;

    decl->name = name;
    decl->is_array = is_array;
    decl->dims = dims;
    decl->next = NULL;
    return decl;
}

static dim_list_t *new_dim(parser_ctx_t *ctx, unsigned val, dim_list_t *next)
{
    dim_list_t *ret;

    ret = parser_alloc(ctx, sizeof(*ret));
    if(!ret)
        return NULL;

    ret->val = val;
    ret->next = next;
    return ret;
}

static statement_t *new_dim_statement(parser_ctx_t *ctx, unsigned loc, dim_decl_t *decls)
{
    dim_statement_t *stat;

    stat = new_statement(ctx, STAT_DIM, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->dim_decls = decls;
    return &stat->stat;
}

static statement_t *new_redim_statement(parser_ctx_t *ctx, unsigned loc, const WCHAR *identifier, BOOL preserve, expression_t *dims)
{
    redim_statement_t *stat;

    stat = new_statement(ctx, STAT_REDIM, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->identifier = identifier;
    stat->preserve = preserve;
    stat->dims = dims;
    return &stat->stat;
}

static elseif_decl_t *new_elseif_decl(parser_ctx_t *ctx, unsigned loc, expression_t *expr, statement_t *stat)
{
    elseif_decl_t *decl;

    decl = parser_alloc(ctx, sizeof(*decl));
    if(!decl)
        return NULL;

    decl->expr = expr;
    decl->stat = stat;
    decl->loc = loc;
    decl->next = NULL;
    return decl;
}

static statement_t *new_while_statement(parser_ctx_t *ctx, unsigned loc, statement_type_t type, expression_t *expr, statement_t *body)
{
    while_statement_t *stat;

    stat = new_statement(ctx, type, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->expr = expr;
    stat->body = body;
    return &stat->stat;
}

static statement_t *new_forto_statement(parser_ctx_t *ctx, unsigned loc, const WCHAR *identifier, expression_t *from_expr,
        expression_t *to_expr, expression_t *step_expr, statement_t *body)
{
    forto_statement_t *stat;

    stat = new_statement(ctx, STAT_FORTO, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->identifier = identifier;
    stat->from_expr = from_expr;
    stat->to_expr = to_expr;
    stat->step_expr = step_expr;
    stat->body = body;
    return &stat->stat;
}

static statement_t *new_foreach_statement(parser_ctx_t *ctx, unsigned loc, const WCHAR *identifier, expression_t *group_expr,
        statement_t *body)
{
    foreach_statement_t *stat;

    stat = new_statement(ctx, STAT_FOREACH, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->identifier = identifier;
    stat->group_expr = group_expr;
    stat->body = body;
    return &stat->stat;
}

static statement_t *new_if_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr, statement_t *if_stat, elseif_decl_t *elseif_decl,
        statement_t *else_stat)
{
    if_statement_t *stat;

    stat = new_statement(ctx, STAT_IF, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->expr = expr;
    stat->if_stat = if_stat;
    stat->elseifs = elseif_decl;
    stat->else_stat = else_stat;
    return &stat->stat;
}

static statement_t *new_select_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr, case_clausule_t *case_clausules)
{
    select_statement_t *stat;

    stat = new_statement(ctx, STAT_SELECT, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->expr = expr;
    stat->case_clausules = case_clausules;
    return &stat->stat;
}

static statement_t *new_with_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr, statement_t *body)
{
    with_statement_t *stat;

    stat = new_statement(ctx, STAT_WITH, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->expr = expr;
    stat->body = body;
    return &stat->stat;
}

static case_clausule_t *new_case_clausule(parser_ctx_t *ctx, expression_t *expr, statement_t *stat, case_clausule_t *next)
{
    case_clausule_t *ret;

    ret = parser_alloc(ctx, sizeof(*ret));
    if(!ret)
        return NULL;

    ret->expr = expr;
    ret->stat = stat;
    ret->next = next;
    return ret;
}

static statement_t *new_onerror_statement(parser_ctx_t *ctx, unsigned loc, BOOL resume_next)
{
    onerror_statement_t *stat;

    stat = new_statement(ctx, STAT_ONERROR, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->resume_next = resume_next;
    return &stat->stat;
}

static arg_decl_t *new_argument_decl(parser_ctx_t *ctx, const WCHAR *name, BOOL by_ref)
{
    arg_decl_t *arg_decl;

    arg_decl = parser_alloc(ctx, sizeof(*arg_decl));
    if(!arg_decl)
        return NULL;

    arg_decl->name = name;
    arg_decl->by_ref = by_ref;
    arg_decl->next = NULL;
    return arg_decl;
}

static function_decl_t *new_function_decl(parser_ctx_t *ctx, const WCHAR *name, function_type_t type,
        unsigned storage_flags, arg_decl_t *arg_decl, statement_t *body)
{
    function_decl_t *decl;
    BOOL is_default = FALSE;

    if(storage_flags & STORAGE_IS_DEFAULT) {
        if(type == FUNC_PROPGET || type == FUNC_FUNCTION || type == FUNC_SUB) {
            is_default = TRUE;
        }else {
            FIXME("Invalid default property\n");
            ctx->hres = E_FAIL;
            return NULL;
        }
    }

    decl = parser_alloc(ctx, sizeof(*decl));
    if(!decl)
        return NULL;

    decl->name = name;
    decl->type = type;
    decl->is_public = !(storage_flags & STORAGE_IS_PRIVATE);
    decl->is_default = is_default;
    decl->args = arg_decl;
    decl->body = body;
    decl->next = NULL;
    decl->next_prop_func = NULL;
    return decl;
}

static statement_t *new_function_statement(parser_ctx_t *ctx, unsigned loc, function_decl_t *decl)
{
    function_statement_t *stat;

    stat = new_statement(ctx, STAT_FUNC, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->func_decl = decl;
    return &stat->stat;
}

static class_decl_t *new_class_decl(parser_ctx_t *ctx)
{
    class_decl_t *class_decl;

    class_decl = parser_alloc(ctx, sizeof(*class_decl));
    if(!class_decl)
        return NULL;

    class_decl->funcs = NULL;
    class_decl->props = NULL;
    class_decl->next = NULL;
    return class_decl;
}

static class_decl_t *add_class_function(parser_ctx_t *ctx, class_decl_t *class_decl, function_decl_t *decl)
{
    function_decl_t *iter;

    for(iter = class_decl->funcs; iter; iter = iter->next) {
        if(!wcsicmp(iter->name, decl->name)) {
            if(decl->type == FUNC_SUB || decl->type == FUNC_FUNCTION) {
                FIXME("Redefinition of %s::%s\n", debugstr_w(class_decl->name), debugstr_w(decl->name));
                ctx->hres = E_FAIL;
                return NULL;
            }

            while(1) {
                if(iter->type == decl->type) {
                    FIXME("Redefinition of %s::%s\n", debugstr_w(class_decl->name), debugstr_w(decl->name));
                    ctx->hres = E_FAIL;
                    return NULL;
                }
                if(!iter->next_prop_func)
                    break;
                iter = iter->next_prop_func;
            }

            iter->next_prop_func = decl;
            return class_decl;
        }
    }

    decl->next = class_decl->funcs;
    class_decl->funcs = decl;
    return class_decl;
}

static class_decl_t *add_dim_prop(parser_ctx_t *ctx, class_decl_t *class_decl, dim_decl_t *dim_decl, unsigned storage_flags)
{
    if(storage_flags & STORAGE_IS_DEFAULT) {
        FIXME("variant prop van't be default value\n");
        ctx->hres = E_FAIL;
        return NULL;
    }

    dim_decl->is_public = !(storage_flags & STORAGE_IS_PRIVATE);
    dim_decl->next = class_decl->props;
    class_decl->props = dim_decl;
    return class_decl;
}

static const_decl_t *new_const_decl(parser_ctx_t *ctx, const WCHAR *name, expression_t *expr)
{
    const_decl_t *decl;

    decl = parser_alloc(ctx, sizeof(*decl));
    if(!decl)
        return NULL;

    decl->name = name;
    decl->value_expr = expr;
    decl->next = NULL;
    return decl;
}

static statement_t *new_const_statement(parser_ctx_t *ctx, unsigned loc, const_decl_t *decls)
{
    const_statement_t *stat;

    stat = new_statement(ctx, STAT_CONST, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->decls = decls;
    return &stat->stat;
}

static statement_t *link_statements(statement_t *head, statement_t *tail)
{
    statement_t *iter;

    for(iter = head; iter->next; iter = iter->next);
    iter->next = tail;

    return head;
}

void *parser_alloc(parser_ctx_t *ctx, size_t size)
{
    void *ret;

    ret = heap_pool_alloc(&ctx->heap, size);
    if(!ret)
        ctx->hres = E_OUTOFMEMORY;
    return ret;
}

HRESULT parse_script(parser_ctx_t *ctx, const WCHAR *code, const WCHAR *delimiter, DWORD flags)
{
    ctx->code = ctx->ptr = code;
    ctx->end = ctx->code + lstrlenW(ctx->code);

    heap_pool_init(&ctx->heap);

    ctx->hres = S_OK;
    ctx->error_loc = -1;
    ctx->last_token = tNL;
    ctx->last_nl = 0;
    ctx->stats = ctx->stats_tail = NULL;
    ctx->class_decls = NULL;
    ctx->option_explicit = FALSE;
    ctx->is_html = delimiter && !wcsicmp(delimiter, L"</script>");

    if(flags & SCRIPTTEXT_ISEXPRESSION)
        ctx->last_token = tEXPRESSION;

    parser_parse(ctx);

    return ctx->hres;
}

void parser_release(parser_ctx_t *ctx)
{
    heap_pool_free(&ctx->heap);
}
