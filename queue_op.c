//Program to insert and delete elements from a queue
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int insertqueue(int q[], int *rear , int *num)
{
      if ( *rear == 10 -1 )
            return -1;
      else
      {
            *rear = *rear + 1;
            q[*rear] = *num;
            return 1;
      }
}
int delqueue(int q[], int *front, int *rear , int *num)
{
      if ( *front == *rear)
            return -1;
      else
      {
            (*front)++;
            *num = q[*front];
            return 1;
      }
}
void main()
{
      int q[10];
      int num =0;
      int front =-1;
      int rear =-1;
      int result =0;
      int op =0;
      char ans;
      printf("\t\tProgram to insert and delete values from a queue\n");
      do
      {
        printf("\t\t\tMenu\n");
        printf("1.Insert element in queue\n");
        printf("2.Delete element from queue\n");
        printf("3.Exit\n");
        printf("Please give your option ");
        scanf("%d",&op);
        switch(op)
       {
         case 1 : printf("Enter Number to be inserted in the queue");
                  scanf("%d",&num);
                  result =insertqueue(q,&rear,&num);
                  if(result == - 1)
                  printf("Sorry but the queue is full\n");
                  else
                  printf("%d is inserted in queue.\n",num);
                  break;
         case 2 : result = delqueue(q,&front,&rear,&num);
                  if (result == -1 )
                  printf("Queue is empty nothing to delete\n");
                  else
                  printf("Deleted number is %d\n",num);
                  break;
         case 3 : printf("Thank you for using my program");
                  default: printf("Please check your option\n");
        }
         printf("Do you want to continue with the program<Y/N>");
         scanf("  %c",&ans);
      }while(ans=='Y'||ans=='y');
      getch();
}