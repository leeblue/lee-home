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

#line 2 "b.y"
#include<ctype.h>
#include<stdio.h>
#line 22 "y.tab.c"

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

#define NUM 257
#define ID 258
#define IF 259
#define WHILE 260
#define DO 261
#define BREAK 262
#define REAL 263
#define TRUE 264
#define FALSE 265
#define BASIC 266
#define ELSE 267
#define INDEX 268
#define GE 269
#define LE 270
#define NE 271
#define EQ 272
#define AND 273
#define OR 274
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    2,    2,    4,    5,    5,    3,    3,    6,
    6,    8,    8,    7,    7,   10,   10,   10,   10,   10,
   11,   11,    9,    9,   12,   12,   13,   13,   13,   14,
   14,   14,   14,   14,   15,   15,   15,   16,   16,   16,
   17,   17,   17,   18,   18,   18,   18,   18,   18,
};
static const short yylen[] = {                            2,
    1,    4,    0,    2,    3,    4,    1,    0,    2,    1,
    1,    5,    7,    7,    1,    4,    5,    7,    2,    1,
    4,    1,    3,    1,    3,    1,    3,    3,    1,    3,
    3,    3,    3,    1,    3,    3,    1,    3,    3,    1,
    2,    2,    1,    3,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
    3,    0,    1,    0,    7,    0,    4,    0,   22,    0,
    0,    0,    0,    2,   20,    9,   10,   11,   15,    0,
    0,    0,    0,    0,    0,   19,    0,    0,    5,    0,
   46,   47,   48,   49,    0,    0,    0,    0,    0,    0,
    0,   29,    0,    0,   40,   43,    0,    0,    0,    0,
    6,    0,   42,   41,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   21,
   16,   44,    0,   12,    0,    0,   28,   27,    0,    0,
    0,    0,    0,    0,   38,   39,   17,    0,    0,    0,
   14,   13,   18,
};
static const short yydgoto[] = {                          2,
   15,    4,    6,    7,    8,   16,   17,   18,   38,   19,
   39,   40,   41,   42,   43,   44,   45,   46,
};
static const short yysindex[] = {                       -66,
    0,    0,    0, -197,    0, -113,    0,  -83,    0,   38,
   43, -107,   32,    0,    0,    0,    0,    0,    0,  -17,
   44, -139,   37,   37, -141,    0,   37,   37,    0,   27,
    0,    0,    0,    0,   37,   37,   37,  -27,   30, -151,
 -160,    0,   28,   -7,    0,    0,  -18,   83,  -88,  -56,
    0,   12,    0,    0,   37, -107,   37,   37,   37,   37,
   37,   37,   37,   37,   37,   37,   37, -107,   37,    0,
    0,    0, -151,    0, -143, -160,    0,    0,   41,   41,
   41,   41,   -7,   -7,    0,    0,    0,   13, -107,   66,
    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,  -67,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -41,    8,
  -12,    0,  -14,  -34,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    9,    0,  -62,    7,    0,    0,   -8,   -4,
    1,    5,  -28,  -21,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
static const short yygindex[] = {                         0,
  126,    0,    0,    0,    0,   31,    6,   40,   69,    0,
   24,   72,   71,   56,   47,   52,   39,    0,
};
#define YYTABLESIZE 302
static const short yytable[] = {                         45,
   45,   45,   71,   45,   70,   45,   37,   22,   37,    1,
   37,   14,   35,   56,   35,    1,   35,   45,   45,   36,
   45,   36,   68,   36,   37,   37,   34,   37,   26,   20,
   35,   35,   32,   35,   66,   20,   31,   36,   36,   67,
   36,   30,   25,   28,   34,   33,   26,   25,   24,   23,
   32,   45,   72,   90,   31,    8,    1,    8,   37,   30,
   10,   75,   10,   33,   35,   25,   24,   23,    5,   37,
   64,   36,   65,   27,   53,   54,   35,   23,   34,   20,
   26,   36,   24,   64,   32,   65,   74,   62,   31,   63,
   26,   20,   47,   30,   91,   49,   50,   33,   87,   25,
   24,   23,   29,   52,   85,   86,   79,   80,   81,   82,
   58,   59,   20,   77,   78,   83,   84,   30,   48,   51,
   27,   57,   69,   89,   93,    3,   73,   76,   92,    0,
    0,    0,    0,    0,    0,    0,    0,   88,    0,    0,
    0,    0,    0,    0,    9,   10,   11,   12,   13,    0,
    9,   10,   11,   12,   13,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   21,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   55,    0,    0,    0,    0,
    8,    8,    8,    8,    8,   10,   10,   10,   10,   10,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   55,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   45,   45,   45,
   45,   45,   45,    0,   37,   37,   37,   37,   37,   37,
   35,   35,   35,   35,   35,   35,   55,   36,   36,   36,
   36,   36,   36,    0,    0,   55,   34,   34,   34,   34,
   26,   26,   32,   32,   32,   32,   31,   31,   31,   31,
    0,   30,   30,   30,   30,   33,   33,   33,   33,   25,
   25,   24,   23,    0,    0,   55,   55,    0,    0,    0,
    0,    0,    0,   31,    9,    0,   60,   61,    0,   32,
   33,   34,
};
static const short yycheck[] = {                         41,
   42,   43,   59,   45,   93,   47,   41,   91,   43,  123,
   45,  125,   41,   41,   43,  123,   45,   59,   60,   41,
   62,   43,   41,   45,   59,   60,   41,   62,   41,    6,
   59,   60,   41,   62,   42,   12,   41,   59,   60,   47,
   62,   41,   12,   61,   59,   41,   59,   41,   41,   41,
   59,   93,   41,   41,   59,  123,  123,  125,   93,   59,
  123,   56,  125,   59,   93,   59,   59,   59,  266,   33,
   43,   93,   45,   91,   36,   37,   40,   40,   93,   56,
   93,   45,   40,   43,   93,   45,   56,   60,   93,   62,
   59,   68,   24,   93,   89,   27,   28,   93,   68,   93,
   93,   93,   59,   35,   66,   67,   60,   61,   62,   63,
  271,  272,   89,   58,   59,   64,   65,  257,  260,   93,
   91,  273,   40,  267,   59,    0,   55,   57,   89,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   69,   -1,   -1,
   -1,   -1,   -1,   -1,  258,  259,  260,  261,  262,   -1,
  258,  259,  260,  261,  262,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  258,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  274,   -1,   -1,   -1,   -1,
  258,  259,  260,  261,  262,  258,  259,  260,  261,  262,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  274,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  269,  270,  271,
  272,  273,  274,   -1,  269,  270,  271,  272,  273,  274,
  269,  270,  271,  272,  273,  274,  274,  269,  270,  271,
  272,  273,  274,   -1,   -1,  274,  271,  272,  273,  274,
  273,  274,  271,  272,  273,  274,  271,  272,  273,  274,
   -1,  271,  272,  273,  274,  271,  272,  273,  274,  273,
  274,  274,  274,   -1,   -1,  274,  274,   -1,   -1,   -1,
   -1,   -1,   -1,  257,  258,   -1,  269,  270,   -1,  263,
  264,  265,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 274
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"NUM","ID","IF","WHILE","DO","BREAK","REAL","TRUE",
"FALSE","BASIC","ELSE","INDEX","GE","LE","NE","EQ","AND","OR",
};
static const char *yyrule[] = {
"$accept : program",
"program : block",
"block : '{' decls stmts '}'",
"decls :",
"decls : decls decl",
"decl : type ID ';'",
"type : type '[' NUM ']'",
"type : BASIC",
"stmts :",
"stmts : stmts stmt",
"stmt : matched_stmt",
"stmt : open_stmt",
"open_stmt : IF '(' booL ')' stmt",
"open_stmt : IF '(' booL ')' matched_stmt ELSE open_stmt",
"matched_stmt : IF '(' booL ')' matched_stmt ELSE matched_stmt",
"matched_stmt : other",
"other : loc '=' booL ';'",
"other : WHILE '(' booL ')' stmt",
"other : DO stmt WHILE '(' booL ')' ';'",
"other : BREAK ';'",
"other : block",
"loc : loc '[' booL ']'",
"loc : ID",
"booL : booL OR join",
"booL : join",
"join : join AND equality",
"join : equality",
"equality : equality EQ rel",
"equality : equality NE rel",
"equality : rel",
"rel : expr '<' expr",
"rel : expr LE expr",
"rel : expr GE expr",
"rel : expr '>' expr",
"rel : expr",
"expr : expr '+' term",
"expr : expr '-' term",
"expr : term",
"term : term '*' unary",
"term : term '/' unary",
"term : unary",
"unary : '!' unary",
"unary : '-' unary",
"unary : factor",
"factor : '(' booL ')'",
"factor : loc",
"factor : NUM",
"factor : REAL",
"factor : TRUE",
"factor : FALSE",

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
#line 78 "b.y"
#include"lex.yy.c"
main(int argc,char **argv)
{
	yyparse();
}
yyerror(char *s)
{
	fprintf(stderr,"error:%s\n",s);
}
#line 319 "y.tab.c"

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
#line 9 "b.y"
	{ printf("program-->block\n"); }
break;
case 2:
#line 11 "b.y"
	{ printf("block-->{decls stmts}\n"); }
break;
case 4:
#line 14 "b.y"
	{ printf("decls-->decls decl\n"); }
break;
case 5:
#line 16 "b.y"
	{ printf("decl-->type id;\n"); }
break;
case 6:
#line 18 "b.y"
	{ printf("type-->type[num]\n"); }
break;
case 7:
#line 19 "b.y"
	{ printf("type-->basic\n"); }
break;
case 9:
#line 22 "b.y"
	{ printf("stmts-->stmts stmt\n"); }
break;
case 10:
#line 24 "b.y"
	{ printf("stmt-->matched_stmt\n");}
break;
case 11:
#line 25 "b.y"
	{ printf("stmt-->open_stmt\n");}
break;
case 12:
#line 27 "b.y"
	{ printf("open_stmt-->if(bool)stmt\n");}
break;
case 13:
#line 28 "b.y"
	{ printf("open_stmt-->if(bool) matched_stmt else open_stmt\n");}
break;
case 14:
#line 30 "b.y"
	{ printf("matched_stmt-->if(bool) matched_stmt else matched_stmt\n");}
break;
case 15:
#line 31 "b.y"
	{ printf("matched_stmt-->other\n");}
break;
case 16:
#line 33 "b.y"
	{ printf("stmt-->loc=bool;\n"); }
break;
case 17:
#line 34 "b.y"
	{ printf("stmt-->while(bool)stmt\n"); }
break;
case 18:
#line 35 "b.y"
	{ printf("stmt-->do stmt while(bool);\n"); }
break;
case 19:
#line 36 "b.y"
	{ printf("stmt-->break;\n"); }
break;
case 20:
#line 37 "b.y"
	{ printf("stmt-->block\n"); }
break;
case 21:
#line 39 "b.y"
	{ printf("loc-->loc[bool]\n"); }
break;
case 22:
#line 40 "b.y"
	{ printf("loc-->id\n"); }
break;
case 23:
#line 42 "b.y"
	{ printf("bool-->bool||join\n"); }
break;
case 24:
#line 43 "b.y"
	{ printf("bool-->join\n"); }
break;
case 25:
#line 45 "b.y"
	{ printf("join-->join&&equality\n"); }
break;
case 26:
#line 46 "b.y"
	{ printf("join-->equality\n"); }
break;
case 27:
#line 48 "b.y"
	{ printf("equality-->equality==rel\n"); }
break;
case 28:
#line 49 "b.y"
	{ printf("equality-->equality!=rel\n"); }
break;
case 29:
#line 50 "b.y"
	{ printf("equality-->rel\n"); }
break;
case 30:
#line 52 "b.y"
	{ printf("rel-->expr<expr\n"); }
break;
case 31:
#line 53 "b.y"
	{ printf("rel-->expr<=expr\n"); }
break;
case 32:
#line 54 "b.y"
	{ printf("rel-->expr>=expr\n"); }
break;
case 33:
#line 55 "b.y"
	{ printf("rel-->expr>expr\n"); }
break;
case 34:
#line 56 "b.y"
	{ printf("rel-->expr\n"); }
break;
case 35:
#line 58 "b.y"
	{ printf("expr-->expr+term\n"); }
break;
case 36:
#line 59 "b.y"
	{ printf("expr-->expr-term\n"); }
break;
case 37:
#line 60 "b.y"
	{ printf("expr-->term\n"); }
break;
case 38:
#line 62 "b.y"
	{ printf("term-->term*unary\n"); }
break;
case 39:
#line 63 "b.y"
	{ printf("term-->term/unary\n"); }
break;
case 40:
#line 64 "b.y"
	{ printf("term-->unary\n"); }
break;
case 41:
#line 66 "b.y"
	{ printf("unary-->!unary\n"); }
break;
case 42:
#line 67 "b.y"
	{ printf("unary-->-unary\n"); }
break;
case 43:
#line 68 "b.y"
	{ printf("unary-->factor\n"); }
break;
case 44:
#line 70 "b.y"
	{ printf("factor-->(bool)\n"); }
break;
case 45:
#line 71 "b.y"
	{ printf("factor-->loc\n"); }
break;
case 46:
#line 72 "b.y"
	{ printf("factor-->num\n"); }
break;
case 47:
#line 73 "b.y"
	{ printf("factor-->real\n"); }
break;
case 48:
#line 74 "b.y"
	{ printf("factor-->true\n"); }
break;
case 49:
#line 75 "b.y"
	{ printf("factor-->false\n"); }
break;
#line 713 "y.tab.c"
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
