#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void calcpctderiv(int n,int *deriv,int x0)
{
    int s=0;
    for(int i=0; i<=n-1; i++)
    {
        s=s+(*(deriv+i)*pow(x0,i));
    }
    printf("valoarea in x0 este %d",s);
}
int main()
{
    int n;
    printf("gradul polinomului este ");
    scanf("%d",&n);
    int *p=(int *)malloc((n+1)*sizeof(int));
    int *deriv=(int *)malloc(n*sizeof(int));


    for(int i=0; i<=n; i++)
    {
        printf("x^%d=>",i);
        scanf("%d",p+i);

    }

    ///derivata
    for(int i=0; i<=n-1; i++)
    {
        *(deriv+i)=*(p+i+1) * (i+1);

    }

    printf("derivata polinomului este ");
    for(int i=n-1; i>=1; i--)
    {
        printf("%dx^%d+",*(deriv+i),i);
    }
    printf("%d",*(deriv));
    int x0;
    printf("\npunctul in care se doreste valoarea derivatei este ");
    scanf("%d",&x0);
    calcpctderiv(n, deriv,x0);
    return 0;
}
