#include<stdio.h>
int main()
{
 int choice;
 float a,b,c;
 printf("Enter a two numbers:");
 scanf("%f %f",&a,&b);
 printf("1:Add\n");
 printf("2:sub\n");
 printf("3:multiply\n");
 printf("4:Divide\n");
 printf("Enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
       c=a+b;
       printf("Add=%f",c);
       break;
  case 2:
       c=a-b;
       printf("Sub=%f",c);
       break;
  case 3:
       c=a*b;
       printf("Multiply=%f",c);
       break;
  case 4:
       c=a/b;
       printf("Divide=%f",c);
       break;
  default:
       printf("please select the correct choice");
       break; 
 }   
 return 0;
}
/*
switch(expression)
{
 case 1:
      statements;
      break;
 case 2:
      statements;
      break;
 case n:
      statements;
      break;
 default:
      statements;
      break;
}
*/
//https://github.com/Badhrinathan
