#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
 char *str1,*str2;
 /* Aloca memorie pentru primul sir de caractere */
 if ((str1 = (char *) malloc(100)) == NULL)
 {
 printf("Memorie insuficienta\n");
 exit(1);
 }
 printf("\nIntroduceti primul sir de caractere terminat cu ENTER\n");
 gets(str1);
 printf("\nSirul de caractere introdus este\n%s\n",str1);
 /* Aloca memorie pentru al doilea sir de caractere */
 if ((str2 = (char *) calloc(100,sizeof(char))) == NULL)
 {
 printf("Memorie insuficienta\n");
 exit(2);
 }
 printf("\nIntroduceti al doilea sir de caractere terminat cu ENTER\n");
 gets(str2);
 printf("\nSirul de caractere introdus este\n%s\n",str2);
 printf("\nUrmeaza eliberarea memoriei. Apasati o tasta\n");
 getch();
 /* Eliberarea memoriei */
 free(str1);
 free(str2);
 return 0;
}
