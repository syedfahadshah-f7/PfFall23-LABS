/* Programmer: Syed Fahad Faheem Shah(23k-0062)
   description: Swapping two numbers in functions
   Date: 24/10/2023
*/ 
#include<stdio.h>
int swap(int *x, int *y){
	int temp = *x;
	*x=*y;
	*y=temp;
	return x,y;
}
int main(){
	int num1,num2;
	printf("Enter Number 1 And Number 2:");
	scanf("%d %d", &num1, &num2);
	
	swap(&num1,&num2);
	printf("Number 1 is:%d", num1);
	printf("Number 2 is:%d", num2);
	return 0;
}
