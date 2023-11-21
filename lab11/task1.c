#include<stdio.h>
#include<string.h>

struct student{
		char rollnumber[10];
		char name[20];
		char department[10];
		char course[20];
		char joiningyear[10];
	};
int main(){
	int n;
	printf("number of students you want to store data:");
	scanf("%d", &n);
	
	struct student faltoo[n];
	int i;
	for(i=0;i<n;i++){
		
		printf("ENTER DATA OF STUDENT %d\n", i+1);
		printf("ENTER ROLL NUMBER OF STUDENT %d\n", i+1);
		scanf("%s", faltoo[i].rollnumber);
		printf("ENTER NAME OF STUDENT %d\n", i+1);
		scanf("%s", faltoo[i].name);
		printf("ENTER DEPARTMENT OF STUDENT %d\n", i+1);
		scanf("%s", faltoo[i].department);
		printf("ENTER COURSE OF STUDENT %d\n", i+1);
		scanf("%s", faltoo[i].course);
		printf("ENTER JOINING YEAR OF STUDENT %d\n", i+1);
		scanf("%s", faltoo[i].joiningyear);
	}
	
		for(i=0;i<n;i++){
		printf("ENTER DATA OF STUDENT %d\n", i+1);
		printf("ROLL NUMBER OF STUDENT %d\n", i+1);
		printf("%s", faltoo[i].rollnumber);
		printf("NAME OF STUDENT %d\n", i+1);
		printf("%s",faltoo[i].name);
		printf("DEPARTMENT OF STUDENT %d\n", i+1);
		printf("%s", faltoo[i].department);
		printf("COURSE OF STUDENT %d\n", i+1);
		printf("%s", faltoo[i].course);
		printf("JOINING YEAR OF STUDENT %d\n", i+1);
		printf("%s", faltoo[i].joiningyear);
	}
	
}
