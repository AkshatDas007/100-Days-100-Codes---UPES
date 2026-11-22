#include <stdio.h>

//A structure groups related employee information together
struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    // 'emp' stores the details entered by the user
    // 'readEmp' stores the details read back from the binary file
    struct Employee emp, readEmp;

    //A FILE pointer is used to work with files
    FILE *file;

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    file = fopen("employee.dat", "wb");

    if(file == NULL){
        printf("Error: Could not open the file for writing\n");
        return 1;
    }

    fwrite(&emp, sizeof(emp), 1, file);

    fclose(file);

    file = fopen("employee.dat", "rb");

    if(file == NULL){
        printf("Error: Could not open the file for reading.\n");
        return 1;
    }

    fread(&readEmp, sizeof(readEmp), 1, file);

    fclose(file);

    printf("\nEmployee Details Read From File:\n");
    printf("Employee ID: %d\n", readEmp.id);
    printf("Employee Name: %s\n", readEmp.name);
    printf("Employee Salary: %.2f\n", readEmp.salary);

    return 0;
}
