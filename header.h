#include<stdio.h>
#include<stdlib.h>
#include<string.h>


extern void line( FILE *,int *  );
extern void header_file(FILE *sf,FILE *df,int l);
extern void com(int l);
extern void macros(int l);
extern void repl(char *,char *,int);
extern char **p;
//void macros(int l)
