
//Programul următor prezintă operații asupra datelor de tipul "enum":
/* Programul L10Ex3 */
#include <stdio.h>
#include <conio.h>
/* Exemplu de folosire a tipului "enum" */
int main()
{
 typedef enum{zero,unu,doi,trei,patru,cinci} NR;
 NR x,y;
 int z,w;
 x=doi; /* x=2 */
 y=trei; /*x=3*/
 z=x+y;
 w=x*y;
 printf("\nz=%d w=%d\n",z,w);
 x=2;y=3; /* o astfel de atribuire nu este intocmai indicata; ar trebui folosite numele
 sugestive din cadrul enum-ului*/
 z=x+y;
 w=x*y;
 printf("\nz=%d w=%d\n",z,w);
 return 0;
}
