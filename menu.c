#include<stdio.h>

typedef struct {
    char name[50];
    float price;
    int avaliable; // 1 or 0
} Product;

typedef struct {
    char name[50];
    char position[20];
    int sp_hour;
    
    } Employee;

int main(void)
{
    Product cappuchino = {"Cappuchino", 240.0, 1};
    Employee barista = {"Vladistas", "Komarova", 200};
    printf("%s %s %d\n", barista.name, barista.position, barista.sp_hour);
    return 0;
}
