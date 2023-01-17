//Program to Print upper And Lower Triangles 
#include<stdio.h>
#include<conio.h>
void main()
{
    printf("\t\tTO print upper and Lower Triangles with numbers\n");
    printf("Print upper Triangles");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    printf("Printing Lower Traingle\n");
    for (int i = 6; i >= 0; i--)
    {
       for (int j = 1; i>j ; j++)
       {
          printf("%d ",j);
       }
    printf("\n");
    }
    printf("Thank you for using my program\n");
    getch();
}
