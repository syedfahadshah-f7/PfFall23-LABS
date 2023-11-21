// Online C compiler to run C program online
#include <stdio.h>

typedef struct registers{
    char courseld[10];
    char coursename[20];
}registers;

typedef struct student{
    char student_id[10];
    char firstname[20];
    char lastname[20];
    int cellno;
    char email[25];
    struct registers nested;
}student;

int main() {
    
    student std[5];
    int i;
    for(i=0;i<5;i++){
		
		printf("ENTER DATA OF STUDENT %d\n", i+1);
		printf("ENTER STUDENT ID %d\n", i+1);
		scanf("%s", std[i].student_id);
		printf("ENTER FIRST NAME OF STUDENT %d\n", i+1);
		scanf("%s", std[i].firstname);
		printf("ENTER LAST NAME OF STUDENT %d\n", i+1);
		scanf("%s", std[i].lastname);
		printf("ENTER CELL NUMBER OF STUDENT %d\n", i+1);
		scanf("%d", &std[i].cellno);
		printf("ENTER EMAIL OF STUDENT %d\n", i+1);
		scanf("%s", std[i].email);
		printf("ENTER COURSELD OF STUDENT %d\n", i+1);
		scanf("%s", std[i].nested.courseld);
		printf("ENTER COURSE NAME OF STUDENT %d\n", i+1);
		scanf("%s", std[i].nested.coursename);
	}

    for(i=0;i<5;i++){
		
		printf("\nDATA OF STUDENT %d\n", i+1);
		printf("STUDENT ID: %s\n", std[i].student_id);
		printf("FIRST NAME : %s\n", std[i].firstname);
		printf("LAST NAME : %s\n", std[i].lastname);
		printf("CELL NUMBER : %d\n", std[i].cellno);
		printf("EMAIL: %s\n", std[i].email);
		printf("COURSELD: %s\n", std[i].nested.courseld);
		printf("COURSE NAME: %s\n\n", std[i].nested.coursename);
	}
    return 0;
}
