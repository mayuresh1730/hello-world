/*calculation of simple interest*/
#include<stdio.h>
#include<conio.h>
int main()
{
int p,n;
float r,si;
printf("enter the values of p,n,r");
scanf("%d %d %f",&p,&n,&r);
/*formula for simple interest*/
si=p*n*r/100;
printf("%f\n",si);
getch();
return 0;
}

