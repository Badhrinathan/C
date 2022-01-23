#include <stdio.h>

int main() {
    char a[15];
    int b;
    printf("Enter your name:");
    scanf("%s", a);           //scanf used to get input 
    printf("Enter your age:");
    scanf("%d", &b);
    printf("Your name is: %s",a); //display name(string)
    printf("\nyour age is:%d",b); //display age(int)
    
    return 0;
}

/***
you can also use gets() puts() 

#include<stdio.h>
int main()
{
  char c[15];
  puts("Enter your name:");
  gets(c);
  puts("Your name:");
  puts(c);
}
***/

//https://github.com/Badhrinathan
