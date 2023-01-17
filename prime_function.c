//Program to check for a prime number using functions
#include<stdio.h>
#include<conio.h>
void prime_number(int num)
{
    int flag=0;
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
    printf("The given number is a prime number\n");
}
void main()
{
    int n;
    printf("\t\t\tProgram to check for a prime number\n");
    printf("Please give a number ");
    scanf("%d",&n);
    prime_number(n);
    getch();
}