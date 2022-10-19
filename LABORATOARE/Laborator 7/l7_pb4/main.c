#include <stdio.h>
#include <stdlib.h>

void citire(int n, int *v)
{
    for(int i=0; i<n; i++)
    {
        printf("v[%d]=",i);
        scanf("%d",v+i);
    }
}

void afisare(int n,int *v)
{
    for(int i=0; i<n; i++)
    {
        printf("v[%d]=%d ",i,*(v+i));
    }
}
int vectorinterclasare(int k,int *v3,int n,int m,int *v1,int *v2 )
{ int i,j;
    k = 0;
    i = 0;
    j = 0;
    while (i < n && j < m)
        if (*(v1+i) < *(v2+j))
        {
            *(v3+k) = *(v1+i);
            i++;
            k++;
        }
        else
        {
           *(v3+k) = *(v2+j);
            j++;
            k++;
        }


    while (i < n)
    {
        *(v3+k) = *(v1+i);
        i++;
        k++;
    }
    while (j < m)
    {
        *(v3+k) = *(v2+j);
        j++;
        k++;
    }
    return k;
}

int main()
{
    int n,m,k;

    printf("n=");
    scanf("%d",&n);
    int *v1=(int *)malloc(n* sizeof(int *));

    citire(n,v1);

    printf("m=");
    scanf("%d",&m);
    int *v2=(int *)malloc(m* sizeof(int *));

    citire(m,v2);

    int *v3=(int *)malloc((m+n)* sizeof(int *));

  k=vectorinterclasare(k,v3, n, m,v1,v2 );
afisare(k,v3);
    return 0;
}
