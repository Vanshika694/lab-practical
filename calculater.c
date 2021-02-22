/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* 
1. Write a program to that performs as calculator:(addition, multiplication, division, subtraction).  
*/

#include<stdio.h>
int main()
{
    int i,j;
    printf("\n Enter 1st Integer Value :");
    scanf("%d",&i);
    printf("\n Enter 2nd Integer Value :");
    scanf("%d",&j);
    printf("\n addition : %d",i+j);
    printf("\n multiplication : %d",i*j);
    printf("\n division : %d",i/j);
    printf("\n subtraction : %d",i-j);
    return 0;
}

