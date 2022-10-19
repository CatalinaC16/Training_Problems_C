#include <stdio.h>
#include <stdlib.h>
///Se citește o matrice de dimensiune nxn cu elemente 0 şi 1. Să se stabilească dacă
///matricea respectivă este simetrică.
int main()
{
    int n,a[100][100];
    printf("n=");
    scanf("%d",&n);

    int ok=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j,j<=n;j++)
        {
           printf("a[%d)[%d]=",i,j);
           scanf("%d",&a[i][j]);
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j,j<=n;j++)
        {
            if(a[i][j]!=a[j][i])ok=0;
        }
    }
    if(ok==1)printf("matrice simetrica");
    else printf("matrice nu simetrica");
    return 0;
}
