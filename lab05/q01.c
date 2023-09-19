#include <stdio.h>

void main(){
	
	int num, check;
	printf("Enter number:");
	scanf("%d", &num);

	check = num % 3;

	if(check == 0){
		printf("The number is multiple of 3");
	}// if end
	else if (check != 0){
		printf("The number is not multiple of 3");
	}// else end
	
}// end main
