
#include <stdio.h>
#include<string.h>
typedef struct employe{
        int emp_id;
        int emp_salary;
        char emp_name[20];
}employe;
 typedef struct organization{
    char org_name[30];
    char org_num[30];
    struct employe nested;
}organization;


int main() {
    organization entries;
         strcpy(entries.org_name,"Fast-NU");
         strcpy(entries.org_num,"Fast-NU123");
         entries.nested.emp_id=62;
         entries.nested.emp_salary=20000;
         strcpy(entries.nested.emp_name,"fahad");   
         
         
          printf("\n Organization Name: %s", entries.org_name);
          printf("\n Organization Number: %s", entries.org_num);
          printf("\n Employee ID: %d", entries.nested.emp_id);
          printf("\n Employee Salary: %d", entries.nested.emp_salary);
          printf("\n Employee Name:%s", entries.nested.emp_name);
          return 0;
}
