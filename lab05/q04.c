/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-19-2023
 *Description:This is a program of calculator.
 */
#include <stdio.h>
void main(){
    
    int numone;
    int numtwo;
    
    printf("Enter Number 1:\n");
    scanf("%d", &numone);
    
    printf("Enter Number 2:\n");
    scanf("%d", &numtwo);
    char func;
    printf("Enter Function:");
    scanf(" %c", &func);

	switch(func){
    case'+':
        printf("Add = %d", numone + numtwo);
    	break;

    case'-':
        printf("Sub = %d", numone - numtwo);
    	break;

    case'*':
        printf("Multiply = %d", numone * numtwo);
 	break;

    case'/':
        printf("divide = %d", numone / numtwo);
    	break;
}// end switch
}//end main
