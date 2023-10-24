/* Programmer: Syed Fahad Faheem Shah(23k-0062)
   description: Taking two numbers and operation for basic arithematics in function.
   Date: 24/10/2023
*/ 
#include<stdio.h>
int arithematicoperation(int x, int y, char func){
	int result=0;
	switch (func){
		case '+':
			result= x+y;
			break;
		case '-':
			result= x-y;
			break;	
		case '*':
			result= x*y;
			break;
		case '/':
			result= x/y;
			break;		
	}
	return result;
}// end function

int main(){
	int num1,num2;
	char operation;
	printf("Enter Number 1 And Number 2:");
	scanf("%d %d", &num1, &num2);
	
	printf("Enter operation:");
	scanf(" %c", &operation);
	
	int ans = arithematicoperation(num1,num2,operation);
	printf("Answer :%d", ans);
	return 0;
}// end main
