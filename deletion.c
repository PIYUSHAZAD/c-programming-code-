//Program to delete a value from the array
#include<stdio.h>
#include<conio.h>
void main()
{
    int size=0;
    int arr[10];
    int val=0;
    int pos=0;
    printf("\t\tProgram to delete a given value from a array\n");
    printf("Creating a Array first\n");
    printf("Please give the size of the array that you want to create\n");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Please give the value at %d\n",i);
        scanf("%d",&arr[i]);
    }
    printf("Please give the value that you want ot delete from your array\n");
    scanf("%d",&val);
    for (int i = 0; i < size; i++)
    {
        if (val==arr[i])
        {
            pos=i;
            break;
        }
    }
    for (int i = pos+1; i < size; i++)
    {
        arr[i-1]=arr[i];
    }
    size-=1;
    printf("The updated Array is as follows\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n",arr[i]);
    }
    printf("Thank you for using my program\n");   
    getch();
}