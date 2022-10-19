#include <stdio.h>
#include <stdlib.h>
#include<string.h>

///Să se scrie un program modularizat care citeşte datele legate de studenţii unei
///grupe: nume, data naşterii, adresa şi îi afișează în ordine alfabetică.

typedef struct
{
    int ziua;
    char luna[20];
    int anul;

}ZiDeNastere;

typedef struct
{
    char tara[20];
    char localitate[20];
    char strada[20];
    int numar;

}Adresa;

typedef struct
{
char nume[40];
ZiDeNastere ziua_de_nastere_curenta;
Adresa adresa_curenta;

}Student;

int main()
{
    int n;
    scanf("%d",&n);
    Student*st=(Student*)malloc(n*sizeof( Student));/// am alocat dinamic un vector de structuri in care
                                                   /// sa pot citi datele a n studenti

    Student s;

    Adresa a;
    ZiDeNastere z;
    for(int i=0;i<n;i++)
    {
        fflush(stdin);///golim ca sa citim string
        printf("nume\n");
        gets(s.nume);

        printf("ziua\n");
        scanf("%d",&z.ziua);
        fflush(stdin);
        printf("luna\n");
        scanf("%s",z.luna);
        printf("anul\n");
        scanf("%d",&z.anul);

        s.ziua_de_nastere_curenta= z;


        fflush(stdin);
        printf("tara\n");
        scanf("%s",a.tara);
        fflush(stdin);
        printf("localitate\n");
        scanf("%s",a.localitate);
        fflush(stdin);
        printf("strada\n");
        scanf("%s",a.strada);
        printf("numar\n");
        scanf("%d",&a.numar);

        s.adresa_curenta=a;

        st[i]=s;
    }
 Student aux;
    for(int i=0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
         {
            if(strcmp(st[i].nume,st[j].nume)>0)
            {
                aux=st[i];
                st[i]=st[j];
                st[j]=aux;
            }

         }
         printf("%s %d %s %d %s %s %s %d \n",st[i].nume,
              st[i].ziua_de_nastere_curenta.ziua,
              st[i].ziua_de_nastere_curenta.luna,
              st[i].ziua_de_nastere_curenta.anul,
              st[i].adresa_curenta.tara,st[i].adresa_curenta.localitate,st[i].adresa_curenta.strada,st[i].adresa_curenta.numar
              );

    }
    return 0;
}
