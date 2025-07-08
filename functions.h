#include<stdio.h>

void printStars(int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("*");
    printf("\n");
}
void printMenu(int *choice)
{
    printStars(40);
    printf("Choose option: \n");
    printf("1. Add a barista.\n");
    printf("2. Print existing barista.\n");
    printf("3. Calculate working hours for employees.\n");
    printf("0. Exit.\n");
    printStars(40);

    printf("Enter your choice: ");
    scanf("%d", &(*choice)); 
}
