//Program to perform exclusive OR operation on two operands
#include<stdio.h>
#include<conio.h>
void EOR(int a, int b)
{
    int result=0;
    result=a^b;
    printf("\nThe result of %d XOR %d is %d",a,b,result);
}
void main()
{
    int a =0;
    int b =0;
    printf("Program to perform exclusive OR opeartions on two opearnds\n");
    printf("Please give the first number ");
    scanf("%d",&a);
    printf("Please give the second number ");
    scanf("%d",&b);
    printf("Calculating %d XOR %d",a,b);
    EOR(a,b);
    getch();
}
