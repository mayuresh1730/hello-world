/*switching of two numbers*/
#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int b,c,d;
printf("\nenter two numbers");
scanf("%d%d",&c,&d);
/*trick used*/
b=c;
c=d;
d=b;
printf("switched numbers are %d\t%d",c,d);
getch();
return 0;
}