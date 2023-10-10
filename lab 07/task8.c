/*programmer:Syed Fahad Faheem Shah(23k-0062)
  Description: Take an array by user, and sort the array into ascending order and then print the sorted version.
  date:10/10/2023
 */
#include <stdio.h>

int main() {
    int num,max=-100,temp;
    printf("Enter Number of elements ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter Values of MAtrix\n");
    for (int i=0;i<num;i++){
            scanf("%d", &arr[i]);
    }
     for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]<arr[j] && arr[j] != max){
                 max = arr[j];
                temp = arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
            }
        }
     }   
     for (int i=num-1;i>=0;i--){
            printf("%d,", arr[i]);
    }
    return 0;
}
