#include <stdio.h>
#include <conio.h>
#include <string.h>
#define alfa "\nApasati o tasta!"
int main()
{
char sir1[]="SIR DE CARACTERE";
 char *sir2="SIR DE CARACTERE";
 char sir3[100],sir4[100],sir5[100];
 strcpy(sir3,sir1);
 printf("sir3 contine: %s\n",sir3);
 strcpy(sir4,"Functii standard de prelucrare siruri de caractere");
 printf("sir4 contine: %s\n",sir4);
 strncpy(sir5,sir2,6); /* sir5 contine SIR DE */
 sir5[6]='\0';
 printf("sir5 contine: %s\n",sir5);
 printf(alfa);
 getch();
 return 0;
}
