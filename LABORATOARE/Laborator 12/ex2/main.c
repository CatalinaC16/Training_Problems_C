/* Programul L11Ex2 */
#include <stdio.h>
/* Programul ilustreaza prelucrarea binara a unui fisier */
typedef struct
{
    char nume[40];
    long suma;
} ARTICOL;
void afisare(char *nume_fis)
{
    FILE *pf;
    ARTICOL buf;
    int i;
    pf=fopen(nume_fis,"rb");
    printf("NR.CRT. SUMA NUMELE-PRENUMELE\n");
    i=0;
    while(fread(&buf,sizeof(ARTICOL),1,pf)>0)
    {
        printf("%6d %10ld %-40s\n",i,buf.suma,buf.nume);
        i++;
    }
    fclose(pf);
}
int main()
{
    FILE *pf;
    ARTICOL buf;
    int i,n;
    char nume_fis[40]="D:\\fisier2.dat";
    /*Crearea fisierului */
    printf("Introduceti numarul de persoane: ");
    scanf("%d",&n);
    pf=fopen(nume_fis,"wb");
    for(i=1; i<=n; i++)
    {
        fflush(stdin);
        printf("Numele persoanei: ");
        fgets(buf.nume,40,stdin);
        printf("Suma = ");
        scanf("%ld",&buf.suma);
        fwrite(&buf,sizeof(ARTICOL),1,pf);
    }
    fclose(pf);
    printf("\nCONTINUTUL FISIERULUI\n");
    afisare(nume_fis);
    return 0;
}
