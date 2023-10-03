/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-03-2023
 *Description: Program that takes a user input array and prints the sum of its elements..
   */
#include <stdio.h>
int main() {

    int sum=0, size;
    printf("Enter size of array:");
    scanf("%d", &size);

    int arr[size];
    for(int i=0;i<size;i++){
      
    printf("Enter Number %d:", i+1);
		scanf("%d", &arr[i]);
		sum += arr[i];
      
    }// end for loop
    printf("Sum of number is:%d", sum);
    return 0;
}// end main





