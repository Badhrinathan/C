#include<stdio.h>
int main()
 {
     int a=10,b=15,answer;
     answer=(a&b);  //AND operator
     printf("AND opertor value=%d\n",answer);
     answer=(a|b); //OR operator
     printf("OR operator value=%d\n",answer);
     answer=(~a);  //NOT operator
     printf("NOT operator value=%d\n",answer);
     answer=(a^b); //XOR operator
     printf("XOR operator value=%d\n",answer);
     answer=(a>>2);
     printf("right shift value=%d\n",answer);
     answer=(a<<2);
     printf("left shift operator=%d\n",answer);
     
     return 0;
     
 }
 /****
 & AND
 | OR
 ^ XOR(Exclusive)
 ~ NOT(one's compilement)
 >> Right shift
 << left shift
 
 AND-both values are true otherwise false
 OR-If one condition or both condition is true ans is true otherwise false
 NOT-
 ****/
