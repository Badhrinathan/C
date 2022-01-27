//factorial using while loop
#include<stdio.h>
int main()
{
    int number;
    long int factorial;
    printf("Enter an integer:");
    scanf("%d",&number);
    factorial=1; //intialize
      while(number>0) //condition
      {
          factorial*=number; //statement
          --number; //decrement
      }
     printf("Factorial=%d\n",factorial);
     return 0; 
}
/*
Factorial
n!=(n-1)!
"NOTE: 0!=1 "
Example:
5!=5*4*3*2*1
51=120
*/

//https://github.com/Badhrinathan
