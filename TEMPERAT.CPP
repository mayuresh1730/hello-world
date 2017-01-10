/*fahrenheit to celcius conversion*/
#include<stdio.h>
#include<conio.h>
int main()
{
float f,c;
printf("current temperature of city in fahrenheit");
scanf("%f",&f);
/* formula for conversion*/
c=(f-32)/1.8;
printf("temperature of city in celcius=%f",c);
getch();
return 0;
}



