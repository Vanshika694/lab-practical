/*

AIM:Write a program to generate first n number of Fibonacci series 

18. Write a C program to generate first n number of Fibonacci series
*/

#include <stdio.h>

int main() 
{
    int no=10,i=0,j=1;
    printf(" %d %d",i,j);
    while(no>0)
    {
        printf(" %d",i+j);
        j=i+j;
        i=j-i;
        no--;
    }
    return 0;
}
