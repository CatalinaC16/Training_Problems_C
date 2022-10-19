#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    ///Se citesc gradul şi coeficienţii polinomului p(x)=a0+a1x1+...+anxn
    ///Să se calculeze valoarea polinomului în punctul x=x0 (valoarea x0 se citeşte).
    int coef,fx0=0,x0,n;
    printf("scrie gradul polinomului ");
    scanf("%d",&n);
    printf("scrie punctul in care doresti valoarea polinomului ");
    scanf("%d",&x0);

    printf("scrie coeficienti\n");
    for(int i=n;i>=0;i--)
    {
        printf("x^%d=",i);
        scanf("%d",&coef);
        fx0+=pow(x0,i)*coef;
    }
    printf("%d",fx0);
    return 0;
}
