#include <stdio.h>
#include <stdlib.h>
///functie cititre
void citire_matrice(int **mat,int n,int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ///scanf("%d",&mat[i][j]);
            scanf("%d",(*(mat+i)+j));///o valoare se obt punand inca o steluta
        }
    }
}

void inmultire_matrice(int **mat1,int **mat2,int **mat3,int n,int m)
{ int i,j,k;
    for(i=0; i<n; i++)
    {
        for( j=0; j<m; j++)
        {
            *(*(mat3+i)+j)=0;

         for(k=0; k<n; k++)
            {
                *(*(mat3+i)+j)=*(*(mat3+i)+j)+ ((*(*(mat1+i)+k))*(*(*(mat2+k)+j)));
            }
        }


    }
}
    void afisare_matrice(int **mat,int n,int m)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                /// printf("%d",mat[i][j]);
                printf("%d ",*(*(mat+i)+j));
            }
            printf("\n");
        }
    }
    int main()
    {
        int n,m;
        scanf("%d %d",&n,&m);
        ///alocare loc matrice1

        int **mat1=(int **)malloc(n* sizeof(int *));

        for(int i=0; i<n; i++)
        {
            ///mat[i]

            *(mat1+i)=(int *)malloc(m*sizeof(int));
        }
        ///alocare loc matrice 2
        int **mat2=(int **)malloc(n* sizeof(int *));

        for(int i=0; i<n; i++)
        {
            ///mat[i]

            *(mat2+i)=(int *)malloc(m*sizeof(int));
        }
        ///alocare loc matrice 3
         int **mat3=(int **)malloc(n* sizeof(int *));

        for(int i=0; i<n; i++)
        {
            ///mat[i]

            *(mat3+i)=(int *)malloc(m*sizeof(int));
        }

        printf("scrie prima matrice n m si valori ");
        citire_matrice(mat1,n,m);

        printf("\n scrie a doua matrice n m si valori ");
        citire_matrice(mat2,n,m);
        inmultire_matrice(mat1,mat2,mat3,n, m);


        afisare_matrice(mat3,n,m);


        ///golire memorie
        /*for(int i=0; i<n; i++)
        {
            free(*(mat+i));
        }
        free(mat);
        */
        return 0;
    }
