#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///Să se scrie o funcție pentru a verifica dacă un șir de caractere este subșir al altui
///șir de caractere. În caz afirmativ funcția trebuie să returneze poziția la care începe subșirul,
///iar în caz negativ trebuie să returneze valoarea -1.


int cautare(char sir[200], char subsir[200])
{
    if(strstr(sir,subsir)!=NULL)
    {
        int pozitia=strstr(sir,subsir);
           return pozitia;
    }

    else return -1;
}

int main()
{
    char sir[200],subsir[200];
    gets(sir);
    gets(subsir);
    int n;
    n=cautare(sir,subsir);
    printf("%d",n);
}
