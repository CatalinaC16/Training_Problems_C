#include <stdio.h>
#include <stdlib.h>
int cauta(int v[100],int st, int dr,int aux)
{
    int m=(st+dr)/2;
    if(st<dr)
    {
        if(v[m]==aux)return m;
        else if(v[m]<aux)return cauta(v,0,m-1,aux);
        else return cauta(v,m+1,dr,aux);
    }
    else return -1;
}
int main()
{
    int n, v[100],aux;
    printf("scrie nr de numere");
    scanf("%d",&n);
    printf("scrie nr cautat");
    scanf("%d",&aux);

    printf("scrie sirul de numere");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&v[i]);
    }
    printf("%d",cauta(v,0,n-1,aux));
    return 0;
}
