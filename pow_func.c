//To calculate a number to raise to the power
#include<stdio.h>
#include<conio.h>
#include<math.h>
void pow_calc(int n, int m)
{
    int result=0;
    result=pow(n,m);
    printf("The result of %d^%d is %d ",n,m,result);
}
void main()
{
    int n=0;
    int m=0;
    printf("Programe to calculate power of a function using functions\n");
    printf("Please give the base number ");
    scanf("%d",&n);
    printf("Please give the number to which the power needs to be raised ");
    scanf("%d",&m);
    pow_calc(n,m);
    getch();
}