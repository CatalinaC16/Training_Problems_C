#include<stdio.h>

#include "multime.h"

int citire(int a[NMAX])
{
    int n;
    printf("scrie nr de elemente al multimii: ");
    scanf("%d",&n);
    printf("\n");

    for(int i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    return n;
}

void afisare(int a[NMAX],int n)
{

    for(int i=0; i<n; i++)
    {
        printf("a[%d]=%d ",i,a[i]);

    }

}
int intersectie(int a[NMAX],int n,int b[NMAX],int m,int c[NMAX])
{
    int k=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i]==b[j])
            {
                int ok=0;

                for(int p=0; p<k; p++)
                {
                    if(a[i]==c[p])ok=1;
                }
                if(ok==0)
                {
                    c[k]=a[i];
                    k++;
                }
            }

        }
    }

    return k;
}
int reuniune(int a[NMAX],int n,int b[NMAX],int m,int c[NMAX])
{
    int k=0;
    for(int i=0; i<n; i++)
    {
        int ok=0;

        for(int p=0; p<k; p++)
        {
            if(a[i]==c[p])ok=1;
        }
        if(ok==0)
        {
            c[k]=a[i];
            k++;
        }

    }

    for(int j=0; j<m; j++)
    {
        int ok=0;

        for(int p=0; p<k; p++)
        {
            if(b[j]==c[p])ok=1;
        }
        if(ok==0)
        {
            c[k]=b[j];
            k++;
        }

    }
    return k;
}
int diferenta(int a[NMAX],int n,int b[NMAX],int m,int c[NMAX])
{
    int k=0;
    for(int i=0; i<n; i++)
    {
        int ok=0;
        for(int j=0; j<m; j++)
        {
            if(a[i]==b[j])
                ok=1;



        }
        if(ok==0)
        {
            c[k]=a[i];
            k++;
        }
    }
    return k;
}
