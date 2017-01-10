/* perimeter as well as area of rectangle and circle*/
#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
float leng,bre,area,peri,circum,areac,rad;
printf("\nlength and breadth of rectangle are respectively");
scanf("%f%f",&leng,&bre);
/* formula for area of rectangle*/
area=leng*bre;
/*perimeter of rectangle*/
peri=2*(leng+bre);
printf("\narea of rectangle is %f and its perimeter is %f",area,peri);

printf("\nradius of circle is");
scanf("%f",&rad);
/* area of circle*/
areac=3.14159*rad*rad;
/* circumference*/
circum=2*3.14159*rad;
printf("\narea of circle and its circumference are respectively %f,%f",areac,circum);
getch();
return 0;
}


