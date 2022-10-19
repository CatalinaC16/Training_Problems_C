/* Programul exemplifica utilizarea functiei strcmp*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define alfa "\nApasati o tasta!"
int main()
{
char sir1[100]="SIR DE CARACTERE";
 char *sir2="SIR de caractere";
 int i,j,k,l;
 i=strcmp(sir1,sir2);/* i<0 , rezulta sir1<sir2 */
printf("i=%d\n",i);
j=strncmp(sir1,sir2,3);/*j=0 ,rezulta ca primele 3 caractere din sir1 si sir2 sunt egale */
printf("j=%d\n",j);
k=stricmp(sir1,sir2); /* k=0, rezulta ca cele 2 siruri sunt egale */
printf("k=%d\n",k);
l=strnicmp(sir1,"SIR de 10 caractere",6); /*l=0 */
printf("l=%d\n",l);
printf(alfa);
getch();
 return 0;
}
