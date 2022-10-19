#include <stdio.h>
#include <stdlib.h>
int c[300];
int main()
{
    int coef,fx0=0,x0,n,m,a[100],b[100],v[200],p[200];

    printf("scrie gradul polinomului A=");
    scanf("%d",&n);

    printf("scrie gradul polinomului B=");
    scanf("%d",&m);

    printf("scrie coeficienti lui A \n");

    for(int i=n; i>=0; i--)
    {
        printf("x^%d=",i);
        scanf("%d",&a[i]);
    }

    printf("scrie coeficienti lui B \n");

    for(int i=m; i>=0; i--)
    {
        printf("x^%d=",i);
        scanf("%d",&b[i]);
    }

    ///ADUNARE A+B= si SCADERE A-B=

    if(n<m)
    {
        for(int j=0; j<=n; j++)
        {
            v[j]=a[j]+b[j];

            p[j]=a[j]-b[j];
        }
        for(int j=n+1; j<=m; j++)
        {
            v[j]=b[j];
            p[j]=-b[j];
        }


        printf("gradul polinomului este %d, iar coeficientii adunarii sunt ",m);
        for(int i=m; i>=0; i--)
        {
            printf("%d  ",v[i]);

        }
        printf("\n gradul polinomului este %d, iar coeficientii scaderii sunt ",m);
        for(int i=m; i>=0; i--)
        {
            printf("%d  ",p[i]);
        }
    }

    else if (n>=m)
    {
        for(int j=0; j<=m; j++)
        {
            v[j]=a[j]+b[j];
            p[j]=a[j]-b[j];
        }
        for(int j=m+1; j<=n; j++)
        {
            v[j]=a[j];
            p[j]=a[j];
        }


        printf("gradul polinomului este %d, iar coeficientii adunarii sunt ",n);
        for(int i=n; i>=0; i--)
        {
            printf("%d  ",v[i]);
        }

        printf("\n gradul polinomului este %d, iar coeficientii scaderii sunt ",n);
        for(int i=n; i>=0; i--)
        {
            printf("%d  ",p[i]);
        }
    }
///INMULTIRE
    for (int i=n; i>=0; i--)
    {
        for (int j=m; j>=0; j--)
        {
            c[i+j]=c[i+j]+a[i]*b[j];

        }
    }
    for (int i=n+m; i>=0; i--)
    {
        printf("\n %d",c[i]);
    }

    return 0;
}
