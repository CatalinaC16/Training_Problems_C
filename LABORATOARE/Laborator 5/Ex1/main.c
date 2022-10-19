#include <stdio.h>
/*APEL PRIN VALOARE*/
/*Procedura de interschimbare intre a si b*/
void interschimbare(int a, int b)
{
 int aux;
 printf("\nIn functie la intrare a=%d b=%d\n",a,b);
 aux=a;a=b;b=aux;
 printf("\nIn functie la iesire a=%d b=%d\n",a,b);
}
int main()
{
 int a,b;
 a=2;b=3;
 printf("\nIn main inaintea apelului functiei interschimbare a=%d b=%d\n",a,b);
 interschimbare(a,b);
 printf("\nIn main la revenirea din functia interschimbare a=%d b=%d\n",a,b);
 return 0;
}
