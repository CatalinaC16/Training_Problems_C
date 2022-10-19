#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Să se scrie două funcţii: una care converteşte un număr întreg sau real într-un şir
//de caractere, iar cealaltă care face operaţia inversă.
int main()
{

    int n1,n2;
    char s1[100];
    scanf("%d",&n1);
   sprintf(s1,"%dxx",n1);
   puts(s1);
   sscanf(s1,"%d",&n2);
     printf("%d",n2);
    return 0;
}
