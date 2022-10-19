#include <stdio.h>
#include <stdlib.h>
///Se citește un şir de n numere întregi. Să se extragă subşirul de dimensiune maximă,ordonat crescător.


int main()
{ int n,a[100],v[100];
    printf("scrie nr de nr din sir n=");
    scanf("%d",&n);

   for(int i=1;i<=n;i++)
    {
        printf("\n a[%d]=",i);
        scanf("%d",&a[i]);
    }

   int lungime_maxima=0;
   int poz_maxima=0;
   int lungime=0, pozitie=0,i=0;

   while(i<n-1)
   {
       if(a[i]<a[i+1])
       {
           lungime=0;
           pozitie=i;///pozitia de start a secventei
           while(i<n-1&&a[i]<a[i+1])
           {
               lungime++;
               i++;
           }
           if(lungime>lungime_maxima)
           {
               lungime_maxima=lungime;
               poz_maxima=pozitie;

           }
       }
       else i++;
   }
   printf("Subsirul de lungime maxima incepe la pozitia poz_max=%d \n",poz_maxima);


   printf("Subsirul de lungime maxima crescator este: ");
   for(int i=poz_maxima;i<=poz_maxima+lungime_maxima;i++)
   {
       printf("%d ",a[i]);
   }
  return 0;

}

