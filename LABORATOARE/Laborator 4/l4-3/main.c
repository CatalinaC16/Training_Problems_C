#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float a[100];
    float minim, maxim;
    int poz_min,poz_max;

    printf("scrie nr de elemente \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%f",&a[i]);
    }
    minim=a[0];poz_min=0;
    maxim=a[0];poz_max=0;
    for(int i=0; i<n; i++)
    {
      if(minim>a[i]){minim=a[i];poz_min=i;}
      if(maxim<a[i]){maxim=a[i];poz_max=i;}
    }
    printf("minimul este %f pozitia sa este %d",minim,poz_min);
    printf("maximul este %f pozitia sa este %d",maxim,poz_max);
    return 0;
}
