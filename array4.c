//wap to intsert array at user define position
#include<stdio.h>
int main()
{
    int s[100] ,i , pos,size,value;
    printf(" enter no of element");
    scanf("%d", &size);
    printf(" enter %d element in array \n", size);
    for(i=0; i<size ; i++)
    {
        scanf(" %d", &s[i]);
       
    }
    printf("enter the position for in");
    scanf("%d",&pos);
    printf(" enter the value of position ");
    scanf(" %d", &value);
    for ( i=size-1; i>=pos-1;i--)
    {
        s[i+1]=s[i];
    }
    s[pos-1]=value;
    printf("find array");
    for (i=0; i<size ; i++)
    {
        printf("%d", s[i]);
    }
}