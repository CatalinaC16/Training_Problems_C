#include <stdio.h>
#include <stdlib.h>
///n palindrom
int main()
{
    int n;
    printf("scrie numar");
    scanf("%d",&n);
    int aux=n, o=0;
    while(aux!=0)
    {
        o=o*10+aux%10;
        aux=aux/10;
    }
    if(n==o)printf("palindrom");
    return 0;
}
