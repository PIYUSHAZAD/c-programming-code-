//program for string operations
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[20];
    char str2[20];
    printf("Please give the first string\n");
    gets(str1);
    printf("Please give the second string\n");
    gets(str2);
    printf("First string is ");
    puts(str1);
    printf("\n");
    printf("Second string is ");
    puts(str2);
    printf("\n");
    printf("\tComparing the two string(not case sensitive)\n");
    if(strcmp(str1,str2)==0)
    {
        printf("Congratulations the both strings are same\n");
    }
    else
    printf("Sorry the strings are not same\n");
    printf("\tConcatenatng the 2 strings\n");
    strcat(str1,str2);
    printf("The resultant string is ");
    puts(str1);
    getch();
}