//To take a number and print it's multiplcation table
#include<stdio.h>
#include<conio.h>
void main()
{
    int num =0;
    printf("\tTo print the multiplication table of a entered number/n");
    printf("Please enter a number for which mutiplication table is required\n");
    scanf("%d",&num);
    int i=1;
    int result=1;
    while (i<=10)
    {
        result=i*num;
        printf("\t%d* %d = %d",num,i,result);
        printf("\n");
        i++;
    }
    printf("The multiplication table of %d is printed",num);
    getch();
}
