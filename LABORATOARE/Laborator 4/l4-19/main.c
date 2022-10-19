#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char s[100];

int main()
{
    /*
        gets(s);
        int nrcuv=0,k=0,nrl=0,v[100];

        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]==' ')
            {

                 v[k]=nrl;
                nrcuv++;
                     k=k+1;
                nrl=0;

            }
            else nrl++;
        }
        v[k++]=nrl;

        printf("nrcuv=%d",nrcuv+1);


        int maxx=v[1];
        for(int i=0; i<k; i++)
        {
            printf("\n v[%d]=%d",i,v[i]);
            if(maxx<v[i])maxx=v[i];
        }
        printf("\n maxx=%d",maxx);

    */
    char s[255],q[]=" ,.?!",*p,r[200];
    printf("propozitie:");
    gets(s);
    int i=0,j=0;
    p=strtok(s,q);
    while (p!=NULL)
    {
        i++;

        //printf("%s\n",p);
        if(strlen(p)>j)
        {
            j=strlen(p);
            strcpy(r,p);
        }
        p=strtok(NULL,q);
    }
    printf("\n Exista %d cuvinte.\n Cuvantul de lungime maxima este \"%s\"",i,r);
    return 0;
}
