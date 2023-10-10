/*programmer:Syed Fahad Faheem Shah(23k-0062)
  Description: Multpliacation of two matrix
  date:10/10/2023
 */
#include <stdio.h>
int main() {
    int ar,ac,br,bc;
    printf("Enter row and column of matrix1 and matrix2:");
    scanf("%d %d", &ar,&ac,&br,&bc);
    int arr[100][100],brr[100][100],mul[100][100]={0};
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
    if(ac == br){
    for(int i=0;i<ar;i++){
        for(int j=0;j<bc;j++){
           for (int k=0;k<ac;k++){
               mul[i][j] += arr[j][k] * 2 2 brr[k][j];
                }
            }
        }
    }
    for (int i=0;i<ar;i++){
        for(int j=0;j<bc;j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
