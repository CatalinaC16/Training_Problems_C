#include <stdio.h>
#include <stdlib.h>

void citire_matrice(int **mat,int n,int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",(*(mat+i)+j));
        }
    }
}


void transpusa(int **A, int n,int m,int **At)
{
    int i,j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            *(*(At+i)+j)=*(*(A+j)+i);
        }
    }
}
int main()
{
    int n,m;

    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    int **A=(int **)malloc(n* sizeof(int *));

    for(int i=0; i<n; i++)
    {
        *(A+i)=(int *)malloc(m*sizeof(int));
    }

    citire_matrice(A,n,m);

    int **At=(int **)malloc((m)* sizeof(int *));

    for(int i=0; i<m; i++)
    {
        *(At+i)=(int *)malloc((n)*sizeof(int));
    }

    transpusa(A,n,m,At);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {

            printf("%d ",*(*(At+i)+j));
        }
        printf("\n");
    }


    return 0;
}
