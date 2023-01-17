//Programe to insert a value at a desired place in an unsorted Array
#include<stdio.h>
#include<conio.h>
void main()
{
    int size=0;
    int arr[10];
    int val=0;
    int pos=0;
    printf("\t\tProgram to insert a value in a Array\n");
    printf("Creating a Array first\n");
    printf("Please give the size of the array that you want to create\n");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Please give the value at %d\n",i);
        scanf("%d",&arr[i]);
    }
    printf("Please give the value that you want to insert in your array\n");
    scanf("%d",&val);
    printf("Please give the position at which you want ot insert the value in your array\n");
    scanf("%d",&pos);
    pos=pos-1;
    size=size+1;
    for (int i = size-1; i>=pos; i--)
    {
      arr[i+1]=arr[i];
    }
    arr[pos]=val;
    printf("Value inserted Successfully\n");
    printf("Printing the new Array\n");
    for (int i = 0; i < size; i++)
    {
       printf("%d\n",arr[i]);
    }
    printf("Thank you for using my program\n");
    getch();
}
