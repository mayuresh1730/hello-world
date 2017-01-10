/*percentage of marks of student*/
#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int phy,math,che,bio,com,total;
float avg,percentage;
printf("marks of student in given subject= ");
scanf("%d%d%d%d%d",&phy,&math,&che,&bio,&com);
/*total marks*/
total=phy+math+che+bio+com;
if(phy<=100&&che<=100&&math<=100&&bio<=100&&com<=100)
{
printf("\ntotal marks=%d",total);
/*formula for avg*/
avg=total/5;
printf("\naverage=%f",avg);
/*formula for percentage*/
percentage=total/5;
printf("\npercent=%f",percentage);
}
else
{
printf("\nerror input marks must be less than 100 for each subject");
}
getch();
return 0;
}