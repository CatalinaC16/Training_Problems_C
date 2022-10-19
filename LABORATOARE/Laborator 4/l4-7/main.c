#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char s[50];
    printf("n=");
    gets(s);
    strrev(s);
    int i,n=0;
    for (i=0; i<strlen(s); i++)
       {
     switch(s[i])
        {
        case 'A' :
        {
            n+=pow(16,i)*10;
            break;
        }
        case 'B' :
        {
            n+=pow(16,i)*11;
            break;
        }
        case 'C' :
        {
            n+=pow(16,i)*12;
            break;
        }
        case 'D' :
        {
            n+=pow(16,i)*13;
            break;
        }
        case 'E' :
        {
            n+=pow(16,i)*14;
            break;
        }
        case 'F' :
        {
            n+=pow(16,i)*15;
            break;
        }
        default :
        {
            n+=pow(16,i)*(s[i]-'0');
        }
        }
       }

    printf("%s in hexazecimal este %d in dec\n ",strrev(s),n);

    return 0;
}
