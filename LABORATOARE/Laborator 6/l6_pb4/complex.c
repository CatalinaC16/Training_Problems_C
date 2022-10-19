#include<stdio.h>
#include<math.h>
#include "complex.h"
int citire(int a)
{
    scanf("%d",&a);
    return a;

}

void adunare(int a,int b,int c,int d,int imaginar,int real )
{
   imaginar=(a+c);
    real=(b+d);
    printf("%di + %d",imaginar,real);
}
void scadere(int a,int b,int c,int d,int imaginar,int real )
{
   imaginar=(a-c);
    real=(b-d);
    printf("%di ",imaginar);
    if(real<0)printf("%d",real);
    else  printf("+ %d",real);
}
void inmultire(int a,int b,int c,int d,int imaginarprodus,int realprodus)
{
   imaginarprodus=a*d+b*c;
   realprodus=b*d-a*c;
   printf("%di ",imaginarprodus);
    if(realprodus<0)printf("%d",realprodus);
    else  printf("+ %d",realprodus);

}
void conjugat(int a,int b)
{
    if(a<0)a=abs(a);
    printf("%di + %d",a,b);
}

void impartire(int a,int b,int c, int d,float realimp,float imaginarimp)
{
    realimp=((float)(a*b+c*d))/((float)(pow(b,2)+pow(d,2)));
    imaginarimp=(float)((float)(b*c-a*d)/(float)(pow(b,2)+pow(d,2)));

     printf("%fi ",imaginarimp);
    if(realimp<0)printf("%f",realimp);
    else  printf("+ %f",realimp);
}
