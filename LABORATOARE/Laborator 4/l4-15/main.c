#include <stdio.h>
#include <stdlib.h>
///Se dau 2 şiruri de n si respectiv m elemente de tip întreg. Să se calculeze:
///a) şirul ce conţine elementele comune ale celor două şiruri;
///b) şirul ce conţine toate elementele celor două şiruri luate o singura dată;
///c) şirul ce conţine elementele primului şir din care au fost eliminate elementele comune.
int main()
{
    int a[100],b[100],comune[200],reuniune[200],scadere[100],necomunea[100],necomuneb[100],comuneodata[100];
    int n,m;

    printf("scrie nr de elemente al sirului a: n=");
    scanf("%d",&n);

    printf("scrie nr de elemente al sirului b: m=");
    scanf("%d",&m);

    for(int i=1; i<=n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n");

    for(int i=1; i<=m; i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }

    int k=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(a[i]==b[j])
            {

                comune[k]=a[i];
                k++;
            }
        }
    }

    int  u=0;
    for(int i=0; i<k; i++)
    {
        int gasit=0;
        for(int j=0; j<i; j++)
        {
            if(comune[i]==comune[j])gasit=1;

        }
        if(gasit==0)
        {
          comuneodata[u]=comune[i];
            u++;
        }
    }

    for(int j=0;j<u;j++)
    {
        printf("comuneodata[%d]=%d",j,comuneodata[j]);
        printf("\n");
    }

    int p=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<u; j++)
        {
            if(!(a[i]==comuneodata[j]))
            {
                p++;
                necomunea[p]=a[i];


            }
        }
    }
    int q=0;
    for(int i=1; i<=m; i++)
    {
        for(int j=0; j<u; j++)
        {
            if(!(b[i]==comuneodata[j]))
            {
                   q++;
                necomuneb[q]=b[i];

            }
        }
    }

printf("\n");
    ///necomune a
    for(int j=1;j<=p;j++)
    {
         printf(" necomunea[%d]=%d",j,necomunea[j]);
         printf("\n");
    }

printf("\n");
    ///necomune b
     for(int j=1;j<=q;j++)
    {
         printf(" necomuneb[%d]=%d",j,necomuneb[j]);
         printf("\n");
    }

printf("\n");

    ///calculam sirul reuniune
    int r=0;
    for(int j=1;j<=p;j++)
    {
        reuniune[r]=necomunea[j];
        r++;
    }
    for(int j=1;j<=q;j++)
    {
        reuniune[r]=necomuneb[j];
        r++;
    }
    for(int j=0;j<u;j++)
    {
        reuniune[r]=comuneodata[j];
        r++;
    }
printf("\n");
    for(int i=0;i<r;i++)
    {
        printf(" reuniune[%d]=%d ",i,reuniune[i]);
        printf("\n");
    }

    return 0;
}
