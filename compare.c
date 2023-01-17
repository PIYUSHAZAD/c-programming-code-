#include<stdio.h>
int main()
{
    printf("\t\t\tProgram to compare three numbers");
    int a=0;
    int b=0;
    int c=0;
    printf("\nPlease enter the first number");
    scanf("%d",&a);
    printf("\nPlease enter the second number");
    scanf("%d",&b);
    printf("Please enter the third number");
    scanf("%d",&c);
   if (a>b)
    {
       if (a>c)
          printf("\nA is largest number among three %d", a);
   }
    if (b>c)
       printf("B is the largest number among the three%d",b);
    else
    printf("C is the largest number among the three numbers%d",c);
    return 0;
}