#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
        char name[30];
        char hire_date[15];
        float salary;
};

int main(void){
        struct employee emp_1 = {"Mike", "7/16/15", 76909.00f};
        
        printf("\nName: %s\n", emp_1.name);
        printf("Hire Date: %s\n", emp_1.hire_date);
        printf("Salary: %.2f\n", emp_1.salary);

        puts("\nEnter Employee info");
        printf("Name: ");
        scanf("%s", emp_1.name);
        printf("\nHire Date: ");
        scanf("%s", emp_1.hire_date);
        printf("\nSalary: ");
        scanf("%f", &emp_1.salary);

        printf("\nName: %s\n", emp_1.name);
        printf("Hire Date: %s\n", emp_1.hire_date);
        printf("Salary: %.2f\n", emp_1.salary);

}