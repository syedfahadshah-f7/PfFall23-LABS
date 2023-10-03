/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-03-2023
 *Description: Printing Pattern
   */
#include <stdio.h>

int main() {
    for(int i=0;i<=6;i++){
        if(i%2 == 0){
            printf("%d\t%d\t%d\t%d\t\n", i,i,i,i);
        }// end if
        else{
            printf("\t%d\t%d\t\n",i,i);
        }// end else
    }//end for loop

    return 0;
}
