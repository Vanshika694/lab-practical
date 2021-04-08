#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5],element,num,i,location;
    printf("enter no of elements :\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n enter the elements to be inserted :");
    scanf("%d",&element);
    printf("\n enter the location:");
    scanf("%d",&location);
    for(i=num;i>=location;i--)
    {
        arr[i]=arr[i-1];
    }
    num++;
    arr[location-1]=element;
    for(i=0;i<num;i++)
    printf("\n %d",arr[i]);
    getch();
}