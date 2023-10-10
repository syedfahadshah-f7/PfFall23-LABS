/*programmer:Syed Fahad Faheem Shah(23k-0062)
  Description: checiking Matrix is Symmetric or not
  date:10/10/2023
 */
#include <stdio.h>
#include<stdbool.h>
int main() {
    int r,c;
    printf("Enter row and column of matrix:");
    scanf("%d %d", &r,&c);
    int arr[100][100];
    printf("Enter Values of MAtrix");
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("\nEnter Value of  (%d,%d):", i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    bool flag = true;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[j][i] == arr[i][j]){
                flag = false;
            }
        }
    }
    if(flag == false ){
        printf("Array is symmetric:\n");
        for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d,", arr[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("Array is not symmetric:\n");
        for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d,", arr[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}
