/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *YYCURSOR)
{
    const char *YYMARKER;
    const char *YYCTXMARKER;
    
{
	char yych;
	long yyctx0p1;
	long yyctx0p3;
	YYCTXMARKER = YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{ printf("error\n"); return; }
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '1':
		yyctx0p1 = (YYCURSOR - YYCTXMARKER);
		goto yy5;
	case '2':
		yyctx0p1 = (YYCURSOR - YYCTXMARKER);
		goto yy8;
	default:	goto yy3;
	}
yy5:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '1':	goto yy5;
	case '2':	goto yy8;
	default:	goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	goto yy3;
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case '3':
		yyctx0p3 = (YYCURSOR - YYCTXMARKER);
		goto yy9;
	case '4':
		yyctx0p3 = (YYCURSOR - YYCTXMARKER);
		goto yy11;
	default:	goto yy7;
	}
yy9:
	++YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '3':	goto yy9;
	case '4':	goto yy11;
	default:	goto yy7;
	}
yy11:
	++YYCURSOR;
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%.*s'\n",
                (YYCTXMARKER + yyctx0p1) - YYCTXMARKER, YYCTXMARKER,
                (YYCTXMARKER + (yyctx0p3 - 1)) - (YYCTXMARKER + yyctx0p1), (YYCTXMARKER + yyctx0p1),
                (YYCTXMARKER + yyctx0p3) - (YYCTXMARKER + (yyctx0p3 - 1)), (YYCTXMARKER + (yyctx0p3 - 1)),
                (YYCURSOR - 1) - (YYCTXMARKER + yyctx0p3), (YYCTXMARKER + yyctx0p3),
                YYCURSOR - (YYCURSOR - 1), (YYCURSOR - 1));
                return;
        }
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}