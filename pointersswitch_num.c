//Program too swap two numbers using pointers
#include<stdio.h>
#include<conio.h>
void main()
{
    int *ptr1;
    int *ptr2;
    int num1=0;
    int num2=0;
    ptr1=&num1;
    ptr2=&num2;
    printf("\t\t\tProgram to seprate two numbers using pointers\n");
    printf("Please enter the first number\n");
    scanf("%d",&num1);
    printf("Please enter the second number\n");
    scanf("%d",&num2);
    printf("Swapping the 2 numbers\n");
    int temp=0;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("Now the first number is\n");
    printf("%d",*ptr1);
    printf("\nNow the second number is\n");
    printf("%d",*ptr2);
    getch();
}
