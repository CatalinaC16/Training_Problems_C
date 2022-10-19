#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,y;
float impartire;
int cat;

  printf("scrie doua numere intregi");
    scanf("%d %d", &x,&y);
  impartire=(float)x/y;
   cat=(int)x/y;
    printf("%f\n",impartire);
    printf("%d",cat);
    return 0;
}
