#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
int main()
{ float unghi,mf,s;
int d,m;

    printf("scrie unghi");
    scanf("%f",&unghi);
    unghi=(unghi*180)/pi;
    d=(int)unghi;
    m=(unghi-d)*60;
    mf=(float)(unghi-d)*60;
    s=(mf-m)*60;
    printf("%f %d %d %f",unghi,d,m,s);
    return 0;
}
