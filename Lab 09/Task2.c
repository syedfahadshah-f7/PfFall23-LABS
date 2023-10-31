
#include <stdio.h>
void reverse(int *arr, int size){
    arr[size];
    for(int i=0,j=size-1;i<size/2;i++,j--){
       int temp =arr[i];
       arr[i]= arr[j];
       arr[j]= temp;}
}
int main() {
    int size=10;
    int arr[10];
    // taking inputs from user
    printf("Enter Values:");
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    // printing  array    
    for(int i=0;i<10;i++){    
    printf("%d,",arr[i]);
    }
    // sending array to reverse function
    reverse(arr,size);
    printf("\n");
    // printing reverse  array    
    for(int i=0;i<10;i++){    
    printf("%d,",arr[i]);
    }
    return 0;
}
