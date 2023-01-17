//To verify the algorithm of left shift and right shift operator
#include<stdio.h>
#include<conio.h>
#include<math.h>
void bit_shift_l(int a, int b)
{
    int result1=0; //Used to store the result computed by using the left shift operator
    int result2=0;//Used to store the result of left shift operator by multiplying with 2
    printf("Calculating the result of %d<<%d\n",a,b);
    result1=a<<b;
    printf("Result obtained by using the left shift operator %d\n",result1);
    result2=a*(pow(2,b));
    printf("Result obtained by using the multiplication opeartion is %d ",result2);
    if(result1==result2)
    {
        printf("\nSince both the results are same the results are verified\n");
    }
}
void bit_shift_r(int a, int b)
{
    int result1=0; //Used to store the result computed by using the right shift operator
    int result2=0; //Used to store the result of right shift operator by division operation
    printf("Calculating the result of %d>>%d\n",a,b);
    result1=a>>b;
    printf("Result obtaoned by using the right shift opeartor is %d",result1);
    result2=a/(pow(2,b));
    printf("\nResult obtained by using the division operation %d",result2);
     if(result1==result2)
    {
        printf("\nSince both the results are same the results are verified\n");
    }
}
void main()
{
    int op=0;
    int a=0;
    int b=0;
    printf("\t\tTo verify the algorithm of left and right shift operator\n");
    printf("\t\tMain menu\n");
    printf("1.Verify left shift operator\n");
    printf("2.Verfiy right shift opeartor\n");
    printf("Please give your option ");
    scanf("%d",&op);
    switch(op)
    {
        case 1: printf("Please give the first number ");
                scanf("%d",&a);
                printf("Please give the second number ");
                scanf("%d",&b);
                bit_shift_l(a,b);
                break;
        case 2: printf("Please give the first number ");
                scanf("%d",&a);
                printf("Please give the second number ");
                scanf("%d",&b);
                bit_shift_r(a,b);
                break;
                default: printf("Kindly check your option and try again");
         
    }
    printf("\nThank you for using my program");
    getch();
}
