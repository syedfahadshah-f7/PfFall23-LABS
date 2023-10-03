/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-03-2023
 *Description: Program to find the minimum and maximum number in an array..
   */
#include<stdio.h>

void main(){

    int  size;
    printf("Enter Size Of Array:");
    scanf("%d", &size);

    int arr[size];
    for(int i =0;i<size;i++){
        printf("Enter Number%d:", i+1);
        scanf("%d", &arr[i]);
    }// end initialization loop
  
    int max=arr[0], min=arr[0];
    for(int i =0;i<size;i++){
        if(max < arr[i])
        { max = arr[i];}

        else if(min > arr[i])
        { min = arr[i];}

    }//end loop

    printf("Maximum Number:%d Minimum Number:%d", max,min);
}// end main
