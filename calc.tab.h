#ifndef BISON_CALC_TAB_H
# define BISON_CALC_TAB_H

#ifndef YYSTYPE
typedef union{
	double d;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
# define	NRO	257
# define	SEN	258
# define	UMINUS	259


extern YYSTYPE yylval;

#endif /* not BISON_CALC_TAB_H */
