#include <stdio.h>
#include <stdlib.h>
#include<string.h>
///Se va scrie o funcţie pentru inserarea unui şir de caractere sursă într-un şir de
///caractere destinaţie, specificând poziţia din care începe inserarea.

int main()
{
 int poz;

 char s[100], d[100],aux[100];

gets(d);
gets(s);
 scanf("%d",&poz);

 strcpy(aux,s);

 int nrcar=strlen(d);
 /*strcpy(aux+poz,d);
 puts(aux);

strcpy(aux+nrcar+poz,s+poz);
 puts(aux);*/
strcpy(d+poz,s);
puts(d);
    return 0;
}
