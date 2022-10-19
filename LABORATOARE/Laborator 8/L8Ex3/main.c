#include <stdio.h>
#include <conio.h>
/* Numerele lui Fibonacci */
int fib1(int n)
/* VARIANTA RECURSIVA */
{
 if (n==0) return 0;
 else if (n==1) return 1;
 else return (fib1(n-1)+fib1(n-2));
}
int fib2(int n)
/* VARIANTA NERECURSIVA */
{
 int i,x,y,z;
 if (n==0) return 0;
 else if (n==1) return 1;
 else {
 x=1;y=0;
 for(i=2;i<=n;++i)
 {
 z=x; x=x+y; y=z;
 }
 return x;
 }
}
int main(void)
{
 int n;
 char ch;
 ch='D';
 while ((ch=='d')|| (ch=='D')) {
 printf("\nIntroduceti n=");
 scanf("%d",&n);
 /// printf("\nCALCUL RECURSIV: fib(%d)=%d\n",n,fib1(n));
 printf("\nCALCUL NERECURSIV: fib(%d)=%d\n",n,fib2(n));
 printf("\nDoriti sa continuati ? Da=D/d");
 ch=getch();
 }
 return 0;
 }
