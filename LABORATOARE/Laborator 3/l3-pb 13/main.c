#include <stdio.h>
#include <stdlib.h>

int main()
{
   float inaltime;
   char s;
  float varsta;
   printf("scrie genul persoanei");
   scanf("%c",&s);
   printf("scrie inaltimea in cm");
   scanf("%f",&inaltime);
   printf("scrie varsta in ani");
   scanf("%f",&varsta);
   if(s=='f') printf("%f",(50+0.75*(inaltime-150)+(varsta-20)/4) -10);
   if(s=='m') printf("%f",(50+(0.75*(inaltime-150))+((varsta-20)/4)));
    return 0;
}
