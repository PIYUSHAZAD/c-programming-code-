//program to store the numeric grade of atmost 30 students in three subjects
#include<stdio.h>
#include<conio.h>
void create(int marks[3][30],int m,int n)
{
    printf("Entering the data......\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Please give the numeric grade for subject %d and student %d  ",i,j);
            scanf("%d",&marks[i][j]);
        }
    }
}
void display(int marks[3][30], int m, int n)
{
    printf("Here coumns represent students and row represents subjects:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d  ",marks[i][j]);
        }
    printf("\n");
        
    }
}
void main()
{
    int stud=0;
    int sub=0;
    int marks[3][30];
    printf("Program to store the numeric grade of students in three subjects\n");
    printf("Please give the number of subjects ");
    scanf("%d",&sub);
    printf("Please give the number of students ");
    scanf("%d",&stud);
    create(marks,sub,stud);
    display(marks,sub,stud);
    printf("Thank you for using my program\n");
    getch();
}
