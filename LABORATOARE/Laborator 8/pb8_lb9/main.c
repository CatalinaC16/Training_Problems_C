#include <stdio.h>
#include <stdlib.h>

int x[10] ,n;

void Afis()
{
    for( int j=1;j<=n;j++)
        printf("%d",x[j]);
    printf("\n");
}

int OK(int k){
    for(int i=1;i<k;++i)
        if(x[k]==x[i])
            return 0;
    return 1;
}

int Solutie(int k)
{
    return k == n;
}

void back(int k){
    for(int i=1 ; i<=n ; ++i)
    {
        x[k]=i;
        if( OK(k) )
            if(Solutie(k))
                Afis();
            else
                back(k+1);
    }
}
int main(){
   scanf("%d",&n);
    back(1);
    return 0;
}
