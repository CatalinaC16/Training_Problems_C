#include <stdio.h>
#include <string.h>
/* Exemplu de folosire a tipului "union" */
int main()
{
 typedef union{
 char ch[10];
 short x;
 long y;
 float f;
 } alfa;
 alfa a;
 strcpy(a.ch,"ABCDEFGHI");
 printf("\nDimensiunea zonei de memorie rezervata = %d octeti\n", sizeof(a));
 printf("\nCONTINUTUL ZONEI:\n");
 printf("\n-sir de caractere: %s",a.ch);
 printf("\n-intreg de tipul short: %d(%x in hexa)",a.x,a.x);
 printf("\n-intreg de tipul long: %ld(%lx in hexa)",a.y,a.y);
 printf("\n-real de tipul float: %g",a.f);
 return 0;
}
