#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct course {
    char course_code[10];
    char course_name[20];
    float course_gpa;
    int semester;
    int credits;
} course;

int main() {
    int data, i;
    printf("How many course data you want to store:");
    scanf("%d", &data);

    FILE *ptr = fopen("course.txt", "a+");

    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1; 
    }

    course information[data];
    for (i = 0; i < data; i++) {
        printf("\nEnter Course Code:");
        scanf("%s", information[i].course_code);
        printf("Enter Course Name:");
        scanf("%s", information[i].course_name);
        printf("Enter Course GPA:");
        scanf("%f", &information[i].course_gpa);
        printf("Enter Semester:");
        scanf("%d", &information[i].semester);
        printf("Enter Credit Hours:");
        scanf("%d", &information[i].credits);

        fprintf(ptr, "%s|%s|%.2f|%d|%d\n", information[i].course_code, information[i].course_name, information[i].course_gpa, information[i].semester, information[i].credits);
    }

    fclose(ptr);

    int semester = 0, gpa = 0, credits = 0;
    FILE *f = fopen("course.txt", "r");
    char line[100];
    printf("\nHow many semesters result you want to store:");
    scanf("%d", &semester);
    int sem_temp=semester;
    
    while(semester != 0){
    	while (fgets(line, sizeof(line), f) != NULL) {
        char delim[2] = "|";
        char *temp = strtok(line, delim);
        int count = 1;
        while (temp != NULL) {
            if (count == 2) {
                temp = strtok(NULL, "|");
                gpa += atof(temp);
            }
            if (count == 3) {
                temp = strtok(NULL, "|");
                credits += atoi(temp);
            }
            count++;
            temp = strtok(NULL, delim);
        }
    }
    semester--;
}

    printf("%.2f SGPA\n", (float)gpa/credits);
    gpa=(float)gpa/credits;
    printf("%d CGPA\n", gpa/sem_temp );

    fclose(f);
    return 0;
}
