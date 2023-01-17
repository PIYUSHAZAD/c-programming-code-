#include <stdio.h>
#define N 10
int main()
{
    int a[N],i,n=0,p=0,z=0;
    printf("enter %d elements of arry", N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]>>0)
        p++;
        else if (a[i]<0)
        n++;
        else
        z++;
    }
    printf("no of positive : %d\n",p);
    printf("no of negative : %d\n", n);
    printf("zero : %d\n",z);

}

