/*distance between two cities in km,m,feet,inches,cm*/
#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
float km,m,feet,inch,cm;
printf("\ndistance between two cities in km");
scanf("%f",&km);
/* meter conversion*/
m=1000*km;
printf("\nvalue of distance in meter %f",m);
/* formula for centimeter*/
cm=m*100;
printf("\nvalue of distance in centimeters %f",cm);
/*formula for inch*/
inch=cm/2.6;
printf("\nvalue of distance in inches %f",inch);
/*formula for feet to inches*/
feet=inch/12;
printf("\nvalue of distance in feet is %f",feet);
getch();
return 0;
}
