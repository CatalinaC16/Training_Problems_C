#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//Se va scrie o funcţie care să realizeze extragerea dintr-un şir de caractere sursă a
//unui subşir specificat prin poziţia în cadrul sursei şi a numărului de caractere extrase.
int main()
{
    int poz=4,nrcar=3;
    char s[100],d[100];
   gets(s);
    strncpy(d,s+poz,nrcar);
   puts(d);
    return 0;
}
