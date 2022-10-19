#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Se va scrie o funcţie pentru ştergerea unui subşir dintr-un şir de caractere dat.
//Subşirul se va specifica prin poziţie şi număr de caractere.

int main()
{  int poz,nrcar;
   char s[100];
   gets(s);
   scanf("%d",&poz);
   scanf("%d",&nrcar);
   strcpy(s+poz,s+poz+nrcar);
   puts(s);
    return 0;
}
