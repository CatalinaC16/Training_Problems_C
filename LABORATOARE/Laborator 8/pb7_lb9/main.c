#include <stdio.h>
#include <stdlib.h>
/*Să se scrie un program de rezolvare a problemei celor 8 regine (determinarea tuturor
aşezărilor pe tabla de şah a celor 8 regine astfel încât să nu se atace).
*/

int ataca(int linie, int memorie[])
{
    int i;
    for(i=0; i<linie; i++)
        if((memorie[linie]==memorie[i]) ||
                (abs(memorie[i]-memorie[linie])==linie-i))
            return 1;
    return 0;
}
void afiseaza(int dim,int memorie[])
{
    int l,c;
    for(l=0; l<=dim; l++)
        printf("_");
    for(l=0; l<dim; l++)
{


        printf("\n|");
    for(c=0; c<dim; c++)
        if(memorie[l]==c)
            printf("%c",6);
        else if((l+c)&1)
            printf(" ");
        else
            printf("%c",219);
    printf("|");
}
printf("\n");
for(l=0; l<=dim; l++)
    printf("-");
printf("\n");
printf("o tasta, va rog!\n");
getch();
}
void main()
{
    int n,memorie[100],nivel;
    printf("dimensiunea tablei de joc=");
    scanf("%d",&n);
    nivel=0;

    memorie[nivel]=-1;

    while(nivel>=0)
    {
        if(nivel==n)
        {
            afiseaza(nivel,memorie);

            nivel--;
        }

        memorie[nivel]++;

        if(memorie[nivel]==n)

            nivel--;
        else

            if(!ataca(nivel,memorie))
                memorie[++nivel]=-1;

    }
}
