#include <stdio.h>
#include <stdlib.h>
void cuvinte_r(int n)
{
    char s[30];
    if(n>0)
    {
        scanf("%s",s);
        cuvinte_r(n-1);

    }
    else
    {
        return;
    }
    printf("%s\n",s);
}
int main()
{
    int n;
    scanf("%d",&n);
    cuvinte_r(n);


    return 0;
}
