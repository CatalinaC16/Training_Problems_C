#include <stdio.h>
#include <stdlib.h>
///Să se creeze un fişier care să conţină produsele unui magazin. Un produs este
///reprezentat printr-o structură ce conţine codul produsului, denumirea, unitatea de măsură,
///cantitatea, preţul unitar. Plecând de la acest fişier, să se obţină un fişier sortat după codul
///produsului.

typedef struct
{
    int cod;
    char denumire[30];
    char unitate_de_masura[50];
    int cantitate;
    float pret;

} PRODUS;

void scriere_in_fisier(int n,char *nume_fisier)
{
    FILE* fisier=fopen(nume_fisier,"w");
    ///FILE* fisier=fopen(nume_fisier,"wb");
    PRODUS p;
    for(int i=0; i<n; i++)
    {
        printf("cod=");
        scanf("%d",&p.cod);

        fflush(stdin);

        printf("denumire=");
        gets(p.denumire);

        fflush(stdin);/// cand citim sir de caractere

        printf("unitate de masura=");
        gets(p.unitate_de_masura);


        printf("cantitate=");
        scanf("%d",&p.cantitate);


        printf("pret=");
        scanf("%f",&p.pret);


        fprintf(fisier,"%d %s %s %d %f \n",p.cod,p.denumire,p.unitate_de_masura,p.cantitate,p.pret);
        ///fwrite(&p,sizeof(PRODUS),1,fisier);
    }
    fclose(fisier);
}

void citire_din_fisier(int n, char* nume_fisier,PRODUS *produse)
{
    ///FILE* fisier=fopen(nume_fisier,"r");
    FILE* fisier=fopen(nume_fisier,"rb");
    for(int i=0; i<n; i++)
    {
    fscanf(fisier,"%d %s %s %d %f", &produse[i].cod,produse[i].denumire,produse[i].unitate_de_masura,&produse[i].cantitate, &produse[i].pret);
    }

     ///fread(produse,sizeof(PRODUS),n,fisier);
    fclose(fisier);
}

void afisare(int n, PRODUS *produse)
{
    for(int i=0; i<n; i++)
    {
        printf("%d %s %s %d %f \n", produse[i].cod,produse[i].denumire,produse[i].unitate_de_masura,produse[i].cantitate, produse[i].pret);
    }
}
void sortare(int n, PRODUS *produse)
{
    PRODUS aux;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(produse[i].cod>produse[j].cod)
            {
                aux=produse[i];
                produse[i]=produse[j];
                produse[j]=aux;
            }
        }
    }
}

int main()
{
    int n;
    printf("numarul de produse este ");
    scanf("%d",&n);
   char nume_fisier[10]="date.txt";

     ///char nume_fisier[10]="date.dat";
    PRODUS *produse=(PRODUS*)malloc(n*sizeof(PRODUS));
    scriere_in_fisier(n,nume_fisier);
    citire_din_fisier(n,nume_fisier,produse);
    sortare(n,produse);
    afisare(n,produse);


    return 0;
}
