#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///Să se scrie un program care citeşte n şiruri de caractere şi afişează şirul cel mai
///lung şi şirul cel mai mare alfanumeric.

int main()
{
    int n, maxxcl=0,nr;

    char s[100];

    scanf("%d",&n);

    char** a=(char**)calloc(n,sizeof(char*));

    int maxx=0;
    for(int i=0; i<n; i++)
    {
        nr=0;

        scanf("%s\n",s);

        a[i]=calloc(strlen(s)+1,sizeof(char));
        strcpy(a[i],s);
        for(int j=0; j<strlen(a[i]); j++)
        {

            if( isalpha(a[i][j]))nr++;
            if( isdigit(a[i][j]))nr++;
        }
        if(maxxcl<nr)maxxcl=nr;
        if(maxx<strlen(a[i]))maxx=strlen(a[i]);

    }

    printf("maximul este %d si sirul este ",maxx);



    for(int i=0; i<=n; i++)
    {
        nr=0;
        if(maxx==strlen(a[i]))printf("%s",a[i]);


        for(int j=0; j<strlen(a[i]); j++)
        {

            if(isalpha(a[i][j]))nr++;
            if(isdigit(a[i][j]))nr++;
        }
        if(maxxcl==nr)printf(" \n cel mai lung alfanumeric este %s",a[i]);

    }

    return 0;
}
