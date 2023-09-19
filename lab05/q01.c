/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-19-2023
 *Description:This is a program for checking the user input is a multiple of three or not  .
 */
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
