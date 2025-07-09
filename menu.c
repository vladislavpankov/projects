#include<stdio.h>
#include "functions.h"

#define MAX 150
typedef struct {
    char name[MAX];
    float price;
    _Bool avaliable; // 1 or 0
} Product;

void printPositionMenu(int *choice);
void addPosition(Product db[], int *count);

int main(void)
{
    Product database[MAX];
    int count = 0;
    int choice = 0;
    printPositionMenu(&choice);
    switch(choice)
    {
        case(0):
            break;
        default:
            puts("Wrong input!");
            break;
    }
    return 0;
}
void printPositionMenu(int *choice)
{ 
    printStars(40);
    printf("Choose option: \n");
    printf("1. Add a position.\n");
    printf("2. Print positions.\n");
    printf("3. Print all position actions\n");
    printf("0. Exit.\n");
    printStars(40);

    printf("Enter your choice:\n ");
    scanf("%d", &(*choice)); 
}
