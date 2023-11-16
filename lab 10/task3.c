/*
* Programmer: Syed Fahad Faheem Shah(23k-0062)
* Date: 11/15/2023
* Description: Create a program that dynamically allocates memory for a 2D array of integers. Write a function that accepts a pointer to a pointer to an integer and fills the 2D array with consecutive prime numbers.
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

//to check if the number is prime or not
bool checkingprime(int num){
	
	for(int i = 2; i <= sqrt(num); i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
} //end isPrime

//to print all the prime numbers
void printingprime(int **arr, int rows, int cols){
	
	//to fill the 2D array with prime numbers
	for(int i = 0, num = 2; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(checkingprime(num)){
				*(*(arr + i) + j) = num;
			} else {
			    j--;
			}
			num++;
		}
	}
	
	//to print the output
	for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++) {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
	
} //end printPrime

void main(){
	
	int rows, cols;
	
	printf("Enter total no. of rows : ");
	//taking no. of rows as user's input
	scanf("%d", &rows);
	printf("Enter total no. of columns : "); 
	//taking no. of columns as user's input
	scanf("%d", &cols);
	
	//allocating memory dynamically for a 2D array
	int** arr= malloc(rows*sizeof(int*));
    int* brr= malloc(rows*cols*sizeof(int));
    
    for(int i=0;i<rows;i++){
        arr[i] = brr+(i*cols);
    }
	printingprime(arr, rows, cols);
	
	
} //end main
