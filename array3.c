#include<stdio.h>
// WAP to remove an element from array 
int main()
{
    int array[100],position,i,number,j;
    printf("enter a elements ");
    scanf("%d",&number);
    printf("enter %d elements to in array", number);
    for(i=0; i<number; i++)
    {
        scanf("%d", &array[i]);

    }
    printf(" enter position for deletion ");
    scanf("%d", &position);
    for (i=0; i<number; i++)
    {
        if(array[i]==position)
        break;
    }
    for(j=1; j<number ; j++)
    {
        array[j]=array[j+1];
    }
    number--;
    printf(" deletion ");
    for (i=0; i<number; i++)
    {
        printf("%d\n", array[i]);

    }
    
}