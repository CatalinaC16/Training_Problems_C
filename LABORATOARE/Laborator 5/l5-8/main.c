#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int p=0;
///Să se scrie o funcţie care primind ca parametru un număr roman sub forma unui şir
///de caractere, returnează numărul respectiv ca număr arab în baza 10
void romane(char *m,int *p)
{
    switch(*m)
    {
    case 'M': *p=*p+1000;break;
    case 'D': *p=*p+500;break;
    case 'C': *p=*p+100;break;
    case 'L': *p=*p+50; break;
    case 'X': *p=*p+10; break;
    case 'V': *p=*p+5;  break;
    case 'I': *p=*p+1;  break;
    }
}
int main()
{
 char s[300];

 gets(s);
 for(int i=0;i<strlen(s);i++)
 {
     if(s[i]=='I'&&s[i+1]=='V'){p=p+4;i=i+1;}
     else if(s[i]=='I'&&s[i+1]=='X'){p=p+9;i=i+1;}
     else if(s[i]=='X'&&s[i+1]=='L'){p=p+40;i=i+1;}
     else if(s[i]=='X'&&s[i+1]=='C'){p=p+90;i=i+1;}
     else if(s[i]=='C'&&s[i+1]=='D'){p=p+400;i=i+1;}
     else if(s[i]=='C'&&s[i+1]=='M'){p=p+900;i=i+1;}
    else romane(&s[i],&p);
 }

 printf("%d",p);
    return 0;
}
