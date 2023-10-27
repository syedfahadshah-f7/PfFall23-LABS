/*programmer:Syed Fahad Faheem Shah(23k-0062)
  Description: taking nxn grid from user.Generate a matrix “maxLocal” of size (n - 2) x (n - 2) 
  finding the largest value in every contiguous 3x3 matrix in the grid.
  Return the generated matrix.
  date:10/10/2023
 */
#include <stdio.h>

void main() {
    int n,max=0;
    printf("Enter Grid size:");
    scanf("%d", &n);
    printf("Enter Values of Grid\n");
   int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }          
    
    int maxlocal[n-2][n-2];
   int a=3,b=3;
   
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-2;j++){
            for(int k=i;k<a;k++){
              max =0;
                for(int l=j;l<b;l++){
                    if(max< arr[k][l]){
                        max =arr[k][l];
                    }
                }// end l loop
            }// end k loop
         maxlocal[i][j]=max; 
         if(b%n ==0) {
             a++;
             b=3;
         }else b++;
        }// end j loop
        
    }// end i loop
    
    //printing maxlocal
    printf(" Values of Maxlocal\n");
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-2;j++){
            printf("%d\t", maxlocal[i][j]);
        }
        printf("\n");
    }
}// end main
