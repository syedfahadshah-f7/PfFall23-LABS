/*programmer:Syed Fahad Faheem Shah(23k-0062)
  Description: Move Number according to user demand
  date:10/10/2023
 */
#include <stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int d;
    printf("How many number you want to rotate:");
    scanf("%d", &d);
    for(int i=0;i<d;i++){
        int temp = 0;
        for(int j=0;j<8-1;j++){
                temp = arr[j+1];
                arr[j+1]= arr[j];
                arr[j]=temp;
        }
    }
    for(int i=0;i<8;i++){
        printf("%d, ", arr[i]);
    }
    return 0;
}
