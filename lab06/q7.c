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





