#include <stdio.h>
#include <conio.h>
#include <string.h>
#define alfa "Apasati o tasta!"
int main()
{
 char sir1[]="SIR DE CARACTERE";
 char *sir2="SIR DE CARACTERE";
 int n1,n2,n3;
 n1=strlen(sir1);
 n2=strlen(sir2);
 n3=strlen("SIR DE CARACTERE");
 /* Atat n1,cat si n2 si n3 au ca valoare 16 */
 printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);
 printf("%s\n",alfa);
 getch();
 return 0;
}
