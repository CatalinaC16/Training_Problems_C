#include <stdio.h>
#include <stdlib.h>
///Să se scrie un program modularizat care citeşte datele legate de studenţii unei
///grupe: nume, data naşterii, adresa şi îi afișează în ordine alfabetică.
typedef struct
{
    char nume[30];
    int ziua;
    int luna;
    int anul;
    char tara[40];
    char localitatea[30];
    char strada[30];
    int numarul;
} Student;

int main()
{
    int n;
    printf("numarul de studenti este ");
    scanf("%d",&n);
    Student *s=(Student*)malloc(n*sizeof(Student));
    Student d;

    for(int i=0; i<n; i++)
    {

        fflush(stdin);
        printf("nume ");
        gets(d.nume);
        scanf("%d %d %d", &d.ziua,&d.luna,&d.anul);
        fflush(stdin);
          printf("tara ");
        gets(d.tara);
        fflush(stdin);
          printf("localitate ");
        gets(d.localitatea);
        fflush(stdin);
          printf("stada ");
        gets(d.strada);
          printf("nr ");
        scanf("%d",&d.numarul);

        s[i]=d;
    }
    Student aux;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(s[i].nume,s[j].nume)>0)
            {
                aux=s[i];
                s[i]=s[j];
                s[j]=aux;
            }

        }


    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d %d %s %s %s %d \n",s[i].nume,s[i].ziua,s[i].luna,s[i].anul,s[i].tara,s[i].localitatea,s[i].strada,s[i].numarul)
   ; }

    return 0;
}
