#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=15,c=30;
	clrscr();
	if(a>b)
	{
		if (a>c)
		{
			printf("a is max");
		}
		else
		{
			printf("c is max");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is max");
		}
		else
		{
			printf("c is max");
		}
	}
	getch();
  }



