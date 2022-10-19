#include <stdio.h>
#include <stdlib.h>
/*Problema turnurilor din Hanoi: Se consideră trei tije verticale A,B,C şi n discuri de
diametre diferite. Iniţial toate discurile sunt puse în tija A, în ordinea descrescătoare a
diametrului (discul cel mai mare la bază, iar cel mai mic în vârf). Se cere să se mute discurile
de pe tija A pe tija C folosind tija B ca intermediar, folosind condiţiile:
a) la o manevră se mută un singur disc şi anume cel din vârful unei tije;
b) nu se poate pune un disc de diametru mai mare peste unul de diametru mai mic;
c) în final, pe tija C, discurile trebuie să fie în aceeaşi ordine ca în starea iniţială de pe
tija A.*/

char a,b,c;
int n;

void hanoi (int n, char a, char b, char c)
{
    if (n==1) printf("%c%c",a,c);
    else
    {
        hanoi(n-1,a,c,b);
        printf("%c%c",a,c);
        hanoi(n-1,b,c,a);
    }
}
int main (void )
{
    scanf("%d",&n);
    a='a';
    b='b';
    c='c' ;
    hanoi(n,a,b,c);
}
