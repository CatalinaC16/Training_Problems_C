#include <stdio.h>
#include <stdlib.h>
///Să se introducă tipul "rațional" ca o structură formată din numărător şi numitor. Să
///se scrie funcţii de simplificare, adunare, scădere, înmulţire, împărţire, ridicare la putere
typedef struct
{
    int numitor;int numarator;
} rational;

int cmmdc(int *a,int *b)
{ int x=*a, y=*b;

    while(x!=y)
        {
        if(x >y)x=x-y;
         else  y=y-x;

        }
        return ((*a)*(*b)/x);
}
rational adunare(rational a,rational b)
{
    rational c;
    c.numitor=cmmdc(&a.numitor,&b.numitor);
    c.numarator=a.numarator*(c.numitor/a.numitor)+b.numarator*(c.numitor/b.numitor);

    return c;
}

rational scadere(rational a, rational b)
{
    rational d;
    d.numitor=cmmdc(&a.numitor,&b.numitor);
    d.numarator=a.numarator*(d.numitor/a.numitor)-b.numarator*(d.numitor/b.numitor);
    return d;
}

int main()
{
   rational a,b,c,d;
    printf("Prima fractie");
    scanf("%d/%d", &a.numarator,&a.numitor);
    printf("A doua fractie");
    scanf("%d/%d", &b.numarator,&b.numitor);
   c=adunare(a,b);
   printf("%d/%d \n",c.numarator,c.numitor);
   d=scadere(a,b);
   printf("%d/%d \n",d.numarator,d.numitor);
    return 0;
}
