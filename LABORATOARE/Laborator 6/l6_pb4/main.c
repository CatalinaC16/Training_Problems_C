#include <stdio.h>
#include <stdlib.h>
#include "complex.h"
#include<math.h>

int main()
{
    int imaginar=0,real=0,imaginarprodus=0,realprodus=0;
    float realimp=0,imaginarimp=0;
    int a,b,c,d;
    printf("scrie numar complex partea imaginara si dupa reala\n");
    a=citire(a);
    b=citire(b);
    printf("scrie numar complex partea imaginara si dupa reala\n");
    c=citire(c);
    d=citire(d);
    printf("adunarea celor 2 nr este ");
    adunare(a,b,c,d,imaginar,real);
    printf("\nscadere celor 2 nr este ");
    scadere(a,b,c,d,imaginar,real);
    printf("\ninmultirea celor doua numere este ");
    inmultire(a, b, c, d, imaginarprodus,realprodus);
    printf("\nconjugatul primului numar ");
    conjugat(a,b);
    printf("\nimpartirea celor doua numere este ");
    impartire(a, b, c,  d, realimp, imaginarimp);

    return 0;
}
