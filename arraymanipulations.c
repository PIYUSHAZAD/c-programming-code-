//Program for array operations
#include <stdio.h>
#include <conio.h>
int main()
{
   int op=0;
   int arr[10];
   int size =0;
   int sum=0;
   char ans='y';
   do 
   {
      printf("\t\t\t\t\tProgram for array operations\n");
      printf("1.Input array\n");
      printf("2.Display Array\n");
      printf("3.Display sum of array\n");
      printf("Please select your option\n");
      scanf("%d",&op);
      switch(op)
      {
          case 1: printf("Please give the size of the array that you want to create\n");
                  scanf("%d",&size);
                  for(int i=0; i<size; i++)
                  {
                     printf("Please enter value at %d\n",i);
                     scanf("%d",&arr[i]);
                  }
                  break;
          case 2: printf("Displaying the created Array\n");
                  for(int i=0; i<size; i++)
                   {
                     printf("Value at %d is %d \n",i,arr[i]);
                    }
                 break;
          case 3: printf("Sum of elements of Array\n");
                  for(int i=0; i<size; i++)
                   {
                     sum+=arr[i];
                     printf("Sum of all the elents of the given array is %d",sum);
                    }
                  break;
                  default: printf("Please check your entered option");
        }
      printf("Do you want to continue with the program <y/n>\n");
      scanf("%c",&ans);
   }while(ans=='Y'|| ans=='y');
   // printf("Thank you for using my Program");
   return 0;
}
