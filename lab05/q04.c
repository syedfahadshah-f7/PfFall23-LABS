/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-19-2023
 *Description:This is a program of calculator.
 */
#include <stdio.h>
void main(){
    
    int num1;
    int num2;
    
    printf("Enter Number 1:\n");
    scanf("%d", &num1);
    
    printf("Enter Number 2:\n");
    scanf("%d", &num2);
    char func;
    printf("Enter Function:");
    scanf(" %c", &func);

	switch(func){
    case'+':
        printf("Add = %d", num1+num2);
    	break;

    case'-':
        printf("Sub = %d", num1-num2);
    	break;

    case'*':
        printf("Multiply = %d", num1*num2);
 	break;

    case'/':
        printf("divide = %d", num1/num2);
    	break;
}// end switch
}//end main
