//find leap year using else if 
#include<stdio.h>
int main()
{
 int year;
 printf("Enter a year\n:");
 scanf("%d",&year);
 if(year%100==0) //if year divisable 100 is leap year
 {
 printf("%d is leap year",year);
 }
 else if(year%400==0) //if divisable by 400 is leap year
 {
 printf("%d is leap year",year);
 }
 else if(year%4==0) //divisable by 4 is leap year
 {
 printf("%d is leap year",year);
 }
 else
 {
 printf("%d is not a leap year",year); //otherwise not leap year
 }
 return 0;
}

//https://github.com/Badhrinathan

