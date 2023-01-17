//Program to check whether the given number is prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int num=0;
    int flag=0;
    printf("\t\tProgram to check for a prime number\n");
    printf("Please enter a number\n");
    scanf("%d",&num);
    if (num==1)
    {
        printf("The given number is neither prime nor composite\n");
        flag++;
    }
    else
    {
        for (int i = 2; i < num/2; i++)
       {
          if (num%i==0)
          {
            printf("Sorry the given number is not a prime number\n");
            flag++;
            break;
           }
       }
    }
    if (flag==0)
    {
        printf("The given number is a prime number\n");
    }
    getch();
}