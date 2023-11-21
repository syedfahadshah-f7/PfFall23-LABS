#include<stdio.h>

struct store {
    char name[20];
    float salary;
    int hours;
};

int main() {
    struct store faltoo[10] = {
        {"Fasih Hasan", 2300.00, 8},
        {"Muhammad Ali", 1500.00, 8},
        {"Abser Mansoor", 3000.00, 4},
        {"Fahad Faheem", 150.00, 2},
        {"Muhammad Umar", 50.00, 12},
        {"Abdul Rehman", 10.0, 24},
        {"Saif Ur Rehman", 1.00, 1},
        {"Raghib Rizwan", 40000, 32},
        {"Muhammad Owais", 100.00, 12},
        {"John Raza", 12000.00, 9}
    };

    int i;
    for(i = 0; i < 10; i++) {
        if (faltoo[i].hours > 8) {
            faltoo[i].salary += 50;
        } else if (faltoo[i].hours > 10) {
            faltoo[i].salary += 100;
        } else if (faltoo[i].hours >= 12) {
            faltoo[i].salary += 150;
        }
    }

    for(i = 0; i < 10; i++) {
        printf("\nName: %s", faltoo[i].name);
        printf("\nSalary: %.2f", faltoo[i].salary);
        printf("\nHours: %d", faltoo[i].hours);
        printf("\n");
    }

    return 0;
}
#include<stdio.h>

 struct store{
	char name[20];
	int salary;
	int hours;
};
int main(){
	
    struct store faltoo[10] = {
        {"Fasih Hasan", 2300.00, 8},
        {"Muhammad Ali", 1500.00, 8},
        {"Abser Mansoor", 3000.00, 4},
        {"Fahad Faheem", 150.00, 2},
        {"Muhammad Umar", 50.00, 12},
        {"Abdul Rehman", 10.0, 24},
        {"Saif Ur Rehman", 1.00, 1},
        {"Raghib Rizwan", 40000, 32},
        {"Muhammad Owais", 100.00, 12},
        {"John Raza", 12000.00, 9}
    };
    
	int i;
	for(i=0;i<10;i++){
		if( faltoo.hours[i]>8 ){
			faltoo.salary[i] += 50;
		}
		else if( faltoo.hours[i]>10 ){
			faltoo.salary[i] += 100;
		}
		else if( faltoo.hours[i]>=12 ){
			faltoo.salary[i] += 150;
		}
	}
	
	for(i=0;i<10;i++){
		printf("\nName:%s", faltoo.name[i]);
		printf("\nSalary:%s", faltoo.salary[i]);
		printf("\nHours:%s", faltoo.name[i]);
		printf("\n");
	}
return 0;	
}
