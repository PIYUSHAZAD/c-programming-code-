//Swapping program using call by reference
#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a=0;
    int b=0;
    printf("\t\t\tProgram to swap two numbers using call by reference\n");
    printf("Please give the first number ");
    scanf("%d",&a);
    printf("Please give the second number ");
    scanf("%d",&b);
    printf("First number is %d\n",a);
    printf("Second number is %d\n",b);
    swap(&a,&b);
    printf("Now the first number is %d\n",a);
    printf("Now the second number is %d\n",b);
    printf("So we can say that the two entered numbers are swapped\n");
    getch();
}
 