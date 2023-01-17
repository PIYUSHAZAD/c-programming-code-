//Programe to check a number is either even or odd
#include<stdio.h>
#include<conio.h>
void main()
{
    int num =0;
    printf("\t\t\tPrograme to check whether the entered number is even or odd\n");
    printf("Please enter a integer\n");
    scanf("%d",&num);

    if (num%2==0)
    {
       printf("The given number is even\n");
       printf("The number you entered is %d\n",num);
    }
    else
    {
        printf("The given number is odd\n");
        printf("The number you entered is %d\n",num);
    }
    getch();
}