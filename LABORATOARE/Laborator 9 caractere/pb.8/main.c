#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n, sumar=0,nr,ok=0;
    float sumaf=0,aux;
    char **a;
    char s[100];

    scanf("%d",&n);

    a=calloc(n,sizeof(char*));

    for(int i=0; i<n; i++)
    {
        scanf("%s",s);
         nr=0;aux=0;
        ok=0;

        a[i]=calloc(strlen(s)+1,sizeof(char));

        strcpy(a[i],s);

        for(int j=0; j<strlen(a[i]); j++)
        {
            if(a[i][j]=='.')ok=1;

        }

        if(ok==0) {sscanf(a[i],"%d", &nr);sumar=sumar+nr;}
        else {sscanf(a[i],"%f", &aux); sumaf=sumaf+aux;}


    }
    printf("%d",sumar);printf("\n");
    printf("%f",sumaf);



    return 0;
}
