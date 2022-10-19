#include <stdio.h>
#include <stdlib.h>
//. Folosind tipul enumerare, să se introducă tipul "boolean". Să se scrie o funcţie de
//ordonare crescătoare a unui tablou de numere reale folosind metoda bulelor şi o variabilă de
//tipul boolean.
typedef enum boolean
{
    false,true
};

int main()
{ enum boolean ok;
    int n,v[100];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&v[i]);
    }

  do
    {
        ok=true;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]>v[i+1])
            {
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                ok=false;
            }
        }

    }  while(ok==false);

    for(int i=0; i<n; i++)
    {
       printf("%d ",v[i]);
    }
    return 0;
}
