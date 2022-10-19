#include <stdio.h>
 #include <stdlib.h>
 #define INFINIT 0x7fffffff
 int main()
 {
 int operand1,operand2,rezultat;
 char operatie;
 printf("\nScrieti expresia fara spatii intre operanzi si operator\n");
 scanf("%d%c%d",&operand1,&operatie,&operand2);
 switch(operatie)
 {
 case '+': rezultat=operand1+operand2;
 break;
 case '-': rezultat=operand1-operand2;
 break;
 case '*': rezultat=operand1*operand2;
 break;
 case '/': if (operand2!=0)
rezultat = operand1/operand2;
 else if (operand1>0) rezultat=INFINIT;
 else rezultat=-INFINIT;
 break;
 default:
 exit(1);
 };
printf("\n%d %c %d = %d\n", operand1, operatie, operand2, rezultat);
 return 0;
 }
