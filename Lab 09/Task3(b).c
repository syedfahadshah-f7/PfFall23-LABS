/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-31-2023
 *Description:Finding Greatest Common Devisor through Loops and recursion.
 */
#include <stdio.h>
int GCD(int num1,int num2,int n){
 
    if(n>1)
        if(num1%n==0 && num2%n==0){
                printf("GCD by using Recursion:%d", n);
                return 0; }
        GCD(num1,num2,n-1);
        
    
}
int main() {
    
    
    int num1,num2,gcd=0,n;
    printf("Enter num1 and num2:");
    scanf("%d %d", &num1,&num2);
    if(num1>num2){n = num2;}
    else{n=num1;}
    // Finding GCD by Using loop
    for(int i=n;i>1;i--){
        if(num1%i==0){
            if(num2%i==0){
                gcd=i;
                break;
            }
        }
    }
    printf("GCD by using Loop:%d\n", gcd);
    GCD(num1,num2,n);
    return 0;
}
