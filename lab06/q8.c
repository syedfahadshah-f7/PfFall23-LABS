/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-03-2023
 *Description: program to read n number of values in an array and display it in reverse orders.
   */
#include<stdio.h>

void main(){
    int size;
    printf("How many numbers you want to input:");
    scanf("%d", &size);

	int arr[size];

	for(int i=0;i<size;i++){
		printf("\nEnter  number %d:", i+1);
		scanf("%d", &arr[i]);
	}//end initialization loop

	for(int i=size;i>0;i--){
		printf("%d", arr[i]);
	}// end print loop
}// end main
