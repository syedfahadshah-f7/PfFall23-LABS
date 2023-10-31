/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-03-2023
 *Description:Swapping by pointers.
 */
#include <stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int j=2, k=5;
    printf("j=%d, k=%d\n", j,k);
    swap(&j,&k);
   printf("j=%d, k=%d\n", j,k);
   return 0;
}
//A)Because j and k addresses are not passed and in function swap pointers are needed to catch the addresses.
