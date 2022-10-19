# include <stdio.h>
# include <stdlib.h>
# include <math.h>

///ce e un patrulater determinat de coordonatele varfurilor

struct punct{ float x,y;};//b==1 => camp x//b==0 => camp y//a==1 => max//a==0 -> min

float minmax(struct punct v[4],int a,int b)
{
    float m;
    if(b) m=v[0].x;
    else m=v[0].y;
    int i;
    for (i=1; i<=3; i++)if(a)
        {
            if(b)
            {
                if(v[i].x>m) m=v[i].x;
            }
            else
            {
                if(v[i].y>m) m=v[i].y;
            }
        }
        else
        {
            if(b)
            {
                if(v[i].x<m) m=v[i].x;
            }
            else
            {
                if(v[i].y<m) m=v[i].y;
            }
        }
    return m;
}
float det(struct punct a,struct punct b,struct punct c)
{
    float m;
    m= (a.x-b.x)*(b.y-c.y)-(b.x-c.x)*(a.y-b.y);
    return m;
}
int paralel(struct punct a,struct punct b)
{
    if(a.x*b.y==a.y*b.x) return 1;
    return 0;
}
int perpend(struct punct a,struct punct b)
{
    if(a.x*b.x+a.y*b.y==0) return 1;
    return 0;
}
int egal(struct punct a,struct punct b)
{
    if (sqrt(pow(a.x,2)+pow(a.y,2))==sqrt(pow(b.x,2)+pow(b.y,2)))return 1;
    return 0;
}
int main()
{
    int i,j,a=0,b=0;
    struct punct v[4],aux,d[4];
    for (i=0; i<4; i++)
    {
        printf("\nv[%d].X=",i+1);
        scanf("%f",&v[i].x);
        printf("v[%d].Y=",i+1);
        scanf("%f",&v[i].y);
    }
    for (i=0; i<3; i++)
    {
        if(i==1) a++;
        if(i==2) b++;
        for (j=0; j<4; j++)if((v[j].x==minmax(v,a,1))&&(v[j].y==minmax(v,b,0)))
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    }
    if(det(v[0],v[1],v[2])<0||det(v[1],v[2],v[3])<0||det(v[2],v[3],v[1])<0) printf("\n patrulaterul este concav\n");
    else
    {
        d[0].x=v[1].x-v[0].x;
        d[0].y=v[1].y-v[0].y;
        d[1].x=v[2].x-v[1].x;
        d[1].y=v[2].y-v[1].y;
        d[2].x=v[2].x-v[3].x;
        d[2].y=v[2].y-v[3].y;
        d[3].x=v[3].x-v[0].x;
        d[3].y=v[3].y-v[0].y;
        if (paralel(d[0],d[2])&&paralel(d[1],d[3]))
        {
            if(!perpend(d[0],d[1]))
            {
                if(egal(d[0],d[1])) printf("\n romb\n");

                else printf("\n paralelogram\n");
            }
            else
            {
                if (egal(d[0],d[1]))printf("\n patrat\n");
                else printf("\n dreptunghi\n");
            }
        }
        else if((paralel(d[0],d[2])&&!paralel(d[1],d[3]))||(!paralel(d[0],d[2])&&paralel(d[1],d[3])))printf("\ntrapez\n");
        else printf("\n patrulater convex oarecare");
    }
    getchar();
    return 0;
}
