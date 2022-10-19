#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,m,Q[100],P[100];
  printf("scrie gradul polinomului Q=");
    scanf("%d",&n);

    printf("scrie gradul polinomului P=");
    scanf("%d",&m);

    printf("scrie coeficienti lui Q \n");

    for(int i=n; i>=0; i--)
    {
        printf("x^%d=",i);
        scanf("%d",&Q[i]);
    }

    printf("scrie coeficienti lui P \n");

    for(int i=m; i>=0; i--)
    {
        printf("x^%d=",i);
        scanf("%d",&P[i]);
    }

    return 0;
}
