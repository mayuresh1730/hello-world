/*price and profit*/
#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
float price,profit,pricei;
printf("\nprice of the 15 items is");
scanf("%f",&price);
/* formulae*/
profit=price/50;
price=price+profit;
pricei=(price-profit)/15;
printf("\nprice of each item and total profit is %f \t %f",pricei,profit);
profit=profit/15;
printf("\nprofit on each item is %f",profit);
getch();
return 0;
}

