#include <stdio.h>
#include <stdlib.h>

int main()
{
///din pacate la aceasta problema nu mi-am dat seama cum as putea face deplasarea
/// spre stanga la valoarea deja calculata in binar si implicit si restul cerintelor
    int n,c;
    scanf("%d %d",&n,&c);
    int v[32],i=0,p[32];
    /// n=n<<16;
    /// n=n>>4;

    while(n>0)
    {
        v[i]=n%2;
        n=n/2;
        i++;
    }
    for (int j=i-1; j>=0; j--)
    {
        printf("%d",v[j]);
    }
    int k=0;
    printf("\n");
    while(c>0)
    {
        p[k]=c%2;
        c=c/2;
        k++;
    }

    for (int j=k-1; j>=0; j--)
    {
        printf("%d",p[j]);
    }


    return 0;
}
