/*
Programmer:Syed fahad Faheem Shah(23k-0062)
Description: Check the frequency of each number enter by user
Date:10/10/2023
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int count, check, num;
    printf("Enter Number of Elements");
    scanf("%d", &num);
    int arr[num],brr[100]={0};
    printf("Enter Numbers:\n");
    for(int i=0;i<num;i++){
        scanf("%d", &arr[i]);
    }// taking inputs 
    
    for (int i=0;i<num;i++) {
        count = 0;
        check = arr[i];
        bool flag = true;  
        
        for (int j=0;j<num;j++) {
            if (check == arr[j]) {
                count++;
            }
        }  // end j loop

        for (int k=0;k <i;k++) {
            if (arr[i] == brr[k]) {
                flag = false;
            }
        }  // end k loop

        if (flag == true) {
            printf("Frequency of %d: %d\n", arr[i], count);
        }

        brr[i] = arr[i];
    }  // end i loop

    return 0;
}//end main
