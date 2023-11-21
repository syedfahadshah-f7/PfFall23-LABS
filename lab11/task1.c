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
	
		/*for(i=0;i<n;i++){
		printf("ROLL NUMBER OF STUDENT %d", i+1);
		printf("%s", faltoo[i].rollnumber);
		printf("\nNAME OF STUDENT %d", i+1);
		printf("%s",faltoo[i].name);
		printf("\nDEPARTMENT OF STUDENT %d", i+1);
		printf("%s", faltoo[i].department);
		printf("\nCOURSE OF STUDENT %d", i+1);
		printf("%s", faltoo[i].course);
		printf("\nJOINING YEAR OF STUDENT %d\n", i+1);
		printf("%s", faltoo[i].joiningyear);
	}*/
	
	char pyear[10];
	printf("Enter A Particular year\n");
	scanf("%s", pyear);
	
	for(int i=0;i<n;i++){
	    int a=strcmp(faltoo[i].joiningyear,pyear);
	    if(a==0){ printf("%s joined in this year", faltoo[i].name); }
	}
	char proll[10];
	printf("\nEnter A Particular rollnumber\n");
	scanf("%s", proll);
		for(int i=0;i<n;i++){
	    int b=strcmp(faltoo[i].rollnumber,proll);
	    if(b==0){
	        printf("NAME:%s\n", faltoo[i].name); 
	        printf("Department:%s\n", faltoo[i].department); 
	        printf("Course:%s\n", faltoo[i].course); 
	        printf("joining year:%s\n", faltoo[i].joiningyear); 
	    }
	}
}
