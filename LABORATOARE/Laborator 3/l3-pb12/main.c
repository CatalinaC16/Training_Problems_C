#include <stdio.h>
#include <stdlib.h>
#include<math.h>
///Să se scrie un program care determină poziția relativă a unei linii drepte
///față de un cerc. Programul va citi:coordonatele centrului cercului, raza cercului
///și coordonatele a două puncte care determină linia
int main()
{
    float c1,c2,a1,a2,b1,b2,R;

    printf("Coordonatele cercului sunt");
    scanf("%f %f",&c1,&c2);
    printf("raza cercului este");
    scanf("%f",&R);
    printf("Coordonatele a doua puncte care determina linia");
    scanf("%f %f %f %f",&a1,&a2,&b1,&b2);
    float OA, OB;
    OA=sqrt(pow(a1-c1,2)+pow(a2-c2,2));
    OB=sqrt(pow(b1-c1,2)+pow(b2-c2,2));
    printf("%f %f",OA,OB);
 if (OA==R&&OB==R)printf("SECANTA");
    if(OA==R||OB==R)printf("TANGENTA");
    else if(OA<R) if(OB>R) printf("exterior");
        else printf("interior");
    else if(OA>R)if(OB<R) printf("exterior");
        else printf("exterior");

    return 0;
}
