

/*
AIM:Write a C program to input an integer number and check the last digit of number is even or odd. 

15. Write a C program to input an integer number and check the last digit of number is even or odd.
*/
#include <stdio.h>

int main() 
{
     int i;
     printf("\n Enter any Number : ");
     scanf("%d",&i);
     if((i%10)%2==0)
     {
            printf("\n Last Digit of Number is Even");
     }
     else
     {
            printf("\n Last Digit of Number is Odd");
     }
     return 0;
}
