#include<stdio.h>
int per_day(int h, int days);

int main(void)
{
    int hour;
    int i = 0; int d = 0;
    
    printf("Enter amount of hours: "); 
    while ((scanf("%d", &hour) != EOF) && (++i < 14))
    {
        if (i == 1) 
            printf("%d is amount of money for %d work hours.\n",
                hour * 200, hour);
        if (i > 1)
        {
            printf("If you need to calculate your salary");
            printf(" for a few days\n");
            printf("Enter amount of days or ctrl+D to quit.");
            scanf("%d", &d);
            per_day(hour, d);
            printf("%d is amount of money your earned in %d days\n",
                    per_day(hour, d), d);

        }
        printf("if you need to calculate anything else keep up!.\n");
    }
    printf("%d - total amount of money.\n", per_day(hour, d));
    printf("End of code.\n");
    return 0;
}


int per_day(int h, int days)
{
    int hour = 200;
    int sum = 0;
    int i;
    for (i = 1; i <= days; i++)
        sum = sum + (hour * i);
    return sum;
}
