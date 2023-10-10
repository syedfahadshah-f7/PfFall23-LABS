/*programmer:Syed Fahad Faheem Shah(23k-0062)
  Description: Multpliacation of two matrix
  date:10/10/2023
 */
#include <stdio.h>

int main() {
    int ar,ac,br,bc;
    printf("Enter row and column of matrix1:");
    scanf("%d %d", &ar,&ac);
     printf("Enter row and column of matrix2:");
    scanf("%d %d", &br,&bc);
    if(ac == br){
    int arr[ar][ac], brr[br][bc], ans[ar][bc];
    printf("Enter Values of MAtrix 1\n");
    for (int i=0;i<ar;i++){
        for(int j=0;j<ac;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Enter Values of MAtrix 2\n");
    for (int i=0;i<br;i++){
        for(int j=0;j<bc;j++){
            scanf("%d", &brr[i][j]);
        }
    }
    // end taking inputs loop
    
     for (int i=0;i<ar;i++){
        for(int j=0;j<bc;j++){
            for(int k=0;k<ac;k++){
            ans[i][j] += (arr[i][k] * brr[k][j]);
            }
        }
    }// end multiplying loop
    printf("Multiplied Matrix :\n");
     for (int i=0;i<ar;i++){
        for(int j=0;j<bc;j++){
        printf("%d\t", ans[i][j]);
            
        }
        printf("\n");
     }
    }// end if
    else{
        printf("Invalid Multiplication of Matrix");
    }
    return 0;
}
