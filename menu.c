#include<stdio.h>
#include "functions.h"

#define MAX 150
struct Product{
    char name[MAX];
    float price;
    _Bool avaliable; // 1 or 0
};

void printPositionMenu(int *choice);
void addPosition(struct Product db[], int *count);

int main(void)
{
    struct Product database[MAX];
    int count = 0;
    int choirce = 0;
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

    printf("Enter your choice: ");
    scanf("%d", &(*choice)); 
}
