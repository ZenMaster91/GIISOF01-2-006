/*
 * C-TO-C COMPILER
 *
 * Based on an ANSI-C compiler
 * originally written by Birgit Schwarz
 * in 1989 at GMD Karlsruhe
 * using Gentle/0
 *
 * Copyright (C) 1989, 1993 GMD
 */
typedef long * yy;
#define yyu (-2147483647L)
static yy yynull;
extern yy yyh;
extern yy yyhx;
static yyErr(n,l)
{
yyAbort(n,"Arith", l);
}
