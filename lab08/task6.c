/* Programmer: Syed Fahad Faheem Shah(23k-0062)
   description: The program should take the array and its size and use the function to calculate Sum of the array,
    Maximum number of array and minimun  number of array 
   Date: 24/10/2023
*/
#include<stdio.h>
int functionprocessarray(int arr[], int n){
        arr[n];
        int sum=0,min=arr[0],max=arr[0];
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(min>arr[i]){
                min = arr[i];
            }// minimum checking condition
            if (max<arr[i]){
                max = arr[i];
            }// maximum checking condition
        }// end for loop
        printf("Minimnum:%d\n Maximum:%d\n Sum:%d", min,max,sum);
        return 0;
}// end function

int main(){
    int size;
    printf("Enter Size of array:");
	scanf("%d", &size);
	int arr[size];
	printf("Enter values of array:");
	for(int i=0;i<size;i++){
	    scanf("%d", &arr[i]);
	}
	functionprocessarray(arr,size);
	return 0;
}// end main
