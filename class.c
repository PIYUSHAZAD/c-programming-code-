#include <stdio.h>
int main()
{
int i,j, rows , k;
printf("enter a rows");
scanf("%d",&rows);
printf("enter a k");
scanf("%d",&k);
for(i=1;i<=rows;i++)
{
    for(j=1;j<=k;j++)
    {
        printf("%d",j);
    }
        printf("\n");
}
}
