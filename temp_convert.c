//To print celsius to fahrenheit conversion tabel in ascending and desecending order
#include<stdio.h>
#include<conio.h>
void main()
{
    int temp=0;
    printf("\tProgram to print the celsius to fahrenheit temperature converter\n");
    printf("\t\tPrinting the tabel in ascending order\n");
    printf("Celsius");
    printf("\t\t\tFahrenheit");
    printf("\n");
    for (int i = 0; i <= 300; i+=100) {
        printf("%d",i);
        temp=((i*9)/5)+32;
        printf("\t\t\t%d\n",temp);
    }
    printf("\t\tPrinting the tabel in reverse order\n");
    printf("Celsius");
    printf("\t\t\tFahrenheit");
    printf("\n");
    for (int i = 300; i >=0; i-=100) {
        printf("%d",i);
        temp=((i*9)/5)+32;
        printf("\t\t\t%d\n",temp);
    }
    printf("Thank you for using my program\n");
    getch();
}