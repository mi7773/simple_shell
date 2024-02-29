#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

extern char **environ;

int active(char *av0);
int nactive(char *av0);
char *getpath(void);
char **patharr(char *ca0);
char **coarr(char *buf);
int findl(char *str);
int cdel(char *str, char del);
int mystat(char **ca, char **pa);
void myfree(char **ca, char **pa);
char *geten(char *gpr, char *en);
void myswap(char *de, char *so);
void myerr(int i, char *av0, char *ca0);
void numwr(int i);
int myexe(char **ca, char *av0);
char *mygetl(void);
char **mystok(char *s, char *d, char **r);
char *myread(void);
int myexit(char *ca0);
int myen(char *ca0);
void penv(void);

#endif /* MAIN_H */
