#include <stdio.h>
#include <conio.h>
#include <string.h>
#define alfa "\nApasati o tasta!"
int main()
{
 char sir1[100]="SIR1 DE CARACTERE";
 char *sir2="<SIR2 DE CARACTERE";
 char sir3[100];
 strcpy(sir3,sir1);
 strcat(sir1,sir2);
 printf("sir1 contine: %s\n",sir1);
 strncat(sir3,sir2,5);
 /* Dupa ultimul caracter din sir3 se pune implicit '\0' */
 for (int i=0;i<=strlen(sir3);++i) printf("%02d %02X %c\n",sir3[i], sir3[i], sir3[i]);
 printf("\nsir3 contine: %s\n",sir3);
 printf(alfa);
 getch();
 return 0;
}
