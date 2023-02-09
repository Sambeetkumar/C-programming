#include <stdio.h>
#include <stdlib.h>

struct data
{
    char name[30];
    int id;
    char dept[30];
    float salary;
};

int main()
{
    int i;
    struct data employe[5];
    printf(" ENTER THE RECORDS OF 5 EMPLOYEE \n");
    for (i = 0; i < 5; i++)
    {
        printf("\n enter the name of the employe %d : ", i + 1);
        scanf("%s", employe[i].name);
        printf("\n enter id : ");
        scanf("%d", &employe[i].id);
        printf("\n enter department : ");
        scanf("%s", employe[i].dept);
        printf("\n enter salary : ");
        scanf("%f", &employe[i].salary);
        printf("\n");
    }
    printf("\nEMPLOYEE INFORMATION LIST \n");
    for (i = 0; i < 5; i++)
    {
        printf("\n EMPLOYE %d DETAILS\n", i + 1);
        printf("\n name - %s \n", employe[i].name);
        printf("\n id - %d \n", employe[i].id);
        printf("\n department - %s \n", employe[i].dept);
        printf("\n salary - %2f \n", employe[i].salary);
    }
    return 0;
}