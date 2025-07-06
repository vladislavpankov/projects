/*
* program is calcutating your hour salary into week salary
* to correct functional you need to input amount of hours
* and days
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define MAX 150

struct Barista {
    char name[50];
    bool isChief; // to add exstra pay
    int work_hours; // work hours per week to calculate week salary
};

void printMenu(int *choice);
void printStars(int count);
int per_day(int h, int days);
void hour_count(int days);
void addBarista(struct Barista db[], int *count);
void printBarista(struct Barista db[], int count);

int main(void)
{
    struct Barista database[MAX];
    int choice;
    int count = 0;
    int hour;
    int i = 0; int d = 0;
    bool statement = true;
/* TO DO
 * navigation menu
 * edit addBarista function
 * add printBarista function
 * work on menu(of caffee positions)
 */
    while (statement)
    {
        printMenu(&choice);
        switch(choice)
        {
            case 1:
                addBarista(database, &count);
                break;
            case 2:
                hour_count(7);
                break;
            case 3:
                printBarista(database, 0);
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
int per_day(int work_hours)
{
    int per = 200;
    return per * work_hours;
}

// function to add barista to the db
void addBarista(struct Barista db[], int *count)
{
    int clean;
    int temp;
    if (*count >= MAX)
    {
        printf("Database is full.\n");
        return;
    } 

    while ((clean = getchar()) != '\n' && clean != EOF);

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

void printBarista(struct Barista db[], int count)
{
    int c;

    if (count == 0)
        printf("Database is empty.\n");
}
