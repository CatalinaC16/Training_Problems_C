#include <stdio.h>
#include <stdlib.h>

int** aloca(int n)
{
    int **a=(int**)malloc(n*sizeof(int*));
    if (a==NULL)
    {
        printf("Alocare dinamica esuata!");
        exit(10);
    }

    for (int i=0;i<n;i++)
    {
        a[i]=(int*)malloc(n*sizeof(int));
        if (a[i]==NULL)
        {
            printf("Alocare dinamica esuata!");
            exit(20);
        }
    }
    return a;
}

int** citeste(int *n)
{
    printf("n=");
    scanf("%d", n);
    int **x = aloca(*n);
    for (int i=0; i<*n; i++)
        for (int j=0; j<*n; j++)
        {
            printf("Matrice[%d][%d]=",i,j);
            scanf("%d", *(x+i)+j);
        }
    return x;
}

int** unitate(int n)
{
    int** x= aloca(n);
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            x[i][j]=0;

    for (int i=0; i<n; i++)
        x[i][i]=1;

    return x;
}

int** inmulteste(int**A,int **B, int n)
{
    int ** R = aloca(n);
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
        {
            *(*(R+i)+j)=0;
            for (int k=0; k<n; k++)
                R[i][j] += A[i][k]*B[k][j];
        }
    return R;
}

void copiaza(int **S,int **D, int n)
{
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            D[i][j]=S[i][j];
}

void dezaloca(int **x, int n)
{
    for (int i=0; i<n; i++)
        free(x[i]);

    free(x);
}

int** putere(int** A, int n, int k)
{
    int ** R = unitate(n);
    for (int i=0; i<k ; i++)
    {
        int** T = inmulteste(R,A,n);
        copiaza(T,R,n);
        dezaloca(T,n);
    }
    return R;
}

void afiseaza(int **x, int n)
{
   for (int i=0; i<n; i++)
   {
       for (int j=0; j<n; j++)
            printf("%d ",x[i][j]);
       printf("\n");
   }
}

int main()
{
    int n;
    int **A;
    A=citeste(&n);
    printf("k=");
    int k;
    scanf("%d",&k);
    int **Ak;
    Ak=putere(A,n,k);
    afiseaza(Ak,n);

    dezaloca(A,n);
    dezaloca(Ak,n);

    return 0;
}
