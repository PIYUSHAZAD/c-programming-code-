//Programe to take day number and display day name
#include<stdio.h>
#include<conio.h>
void main()
{
    int num =0;
    printf("\t\t\tPrograme to find day name through day number\n");
    printf("Please enter a number\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:   printf("You choose the day number 1\n") ;
              printf("The day name is Monday\n");
              break;
    case 2:   printf("You choose the day number 2\n") ;   
              printf("The day name is Tuesday\n");
              break;
    case 3:   printf("You choose the day number 3\n");
              printf("The day name is Wednesday\n");
              break;
    case 4:   printf("You choose the day number 4\n");
              printf("The day name is Thursday\n");
              break;
    case 5:   printf("You choose the day number 5\n");
              printf("The day name is Friday\n");
              break;
    case 6:   printf("You choose the day number 6\n");
              printf("The day name is Saturday\n");
              break;
    case 7:   printf("You choose the day number 7\n");
              printf("The day name is Sunday\n");
              break;
    
    default: printf("Please check your option");
    getch();
    }
}
