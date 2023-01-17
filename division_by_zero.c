//To divide two numbers and display the quotient and detect division by zero
#include<stdio.h>
#include<conio.h>
void divide(int a, int b)
{
    int q=0;
    printf("Dividing %d and %d",a,b);
    if(b==0)
    {
        printf("\nLogical error division by zero\n");
    }
    else
    {
        q=a/b;
        printf("\nQuoteint of %d/%d is %d",a,b,q);
    }
}
void main()
{
    int a=0;
    int b=0;
    printf("Program to divide 2 numbers and detect division by zero\n");
    printf("Pease give the first number ");
    scanf("%d",&a);
    printf("Please give the second number ");
    scanf("%d",&b);
    divide(a,b);
    getch();
}