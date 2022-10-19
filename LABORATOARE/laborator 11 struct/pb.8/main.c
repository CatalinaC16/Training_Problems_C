#include <stdio.h>
#include <stdlib.h>
#include<string.h>
///Se citeşte un şir de caractere format din litere şi cifre. Să se indice frecvenţa de
///apariţie a caracterelor întâlnite în şir folosind un tablou de elemente structură (câmpurile
///structurii sunt: caracterul și frecvenţa de apariție).
typedef struct
{
    char cr;
    int fr;
} caracter;

int frecventa(char a,char s[])
{ int fr=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(a==s[i])fr++;
    }
    return fr;
}
int main()
{
    char s[1000];
    scanf("%s",s);
    caracter*c=(caracter*) malloc(strlen(s)*sizeof(caracter));

    caracter sir;
    int k=0;
    for(int i=0; i<strlen(s); i++)
    {
        int ok=0;

        for(int j=i+1; j<strlen(s); j++)
        {
            if(s[i]==s[j])ok=1;
        }

        if(ok==0){sir.cr=s[i];sir.fr=frecventa(s[i],s);k++;}
        c[k]=sir;
    }

    for(int i=1; i<=k; i++)
    {
        printf("%c %d \n",c[i].cr,c[i].fr);
    }

    return 0;
}
