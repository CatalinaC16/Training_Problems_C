/* Programul L11Ex1 */
#include <stdio.h>
#include <conio.h>
// Programul ilustrează prelucrarea fisierului pe caractere si siruri de caractere
int main()
{
    char ch, s[100], nume_fis[50]="D:\\fisier1.txt";
    int i;
    FILE *pf;
// crearea fişierului; scrierea caracterelor inclusiv '\n' introduse de la tastatura
    pf=fopen(nume_fis,"w");
    printf("Introduceti textul. Pentru a termina apasati CTRL+Z si ENTER \n");
    while ((ch=fgetc(stdin))!=EOF)
    {
        fputc(ch,pf);
    }
    fclose(pf);
    /*Adaugarea de siruri de caractere*/
    pf=fopen(nume_fis,"r+");
    fseek(pf,0l,SEEK_END);
    printf("Introduceti sirurile de caractere terminate cu ENTER. Pentru a termina\
apasati CTRL+Z si ENTER\n");
    while(fgets(s,100,stdin)!=(char*)0)
    {
        fputs(s,pf);
    }
    fclose(pf);
    /*Afisarea continutului */
    printf("CONTINUTUL FISIERULUI cu NUMEROTAREA LINIILOR:\n");
    i=0;
    pf=fopen(nume_fis,"r");
    while(fgets(s,100,pf)!=(char *)0)
    {
        printf("%d %s", i, s);
        i++;
    }
    fclose(pf);
    printf("Dupa apasarea unei taste fisierul va fi sters!\n");
    getch();
    remove(nume_fis);
    return 0;
}
