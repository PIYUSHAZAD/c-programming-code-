#include <stdio.h>

int main()
{
    int a=52;
    int b=39;
    int n=4;
    int result=0;
    result=a&b;
    printf("Result of bitwise and is %d",result);
    result=a|b;
    printf("\nResult of bitwise or is %d",result);
    result=a<<n;
    printf("\nResult of left shift operator %d",result);
    result=a>>n;
    printf("\nResult of right shift operator %d",result);
    return 0;
}
