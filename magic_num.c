//To check whether the entered number is magic or not
#include<stdio.h>
#include<conio.h>
void magic(int n)
{
    int sum=0;
    int temp,final;
    int reverse=0;
    int magic=0;
    temp=n;
    while(temp>0)
    {
        sum+=temp%10;
        temp=temp/10;
    }
    temp=sum;
    while(temp>0)  //Computation of reverse number
    {
        reverse = reverse*10 + temp%10; 
        temp = temp/ 10;
    }
    magic=sum*reverse;
    final=(n==magic)? 1:0;
    if(final==1)
    printf("The given number is a magic number\n");
    else
    printf("Sorry the entered number is not a magic number");
}
void main()
{
    int num=0;
    printf("\t\tProgram to check for a magic number\n");
    printf("Please give an integer number\n");
    scanf("%d",&num);
    printf("Please wait while we check\n");
    magic(num);
    getch();
}