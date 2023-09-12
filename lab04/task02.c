/*Programmer : Syed Fahad Faheem shah
 *Date:9-12-2023
 *Description:This is a program for printing stars acccording to user input.
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter Your Number:");// put number you want to print stars in lines.
    scanf("%d", &n);
    
    int i = 0;
    while(i < n){
        i =i + 1;
        
        int j = 0;
        while(j < n){
           printf(" * ");
            j = j + 1;
            
        }//end loop
        
        printf("\n");
        
    }//end main loop
    
    

    return 0;
}// end main
