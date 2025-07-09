/*
* program is calcutating your hour salary into week salary
* to correct functional you need to input amount of hours
* and days
*/

// TO DO
// 1. add Menu for printBarista func
// 2. Make output to the file .txt(for example)
// 3. printBarista fix (done, need minor fixes that comes after upper fixes)

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define MAX 150

typedef struct {
    char name[50];
    bool isChief; // to add exstra pay
    int work_hours; // work hours per week to calculate week salary
} Barista;

void PBMenu();
void printMenu(int *choice);
void printStars(int count);
int per_day(int h, int days);
void hour_count(int days);
void addBarista(Barista db[], int *count);
void printBarista(Barista db[], int *count);

int main(void)
{
    Barista database[MAX];
    int choice;
    int count = 0;
    bool statement = true;

    while (statement)
    {
        printMenu(&choice);
        switch(choice)
        {
            case 1:
                addBarista(database, &count);
                break;
            case 2:
                printBarista(database, &count);
                // PBMenu();
                break;
            case 3:
                hour_count(7);
                break;
            case 0:
                printf("Goodbye!\n");
                statement = false;
                break;
            default:
                printf("You've entered wrong input!\n"); 
        }
    }

    printf("End of code.\n");
    return 0;
}

// main Menu function
void printMenu(int *choice)
{
    // TO DO
    // 1. add a choice between positions(bar/food) and barista
    // 2. edit program logic 
    // ********************
    // make all actions in main.c -> store all functions in *.h
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

// Special selection menu for printBarista function
void PBMenu()
{
    int choice;
    printStars(40);
    printf("1. Print all barista list.\n"); 
    printf("2. Print all information about barista.\n"); 
    printf("0. Exit.\n");
    printStars(40);

    printf("Enter your choice: ");
    scanf("%d", &choice); 
}

void printStars(int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("*");
    printf("\n");
}
// func of work hours counting 
void hour_count(int days)
{
    int h_pday = 0;
    int hours = 0;
    int count_d = 0;    
    printf("Enter amount of hours you've worked\n");
    printf("for each day like 8 -> 4 etc.\n");
    while (count_d++ < days)
    {
        scanf("%d", &h_pday);
        hours += h_pday;
    }   
    printf("This barista worked for %d hours\n",
            hours);
}

// function to calculate salary
int per_day(int h, int work_hours)
{
    int per = 200;
    return per * work_hours;
}

// function to add barista to the db
void addBarista(Barista db[], int *count)
{
    int clean;
    int temp;
    if (*count >= MAX)
    {
        printf("Database is full.\n");
        return;
    } 

    // buffer cleaning piece of code for fgets()
    while ((clean = getchar()) != '\n' && clean != '\0');

    printf("Enter name: ");
    fgets(db[*count].name, sizeof(db[*count].name), stdin);
    db[*count].name[strcspn(db[*count].name, "\n")] = '\0';

    printf("Is the person is chief barista?(1 to yes 0 to no)");
    scanf("%d", &temp);
    db[*count].isChief = temp ? true : false;

    printf("Enter amount of hours you've been worked\n");
    printf("this week\n");
    scanf("%d", &db[*count].work_hours);

    (*count)++;
}

void printBarista(Barista db[], int *count)
{
    int index;

    if (*count == 0)
        printf("Database is empty.\n");

    for (index = 0; index < *count; index++)
    {
        printf("%3d.", index+1 );
        puts(db[index].name); // maybe change it into just printf
        // need to think about functionality
    }
}
