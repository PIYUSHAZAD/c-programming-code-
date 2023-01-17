//programe to compare 2 numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b =0;
    printf("\t\t\tPrograme to compare 2 numbers\n");
    printf("Please enter the first number\n");
    scanf("%d",&a);
    printf("Please enter the second number\n");
    scanf("%d",&b);
    if (a>b)
    {
        printf("%d is greater than %d",a, b);
    }
    else
    {
        printf("%d is less than %d",a, b);
    }
    getch();
}