/*gross salary of ramesh*/
#include<stdio.h>
#include<conio.h>
int main()
{
int s,da,ha,gs;
printf("salary of ramesh is");
scanf("%d",&s);
/*percentage of ramesh salary in dearness allowance*/
da=s*40/100;
/*percentage of ramesh salary in home allowance*/
ha=s*20/100;
/*formula for gross salary*/
gs=s+da+ha;
printf("gross salary of ramesh is=%d",gs);
getch();
return 0;
}

