#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Se citește un şir de n elemente reale ordonate crescător. Să se verifice dacă o
    ///valoare citită x se găseşte în şir şi să se indice poziţia sa.

    int n,x,a[100],ok=0,poz;

    printf("scrie nr de nr din sir n=");
    scanf("%d",&n);

    printf("\n scrie nr cautat in sir x=");
    scanf("%d",&x);

    printf("\n scrie sir de elemente ordonate crescator");
    for(int i=1;i<=n;i++)
    {
        printf("\n a[%d]=",i);
        scanf("%d",&a[i]);
        if(a[i]==x){ok=1;poz=i;}

    }
    if(ok==1) printf("DA nr se gaseste in sirul de n nr pe pozitia %d",poz);
    return 0;
}
