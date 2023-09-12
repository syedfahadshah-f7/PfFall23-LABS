/*Programmer : Syed Fahad Faheem shah
 *Date:9-12-2023
 *Description:This is a program for printing stars acccording to user input.
 */
#include<stdio.h>

int main(){
	int num;
	printf("Enter your number");
	scanf("%d", &num);

	int a=1 ;
	int b=0 ;

	while(a <= num)
	{
		printf("*");
		a= a+1 ;
	}// end loop
	
	while(b <= a){
	printf("*\n");
	b=b+1;	

}// end loop
	return 0;

}//end main
