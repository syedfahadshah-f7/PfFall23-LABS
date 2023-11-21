#include<stdio.h>

 struct Datetostore{
	int date;
	int month;
	int year;
};
int main(){
	struct Datetostore faltoo[2];
int i;
	for(i=0;i<2;i++){
		printf("Enter Date/month/year for person %d\n", i+1);
		printf("ENTER DATE OF PERSON %d\n", i+1);
		scanf("%d", &faltoo[i].date);
		printf("ENTER MONTH OF PERSON %d\n", i+1);
		scanf("%d", &faltoo[i].month);
		printf("ENTER YEAR OF PERSON %d\n", i+1);
		scanf("%d", &faltoo[i].year);	
	}
	
	if(faltoo[i].date == faltoo[i+1].date && faltoo[i].month == faltoo[i+1].month && faltoo[i].year == faltoo[i+1].year){
		printf("Dates are equal");
	}
	else{
		printf("Dates are not equal");
	}
return 0;	
}
