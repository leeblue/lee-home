#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130304

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "yacc.y"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#line 24 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define IDENTIFIER 257
#define NUM 258
#define CONST 259
#define VAR 260
#define PROCEDURE 261
#define B 262
#define END 263
#define ODD 264
#define IF 265
#define THEN 266
#define CALL 267
#define WHILE 268
#define DO 269
#define READ 270
#define WRITE 271
#define EQ 272
#define BE 273
#define SE 274
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    1,    1,    1,    1,    2,
    2,    6,    3,    7,    7,    4,    4,    8,    5,    5,
    5,    5,    5,    5,    5,    5,    9,   15,   18,   18,
   16,   19,   19,   17,   17,   17,   22,   22,   21,   21,
   24,   24,   24,   23,   23,   25,   25,   20,   20,   20,
   20,   20,   20,   10,   12,   11,   13,   14,
};
static const short yylen[] = {                            2,
    2,    4,    3,    2,    3,    3,    2,    2,    1,    3,
    3,    3,    3,    1,    3,    3,    5,    3,    1,    1,
    1,    1,    1,    1,    1,    1,    3,    4,    0,    3,
    0,    3,    2,    3,    3,    2,    0,    3,    1,    3,
    1,    1,    3,    1,    1,    1,    1,    2,    1,    1,
    1,    1,    1,    4,    2,    4,    4,    4,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    9,    0,   19,   20,   21,
   22,   23,   24,   25,   26,    0,    0,    0,    0,    0,
    0,   29,   41,   42,    0,    0,    0,    0,    0,    0,
    0,   39,   55,    0,    0,    0,    1,    0,    0,    0,
    4,    0,    7,    8,    0,   27,    0,   10,    0,   13,
   18,    0,   33,    0,    0,    0,   53,   52,    0,   49,
   50,   51,    0,    0,   46,   47,    0,    0,    0,    0,
    0,   11,    0,    3,    5,    6,    0,   12,   15,   28,
    0,    0,    0,   43,   48,   32,   54,   44,   45,    0,
   40,   56,   57,   58,    2,    0,   30,    0,   17,
};
static const short yydgoto[] = {                         11,
   12,   13,   14,   15,   16,   28,   30,   17,   18,   19,
   20,   21,   22,   23,   24,   25,   39,   62,   40,   73,
   41,   77,  100,   42,   78,
};
static const short yysindex[] = {                      -167,
 -259, -241, -235, -216, -125,    9, -207,    9,   38,   39,
    0,   34,   15, -148, -125,    0, -167,    0,    0,    0,
    0,    0,    0,    0,    0,  -22,   20,   23,   40,   26,
   32,    0,    0,    0,  -22,  -28,  -28,  -22,  -32, -170,
    6,    0,    0, -172, -158,  -22,    0, -241, -148, -125,
    0, -125,    0,    0,   43,    0, -147,    0, -235,    0,
    0,  -57,    0,    6,    6,   74,    0,    0,   55,    0,
    0,    0,  -22, -125,    0,    0,  -38,  -28, -125,   77,
   80,    0, -125,    0,    0,    0, -137,    0,    0,    0,
 -125,  -38,  -38,    0,    0,    0,    0,    0,    0,  -28,
    0,    0,    0,    0,    0,   66,    0,    6,    0,
};
static const short yyrindex[] = {                        81,
    0,    0,    0,    0,  -55,    0,    0,    0,    0,    0,
    0,    0,    1,    1,    1,    0,   67,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   69,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -35,    0,    0,    0,    0,    0,    0,    0,    1,    1,
    0,    1,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -35,  -35,    0,    0,    0,    0,    0,
    0,    0,    0,  -14,    0,    0,   -4,    0,  -14,    0,
    0,    0,    1,    0,    0,    0,  -45,    0,    0,    0,
  -55,    5,   27,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -26,    0,
};
static const short yygindex[] = {                         0,
  112,    0,  118,   25,   56,   85,   75,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   37,    0,  128,    0,
    7,   12,    0,   60,    0,
};
#define YYTABLESIZE 301
static const short yytable[] = {                         37,
   16,   91,   70,   31,   98,   37,   99,   37,   38,   37,
   37,   38,   26,   16,   38,   27,   38,   38,   38,   38,
   36,   29,   37,   37,   37,   37,   37,   71,   69,   72,
   36,   31,   38,   38,   38,   38,   36,   50,   52,   34,
   31,   36,   64,   65,   31,   34,   31,   75,   38,   43,
   34,   36,   76,   37,   36,   36,   36,   36,   48,   31,
   32,   35,   56,   34,   34,   34,   34,   35,   51,   53,
   54,   63,   35,   83,   66,   92,   93,   45,   46,   47,
   57,   58,   81,   59,   60,   35,   35,   35,   35,    1,
   61,    2,    3,    4,    5,   74,   79,    6,   80,    7,
    8,   87,    9,   10,   84,   85,  108,   86,    1,   96,
   88,  106,    4,    5,   94,   95,    6,  103,    7,    8,
  104,    9,   10,    4,  109,   31,   31,   14,   55,   97,
   49,    1,   82,   89,  102,   44,    5,  101,  105,    6,
    0,    7,    8,    0,    9,   10,  107,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   90,    0,   31,    0,    0,
    0,   16,    0,    0,    0,    0,   16,    0,    0,   16,
    0,   16,   16,    0,   16,   16,    0,   37,   33,   34,
   37,    0,    0,   37,   33,   34,   38,   37,   37,   38,
   67,   68,   38,    0,    0,    0,   38,   38,   31,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   36,    0,
    0,   36,    0,    0,   36,   33,   34,   34,   36,   36,
   34,    1,   35,   34,    3,    4,    5,   34,   34,    6,
    0,    7,    8,    0,    9,   10,    0,    0,    0,   35,
    0,    0,   35,    0,    0,   35,    0,    0,    0,   35,
   35,
};
static const short yycheck[] = {                         35,
   46,   59,   35,   59,   43,   41,   45,   43,   35,   45,
   46,   40,  272,   59,   41,  257,   43,   40,   45,   46,
   43,  257,   45,   59,   60,   61,   62,   60,   61,   62,
   35,   46,   59,   60,   61,   62,   41,   13,   14,   35,
  257,   46,   36,   37,   59,   41,   46,   42,   40,  257,
   46,   43,   47,   45,   59,   60,   61,   62,   44,   59,
    5,   35,   26,   59,   60,   61,   62,   41,   13,   14,
   15,   35,   46,   49,   38,   64,   65,   40,   40,   46,
   61,   59,   46,   44,   59,   59,   60,   61,   62,  257,
   59,  259,  260,  261,  262,  266,  269,  265,  257,  267,
  268,   59,  270,  271,   49,   50,  100,   52,  257,   73,
  258,   87,  261,  262,   41,   61,  265,   41,  267,  268,
   41,  270,  271,  261,   59,   59,   46,   59,   17,   74,
   13,  257,   48,   59,   79,    8,  262,   78,   83,  265,
   -1,  267,  268,   -1,  270,  271,   91,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  263,   -1,  263,   -1,   -1,
   -1,  257,   -1,   -1,   -1,   -1,  262,   -1,   -1,  265,
   -1,  267,  268,   -1,  270,  271,   -1,  263,  257,  258,
  266,   -1,   -1,  269,  257,  258,  263,  273,  274,  266,
  273,  274,  269,   -1,   -1,   -1,  273,  274,  263,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  263,   -1,
   -1,  266,   -1,   -1,  269,  257,  258,  263,  273,  274,
  266,  257,  264,  269,  260,  261,  262,  273,  274,  265,
   -1,  267,  268,   -1,  270,  271,   -1,   -1,   -1,  263,
   -1,   -1,  266,   -1,   -1,  269,   -1,   -1,   -1,  273,
  274,
};
#define YYFINAL 11
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 274
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"'#'",0,0,0,0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,0,0,0,
0,0,0,"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,"IDENTIFIER","NUM","CONST","VAR","PROCEDURE","B","END","ODD",
"IF","THEN","CALL","WHILE","DO","READ","WRITE","EQ","BE","SE",
};
static const char *yyrule[] = {
"$accept : program",
"program : part_program '.'",
"part_program : constant_illstruction var_instruction process_instruction statment",
"part_program : constant_illstruction var_instruction statment",
"part_program : constant_illstruction statment",
"part_program : constant_illstruction process_instruction statment",
"part_program : var_instruction process_instruction statment",
"part_program : var_instruction statment",
"part_program : process_instruction statment",
"part_program : statment",
"constant_illstruction : CONST const_define ';'",
"constant_illstruction : constant_illstruction ',' const_define",
"const_define : IDENTIFIER '=' NUM",
"var_instruction : VAR var_mid ';'",
"var_mid : IDENTIFIER",
"var_mid : IDENTIFIER ',' var_mid",
"process_instruction : process_head part_program ';'",
"process_instruction : process_head part_program ';' process_instruction ';'",
"process_head : PROCEDURE IDENTIFIER ';'",
"statment : assignment",
"statment : condition",
"statment : circle",
"statment : process_transfer",
"statment : read_statment",
"statment : write_statment",
"statment : complex",
"statment : empty",
"assignment : IDENTIFIER EQ expression",
"complex : B statment addition_complex END",
"addition_complex :",
"addition_complex : addition_complex ';' statment",
"empty :",
"con : expression operation expression",
"con : ODD expression",
"expression : '+' item addition_expression",
"expression : '-' item addition_expression",
"expression : item addition_expression",
"addition_expression :",
"addition_expression : addition_expression plusoperation item",
"item : divisor",
"item : item muloperation divisor",
"divisor : IDENTIFIER",
"divisor : NUM",
"divisor : '(' expression ')'",
"plusoperation : '+'",
"plusoperation : '-'",
"muloperation : '*'",
"muloperation : '/'",
"operation : '=' '='",
"operation : '#'",
"operation : '<'",
"operation : '>'",
"operation : SE",
"operation : BE",
"condition : IF con THEN statment",
"process_transfer : CALL IDENTIFIER",
"circle : WHILE con DO statment",
"read_statment : READ '(' IDENTIFIER ')'",
"write_statment : WRITE '(' expression ')'",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 95 "yacc.y"
#include "lex.yy.c"
void main(int argc,char **argv) 
{
    yyparse();

    }
yyerror(char *s) {
    fprintf(stderr,"...%s\n",s);
} 
#line 337 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 11 "yacc.y"
	{printf("program -> part_program\n");}
break;
case 2:
#line 14 "yacc.y"
	{printf("part_program -> constant_illstruction+var_instruction+process_instruction\n");}
break;
case 3:
#line 15 "yacc.y"
	{printf("part_program -> constant_illstruction+var_instruction\n");}
break;
case 4:
#line 16 "yacc.y"
	{printf("part_program -> constant_illstruction\n");}
break;
case 5:
#line 17 "yacc.y"
	{printf("part_program -> constant_illstruction+process_instruction\n");}
break;
case 6:
#line 18 "yacc.y"
	{printf("part_program -> var_instruction+process_instruction\n");}
break;
case 7:
#line 19 "yacc.y"
	{printf("part_program -> var_instruction\n");}
break;
case 8:
#line 20 "yacc.y"
	{printf("part_program -> process_instruction\n");}
break;
case 9:
#line 21 "yacc.y"
	{printf("part_program -> statment\n");}
break;
case 10:
#line 24 "yacc.y"
	{printf("constant_illstruction -> const_define\n");}
break;
case 11:
#line 25 "yacc.y"
	{printf("constant_illstruction -> constant_illstruction\n");}
break;
case 12:
#line 27 "yacc.y"
	{printf("const_define -> IDENTIFIER\n");}
break;
case 13:
#line 29 "yacc.y"
	{printf("var_instruction -> IDENTIFIER\n");}
break;
case 14:
#line 31 "yacc.y"
	{printf("var_mid -> IDENTIFIER\n");}
break;
case 15:
#line 32 "yacc.y"
	{printf("var_mid -> var_mid \n");}
break;
case 16:
#line 34 "yacc.y"
	{printf("process_instruction -> process_head\n");}
break;
case 17:
#line 35 "yacc.y"
	{printf("process_instruction -> process_head + process_instruction");}
break;
case 18:
#line 37 "yacc.y"
	{printf("process_head -> PROCEDURE\n");}
break;
case 19:
#line 39 "yacc.y"
	{printf("statment -> assignment\n");}
break;
case 20:
#line 40 "yacc.y"
	{printf("statment -> condition\n");}
break;
case 21:
#line 41 "yacc.y"
	{printf("statment -> circle\n");}
break;
case 22:
#line 42 "yacc.y"
	{printf("statment -> process_transfer\n");}
break;
case 23:
#line 43 "yacc.y"
	{printf("statment -> read_statment\n");}
break;
case 24:
#line 44 "yacc.y"
	{printf("statment-> write_statment\n");}
break;
case 25:
#line 45 "yacc.y"
	{printf("statment -> complex\n");}
break;
case 26:
#line 46 "yacc.y"
	{printf("statment -> empty\n");}
break;
case 27:
#line 48 "yacc.y"
	{printf("assignment -> expression\n");}
break;
case 28:
#line 50 "yacc.y"
	{printf("complex -> END\n");}
break;
case 29:
#line 52 "yacc.y"
	{printf("addition_complex -> empty\n");}
break;
case 30:
#line 53 "yacc.y"
	{printf("addition_complex -> addition_complex\n");}
break;
case 31:
#line 55 "yacc.y"
	{printf("empty\n");}
break;
case 32:
#line 57 "yacc.y"
	{printf("con -> expression operation expression\n");}
break;
case 33:
#line 58 "yacc.y"
	{printf("con -> ODD expression\n");}
break;
case 34:
#line 60 "yacc.y"
	{printf("expression -> +\n");}
break;
case 35:
#line 61 "yacc.y"
	{printf("expression -> -\n");}
break;
case 36:
#line 62 "yacc.y"
	{printf("expression -> item\n");}
break;
case 37:
#line 64 "yacc.y"
	{printf("addition_expression -> empty\n");}
break;
case 38:
#line 65 "yacc.y"
	{printf("addition_expression -> self\n");}
break;
case 39:
#line 68 "yacc.y"
	{printf("item -> divisor \n");}
break;
case 40:
#line 69 "yacc.y"
	{printf("item -> item muloperation divisor \n");}
break;
case 41:
#line 71 "yacc.y"
	{printf("divisor -> IDENTIFIER\n");}
break;
case 42:
#line 72 "yacc.y"
	{printf("divisor -> NUM\n");}
break;
case 43:
#line 73 "yacc.y"
	{printf("divisor -> (expression)\n");}
break;
case 44:
#line 75 "yacc.y"
	{printf("plusoperation -> +\n");}
break;
case 45:
#line 76 "yacc.y"
	{printf("plusoperation -> -\n");}
break;
case 46:
#line 78 "yacc.y"
	{printf("muloperation -> *\n");}
break;
case 47:
#line 79 "yacc.y"
	{printf("muloperation -> // /n");}
break;
case 48:
#line 81 "yacc.y"
	{printf("operation -> ==\n");}
break;
case 49:
#line 82 "yacc.y"
	{printf("operation -> #\n");}
break;
case 50:
#line 83 "yacc.y"
	{printf("operation -> <\n");}
break;
case 51:
#line 84 "yacc.y"
	{printf("operation -> >\n");}
break;
case 52:
#line 85 "yacc.y"
	{printf("operation -> SE\n");}
break;
case 53:
#line 86 "yacc.y"
	{printf("operation ->BE");}
break;
case 54:
#line 88 "yacc.y"
	{printf("condition -> IF con THEN statment\n");}
break;
case 55:
#line 89 "yacc.y"
	{printf("process_transfer -> CALL IDENTIFIER\n");}
break;
case 56:
#line 90 "yacc.y"
	{printf("circle -> WHILE con DO statment\n");}
break;
case 57:
#line 91 "yacc.y"
	{printf("read_statment -> READ\n");}
break;
case 58:
#line 93 "yacc.y"
	{printf("write_statment -> WRITE\n");}
break;
#line 775 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
