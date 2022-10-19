#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Se va scrie o funcţie pentru a verifica dacă un şir dat este subşir al unui alt şir de
//caractere. În caz afirmativ, se va specifica poziţia pe care se regăseşte pentru prima dată.

int main()
{
char s1[100],s2[100];
gets(s1);
gets(s2);

for(int i=0;i<strlen(s1);i++)
{
    int ok=strnicmp(s1+i,s2,strlen(s2));
    if(ok==0)
    {
        printf("%d",i);
        break;
    }
}
    return 0;
}
