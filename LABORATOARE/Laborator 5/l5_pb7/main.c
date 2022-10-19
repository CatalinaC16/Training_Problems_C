#include <stdio.h>
#include <stdlib.h>
int get_days(int l)
{
    switch(l)
    {
case 1:
    return 31;
case 2:
    return 28;
case 3:
    return 31;
case 4:
    return 30;
case 5:
    return 31;
case 6:
    return 30;
case 7:
    return 31;
case 8:
    return 31;
case 9:
    return 30;
case 10:
    return 31;
case 11:
    return 30;
case 12:
    return 31;
    }
}

int esteBisect(int x)
    {
        if((x%4==0&&x%100!=0)||(x%400==0))
            return 1;
        else
            return 0;
    }

int main()
{
    int ziua,luna,anul;
    scanf("%d %d %d",&ziua,&luna,&anul);
    int nr_zile_trecute=0;
    int nr_zile_ramase=365;

    for(int i=1; i<=luna-1; i++)
    {
        nr_zile_trecute+=get_days(i);

    }

    nr_zile_trecute+=ziua;
    if(esteBisect(anul))
    {
        if(luna>2)
        {
            nr_zile_trecute++;
        }
        nr_zile_ramase++;

    }
    nr_zile_ramase-=nr_zile_trecute;
    printf("%d \n %d", nr_zile_trecute,nr_zile_ramase);
    return 0;
}
