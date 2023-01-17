#include <stdio.h>
#include <conio.h>
//Programe to check whether the user entered a negative number or not
void main()
{
    int num =0;
    printf("Programe to check for a negative number\n");
    printf("Please enter an integer\n");
    scanf("%d", &num);
    if(num<0)
    {
        printf("Yes the you entered is a negative number\n");
        printf("The number is %d",num);
    }
    printf("\nthe if statement is easy");
    getch();
}
