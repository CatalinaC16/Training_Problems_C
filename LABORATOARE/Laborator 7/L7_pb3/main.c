#include <stdio.h>
#include <stdlib.h>


void citire(int n, int *v)
{
    for(int i=0; i<n; i++)
    {
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
    }
}

void sortare(int n,int *v)
{
    int aux,i,j;

    for( i=0; i<n-1; i++)
    {
        for( j=i+1; j<n; j++)
        {
            if(*(v+i)>*(v+j))
            {
                aux=*(v+i);
                *(v+i)=*(v+j);
                *(v+j)=aux;
            }
        }
    }
}
void afisare(int n,int *v)
{
    for(int i=0; i<n; i++)
    {
        printf("v[%d]=%d ",i,*(v+i));
    }
}
int main()
{
    int n;
    scanf("%d",&n);

    int *v=(int *)malloc(n* sizeof(int *));

    citire(n,v);
    sortare(n,v);
    afisare(n,v);

    return 0;
}
