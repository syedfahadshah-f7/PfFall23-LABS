/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-19-2023
 *Description:This is a program  to exchange higher four bits with the lower four bits .
 */
#include <stdio.h>

int main() {
    int num, i, j;
    printf("Enter 8 bit number:");
    scanf("%d", &num);
    
    if (num > 10){
    i = num % 10000;
    j= num / 10000;
    
    printf("Swap bits: %.4d%.4d", i, j);
}//end if
    return 0;
}//end main
