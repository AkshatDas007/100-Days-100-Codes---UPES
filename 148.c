#include <stdio.h>
#include <string.h>

// Structure for employee details
struct Employee {
    int id;
    char name[30];
    float salary;
};

int main(){
    struct Employee emp1, emp2;

    printf("Enter details of Employee 1\n");

    printf("Enter ID: ");
    scanf("%d", &emp1.id);

    printf("Enter Name: ");
    scanf("%s", emp1.name);

    printf("Enter Salary: ");
    scanf("%f", &emp1.salary);

    printf("\nEnter details of Employee 2\n");
    printf("Enter ID: ");
    scanf("%d", &emp2.id);

    printf("Enter Name: ");
    scanf("%s", emp2.name);

    printf("Enter Salary: ");
    scanf("%f", &emp2.salary);

    if(emp1.id == emp2.id && strcmp(emp1.name, emp2.name) == 0 && emp1.salary == emp2.salary){
        printf("\nBoth employee structures are identical.\n");
    }else{
        printf("\nThe employee structures are not identical.\n");
    }

    return 0;
}
