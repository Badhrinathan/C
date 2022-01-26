//finding a leap year using nested if else statement
#include<stdio.h>
int main()
{
 int year;
 printf("Enter a year:");
 scanf("%d",&year);
 if(year%100==0)
 {
  if(year%400==0)
  printf("%d is Leap year",year);
  else
  printf("%d is not a leap year",year); 
 }
 else
 {
  if(year%4==0)
  printf("%d is leap year",year);
  else
  printf("%d is not leap year",year);
 }
 return 0;
}
//https://github.com/Badhrinathan
