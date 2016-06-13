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
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
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

#define IF 257
#define THEN 258
#define WHILE 259
#define DO 260
#define READ 261
#define WRITE 262
#define CALL 263
#define BEG 264
#define END 265
#define CONST 266
#define VAR 267
#define PROCEDURE 268
#define ODD 269
#define CONCAT 270
#define MINUS 271
#define MULTI 272
#define DIVIDE 273
#define END_STMT 274
#define OPEN_PAR 275
#define CLOSE_PAR 276
#define PAUSE 277
#define DOT 278
#define ASSIGN 279
#define DASSIGN 280
#define JING 281
#define SM_EQ 282
#define BI_EQ 283
#define SMALL 284
#define BIG 285
#define ID 286
#define NUM 287
#define ERRORTOKEN 288
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    1,    1,    1,    1,    2,
    2,    7,    7,    6,    3,    3,    8,    8,    4,    4,
   10,   10,    9,    5,    5,    5,    5,    5,    5,    5,
    5,   11,   12,   12,   19,   19,   20,   20,   13,   18,
   18,   18,   18,   18,   18,   23,   23,   22,   22,   26,
   26,   25,   25,   25,   24,   24,   27,   27,   21,   21,
   21,   21,   21,   21,   14,   15,   16,   16,   17,   17,
   28,   28,
};
static const short yylen[] = {                            2,
    2,    4,    3,    2,    3,    3,    2,    2,    1,    4,
    3,    3,    2,    3,    4,    3,    2,    3,    4,    3,
    2,    3,    3,    1,    1,    1,    1,    1,    1,    1,
    0,    3,    4,    3,    2,    3,    3,    2,    4,    3,
    3,    2,    1,    2,    2,    3,    2,    2,    1,    3,
    2,    1,    1,    3,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    4,    2,    5,    4,    5,    4,
    3,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    9,    0,   24,   25,   26,
   27,   28,   29,   30,    0,    0,    0,    0,   52,   53,
    0,    0,    0,    0,    0,    0,    0,   66,    0,    0,
    0,    0,    0,    0,    1,    0,    0,    4,    0,    7,
    8,    0,   38,    0,    0,    0,   59,   60,   63,   64,
   61,   62,    0,    0,   55,   56,    0,    0,   57,   58,
    0,    0,    0,    0,    0,   34,    0,    0,    0,   11,
    0,    0,   16,    0,    0,   23,   32,    0,    3,    5,
    6,    0,    0,    0,    0,   54,   37,   39,    0,   47,
    0,   51,   65,   68,    0,   70,    0,    0,   35,   33,
    0,   14,   13,   10,    0,   17,   15,    0,    2,   21,
    0,   46,   50,   67,   72,   69,    0,   36,   12,   18,
   22,   71,
};
static const short yydgoto[] = {                         11,
   12,   13,   14,   15,   16,   41,   82,   85,   17,   93,
   18,   19,   20,   21,   22,   23,   24,   31,   78,   32,
   63,   33,   67,   68,   34,   71,   72,  108,
};
static const short yysindex[] = {                      -238,
 -204, -204, -259, -255, -272, -133, -254, -225, -218, -202,
    0, -190, -205, -141, -133,    0, -238,    0,    0,    0,
    0,    0,    0,    0, -136, -240, -240, -136,    0,    0,
  -21, -154, -234, -222, -148, -167, -136,    0, -221, -143,
 -185, -184, -134, -136,    0, -141, -133,    0, -133,    0,
    0, -130,    0, -234, -234, -118,    0,    0,    0,    0,
    0,    0, -136, -133,    0,    0, -234, -240,    0,    0,
 -222, -240, -133, -166, -162,    0, -133, -210, -120,    0,
 -254, -180,    0, -121, -168,    0,    0, -133,    0,    0,
    0, -100, -105, -234, -234,    0,    0,    0, -240,    0,
 -240,    0,    0,    0, -144,    0, -136, -135,    0,    0,
 -133,    0,    0,    0, -254,    0,    0, -116,    0,    0,
 -100,    0,    0,    0,    0,    0, -136,    0,    0,    0,
    0,    0,
};
static const short yyrindex[] = {                      -106,
    0,    0,    0,    0,    0, -179,    0,    0,    0,    0,
    0,    0, -261, -261, -261,    0, -101,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -79, -122,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -261, -261,    0, -261,    0,
    0,    0,    0,  -64,  -49,    0,    0,    0,    0,    0,
    0,    0,    0, -247,    0,    0,  -34,    0,    0,    0,
  -94,    0, -247,    0,    0,    0, -179,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -261,    0,    0,
    0, -187,    0,   -6,    9,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -179,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -161,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
static const short yygindex[] = {                         0,
  157,    0,  162,  -13,   -4,  -77,    0,  104,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -22,    0,  190,
    0,  -19,   92,  -55,  -67,    0,  122,    0,
};
#define YYTABLESIZE 294
static const short yytable[] = {                         47,
   49,   39,   53,  113,  102,   56,   54,   55,   48,   50,
   51,   99,   31,   38,   75,   36,   31,   31,    1,   37,
    2,   87,    3,    4,    5,    6,   31,    7,    8,    9,
   31,   40,   88,  123,   28,   65,   66,  129,   99,   99,
   97,   89,   90,   76,   91,   29,   30,   10,  100,   69,
   70,    1,   77,    2,  110,    3,    4,    5,    6,   98,
   42,    8,    9,  111,   25,   26,   27,   43,  103,   20,
   28,   20,  109,   20,   20,   20,   20,   44,  120,  122,
   10,   29,   30,  119,  125,   31,   20,   45,   80,   83,
   20,   81,   84,  114,   31,   19,  115,   19,   20,   19,
   19,   19,   19,   64,  132,  117,  128,  131,  118,  104,
   84,   73,   19,  106,  107,    1,   19,    2,   74,    3,
    4,    5,    6,    1,   19,    2,    9,    3,    4,    5,
    6,  124,  118,   26,   27,   49,   79,   49,   28,   86,
  126,  127,   49,   92,   10,   94,   95,   49,   49,   29,
   30,   49,   10,   49,   49,   49,   49,   96,   49,   49,
   49,   49,   49,   48,  116,   48,  112,    9,  121,  130,
   48,   31,   31,   52,   46,   48,   48,  105,   43,   48,
   43,   48,   48,   48,   48,   43,   48,   48,   48,   48,
   48,   35,  101,   44,   43,   44,   43,   43,   43,   43,
   44,   43,   43,   43,   43,   43,    0,    0,   45,   44,
   45,   44,   44,   44,   44,   45,   44,   44,   44,   44,
   44,    0,    0,   42,   45,   42,   45,   45,   45,   45,
   42,   45,   45,   45,   45,   45,    0,    0,    0,   42,
    0,   42,   42,   42,   42,    0,   42,   42,   42,   42,
   42,   40,    0,   40,    0,    0,    0,   57,   40,   58,
   59,   60,   61,   62,    0,    0,   41,   40,   41,   40,
   40,   40,   40,   41,   40,   40,   40,   40,   40,    0,
    0,    0,   41,    0,   41,   41,   41,   41,    0,   41,
   41,   41,   41,   41,
};
static const short yycheck[] = {                         13,
   14,    6,   25,   81,   72,   28,   26,   27,   13,   14,
   15,   67,  274,  286,   37,  275,  278,  265,  257,  275,
  259,   44,  261,  262,  263,  264,  274,  266,  267,  268,
  278,  286,   46,  101,  275,  270,  271,  115,   94,   95,
   63,   46,   47,  265,   49,  286,  287,  286,   68,  272,
  273,  257,  274,  259,  265,  261,  262,  263,  264,   64,
  286,  267,  268,  274,  269,  270,  271,  286,   73,  257,
  275,  259,   77,  261,  262,  263,  264,  280,   92,   99,
  286,  286,  287,   88,  107,  265,  274,  278,  274,  274,
  278,  277,  277,  274,  274,  257,  277,  259,  286,  261,
  262,  263,  264,  258,  127,  274,  111,  121,  277,  276,
  277,  260,  274,  276,  277,  257,  278,  259,  286,  261,
  262,  263,  264,  257,  286,  259,  268,  261,  262,  263,
  264,  276,  277,  270,  271,  258,  280,  260,  275,  274,
  276,  277,  265,  274,  286,   54,   55,  270,  271,  286,
  287,  274,  286,  276,  277,  278,  279,  276,  281,  282,
  283,  284,  285,  258,  286,  260,  287,  268,  274,  286,
  265,  278,  274,   17,   13,  270,  271,   74,  258,  274,
  260,  276,  277,  278,  279,  265,  281,  282,  283,  284,
  285,    2,   71,  258,  274,  260,  276,  277,  278,  279,
  265,  281,  282,  283,  284,  285,   -1,   -1,  258,  274,
  260,  276,  277,  278,  279,  265,  281,  282,  283,  284,
  285,   -1,   -1,  258,  274,  260,  276,  277,  278,  279,
  265,  281,  282,  283,  284,  285,   -1,   -1,   -1,  274,
   -1,  276,  277,  278,  279,   -1,  281,  282,  283,  284,
  285,  258,   -1,  260,   -1,   -1,   -1,  279,  265,  281,
  282,  283,  284,  285,   -1,   -1,  258,  274,  260,  276,
  277,  278,  279,  265,  281,  282,  283,  284,  285,   -1,
   -1,   -1,  274,   -1,  276,  277,  278,  279,   -1,  281,
  282,  283,  284,  285,
};
#define YYFINAL 11
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 288
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IF","THEN","WHILE","DO","READ",
"WRITE","CALL","BEG","END","CONST","VAR","PROCEDURE","ODD","CONCAT","MINUS",
"MULTI","DIVIDE","END_STMT","OPEN_PAR","CLOSE_PAR","PAUSE","DOT","ASSIGN",
"DASSIGN","JING","SM_EQ","BI_EQ","SMALL","BIG","ID","NUM","ERRORTOKEN",
};
static const char *yyrule[] = {
"$accept : program",
"program : segment DOT",
"segment : const_explain vari_explain proce_explain statement",
"segment : const_explain vari_explain statement",
"segment : const_explain statement",
"segment : const_explain proce_explain statement",
"segment : vari_explain proce_explain statement",
"segment : vari_explain statement",
"segment : proce_explain statement",
"segment : statement",
"const_explain : CONST const_defi const_defi_list END_STMT",
"const_explain : CONST const_defi END_STMT",
"const_defi_list : const_defi_list PAUSE const_defi",
"const_defi_list : PAUSE const_defi",
"const_defi : ID DASSIGN NUM",
"vari_explain : VAR ID ID_list END_STMT",
"vari_explain : VAR ID END_STMT",
"ID_list : PAUSE ID",
"ID_list : ID_list PAUSE ID",
"proce_explain : proce_head segment pro_explain_list END_STMT",
"proce_explain : proce_head segment END_STMT",
"pro_explain_list : END_STMT proce_explain",
"pro_explain_list : pro_explain_list END_STMT proce_explain",
"proce_head : PROCEDURE ID END_STMT",
"statement : assign_statement",
"statement : compound_statement",
"statement : if_statement",
"statement : while_statement",
"statement : pro_statement",
"statement : read_statement",
"statement : write_statement",
"statement :",
"assign_statement : ID DASSIGN expression",
"compound_statement : BEG statement statement_list END",
"compound_statement : BEG statement END",
"statement_list : END_STMT statement",
"statement_list : statement_list END_STMT statement",
"condition : expression relation_op expression",
"condition : ODD expression",
"if_statement : IF condition THEN statement",
"expression : CONCAT term con_term_list",
"expression : MINUS term con_term_list",
"expression : term con_term_list",
"expression : term",
"expression : CONCAT term",
"expression : MINUS term",
"con_term_list : con_term_list con_op term",
"con_term_list : con_op term",
"term : elem mul_op_elem_list",
"term : elem",
"mul_op_elem_list : mul_op_elem_list mul_op elem",
"mul_op_elem_list : mul_op elem",
"elem : ID",
"elem : NUM",
"elem : OPEN_PAR expression CLOSE_PAR",
"con_op : CONCAT",
"con_op : MINUS",
"mul_op : MULTI",
"mul_op : DIVIDE",
"relation_op : ASSIGN",
"relation_op : JING",
"relation_op : SMALL",
"relation_op : BIG",
"relation_op : SM_EQ",
"relation_op : BI_EQ",
"while_statement : WHILE condition DO statement",
"pro_statement : CALL ID",
"read_statement : READ OPEN_PAR ID ID_list CLOSE_PAR",
"read_statement : READ OPEN_PAR ID CLOSE_PAR",
"write_statement : WRITE OPEN_PAR expression expression_list CLOSE_PAR",
"write_statement : WRITE OPEN_PAR expression CLOSE_PAR",
"expression_list : expression_list PAUSE expression",
"expression_list : PAUSE expression",

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
#line 176 "b.y"

#include"lex.yy.c"
main(int argc,char **argv)
{
	yyparse();
}
yyerror(char *s)
{
	fprintf(stderr,"error:%s\n",s);
}
#line 378 "y.tab.c"

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
#line 17 "b.y"
	{printf("程序->分程序.\n");}
break;
case 2:
#line 21 "b.y"
	{printf("分程序->常量说明部分 变量说明部分 过程说明部分 语句\n");}
break;
case 3:
#line 22 "b.y"
	{printf("分程序->常量说明部分 变量说明部分 语句\n");}
break;
case 4:
#line 23 "b.y"
	{printf("分程序->常量说明部分 语句\n");}
break;
case 5:
#line 24 "b.y"
	{printf("分程序->常量说明部分 过程说明部分 语句\n");}
break;
case 6:
#line 25 "b.y"
	{printf("分程序->变量说明部分 过程说明部分 语句\n");}
break;
case 7:
#line 26 "b.y"
	{printf("分程序->变量说明部分 语句\n");}
break;
case 8:
#line 27 "b.y"
	{printf("分程序->过程说明部分 语句\n");}
break;
case 9:
#line 28 "b.y"
	{printf("分程序->语句\n");}
break;
case 10:
#line 32 "b.y"
	{printf("常量说明部分->CONST 常量定义 常量定义串 ;\n");}
break;
case 11:
#line 33 "b.y"
	{printf("常量说明部分->CONST 常量定义 ;\n");}
break;
case 12:
#line 37 "b.y"
	{printf("常量定义串->常量定义串,常量定义\n");}
break;
case 13:
#line 38 "b.y"
	{printf("常量定义串->,常量定义\n");}
break;
case 14:
#line 42 "b.y"
	{printf("常量定义->ID := NUM\n");}
break;
case 15:
#line 46 "b.y"
	{printf("变量说明部分->VAR ID 标识符串 ;\n");}
break;
case 16:
#line 47 "b.y"
	{printf("变量说明部分->VAR ID ;\n");}
break;
case 17:
#line 51 "b.y"
	{printf("标识符串->, ID\n");}
break;
case 18:
#line 52 "b.y"
	{printf("标识符串->标识符串 , ID\n");}
break;
case 19:
#line 56 "b.y"
	{printf("过程说明部分->过程首部 分程序 过程说明串 ;\n");}
break;
case 20:
#line 57 "b.y"
	{printf("过程说明部分->过程首部 分程序 ;\n");}
break;
case 21:
#line 61 "b.y"
	{printf("过程说明串->; 过程说明部分\n");}
break;
case 22:
#line 62 "b.y"
	{printf("过程说明串->过程说明串 ; 过程说明部分\n");}
break;
case 23:
#line 66 "b.y"
	{printf("过程首部->PROCEDURE ID ;\n");}
break;
case 24:
#line 70 "b.y"
	{printf("语句->赋值语句\n");        }
break;
case 25:
#line 71 "b.y"
	{printf("语句->符合语句\n");}
break;
case 26:
#line 72 "b.y"
	{printf("语句->条件语句\n"); }
break;
case 27:
#line 73 "b.y"
	{printf("语句->当型循环语句\n");}
break;
case 28:
#line 74 "b.y"
	{printf("语句->过程调用语句\n");}
break;
case 29:
#line 75 "b.y"
	{printf("语句->读语句\n"); }
break;
case 30:
#line 76 "b.y"
	{printf("语句->写语句\n");  }
break;
case 31:
#line 77 "b.y"
	{printf("语句->空\n");  }
break;
case 32:
#line 81 "b.y"
	{printf("赋值语句->ID := 表达式\n"); }
break;
case 33:
#line 85 "b.y"
	{printf("复合语句->BEGIN 语句 语句串 END\n"); }
break;
case 34:
#line 86 "b.y"
	{printf("复合语句->BEGIN 语句 END\n");  }
break;
case 35:
#line 90 "b.y"
	{printf("语句串->; 语句\n"); }
break;
case 36:
#line 91 "b.y"
	{printf("语句串->语句串 ; 语句\n"); }
break;
case 37:
#line 95 "b.y"
	{printf("条件->表达式 关系运算符 表达式\n"); }
break;
case 38:
#line 96 "b.y"
	{printf("条件->ODD 表达式\n");}
break;
case 39:
#line 100 "b.y"
	{printf("条件语句->IF 条件 THEN 语句\n");}
break;
case 40:
#line 104 "b.y"
	{printf("表达式->+ 项 加法和项的串\n");}
break;
case 41:
#line 105 "b.y"
	{printf("表达式->- 项 加法和项的串\n");}
break;
case 42:
#line 106 "b.y"
	{printf("表达式->项 加法和项的串\n");}
break;
case 43:
#line 107 "b.y"
	{printf("表达式->项\n");}
break;
case 44:
#line 108 "b.y"
	{printf("表达式->+ 项\n");}
break;
case 45:
#line 109 "b.y"
	{printf("表达式->- 项\n");}
break;
case 46:
#line 113 "b.y"
	{printf("加法和项的串->加法和项的串 加法运算符 项\n");}
break;
case 47:
#line 114 "b.y"
	{printf("加法和项的串->加法运算符 项\n");}
break;
case 48:
#line 118 "b.y"
	{printf("项->因子 乘法运算符和因子的串\n");}
break;
case 49:
#line 119 "b.y"
	{printf("项->因子\n");}
break;
case 50:
#line 123 "b.y"
	{printf("乘法运算符和因子的串->乘法运算符和因子的串 乘法运算符 因子\n");}
break;
case 51:
#line 124 "b.y"
	{printf("乘法运算符和因子的串->乘法运算符 因子\n");}
break;
case 52:
#line 128 "b.y"
	{printf("因子->ID\n");}
break;
case 53:
#line 129 "b.y"
	{printf("因子->NUM\n");}
break;
case 54:
#line 130 "b.y"
	{printf("因子->( 表达式 )\n");}
break;
case 55:
#line 134 "b.y"
	{printf("加法运算符->+\n");}
break;
case 56:
#line 135 "b.y"
	{printf("加法运算符->-\n");}
break;
case 57:
#line 139 "b.y"
	{printf("乘法运算符->*\n");}
break;
case 58:
#line 140 "b.y"
	{printf("乘法运算符->/\n");}
break;
case 59:
#line 144 "b.y"
	{printf("关系运算符->=\n");}
break;
case 60:
#line 145 "b.y"
	{printf("关系运算符->#\n");}
break;
case 61:
#line 146 "b.y"
	{printf("关系运算符-><\n");}
break;
case 62:
#line 147 "b.y"
	{printf("关系运算符->>\n");}
break;
case 63:
#line 148 "b.y"
	{printf("关系运算符-><=\n");}
break;
case 64:
#line 149 "b.y"
	{printf("关系运算符->>=\n");}
break;
case 65:
#line 153 "b.y"
	{printf("当型循环语句->WHILE 条件 DO 语句\n");}
break;
case 66:
#line 157 "b.y"
	{printf("过程条用语句->CALL ID\n");}
break;
case 67:
#line 161 "b.y"
	{printf("读语句->READ ( ID 标识符串 )\n");}
break;
case 68:
#line 162 "b.y"
	{printf("读语句->READ ( ID )\n");}
break;
case 69:
#line 166 "b.y"
	{printf("写语句->WRITE ( 表达式 表达式串 )\n");}
break;
case 70:
#line 167 "b.y"
	{printf("写语句->WRITE ( 表达式 )\n");}
break;
case 71:
#line 171 "b.y"
	{printf("表达式串->表达式串 , 表达式\n");}
break;
case 72:
#line 172 "b.y"
	{printf("表达式串->, 表达式\n");}
break;
#line 872 "y.tab.c"
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
