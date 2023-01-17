//Program to find HCF of two given numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1=0;
    int num2=0;
    int last=0;
    int hcf=1;
    printf("\t\tProgram to find HCF of 2 given numbers\n");
    printf("Please give the first number\n");
    scanf("%d",&num1);
    printf("Please give the second number\n");
    scanf("%d",&num2);
    last=(num1>num2)? num2:num1;
    for (int i = 1; i <=last; i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    printf("HCF of %d and %d is %d",num1, num2, hcf);
    getch();
}
