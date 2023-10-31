/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-31-2023
 *Description:Finding Factorial through Recursion.
 */
#include <stdio.h>
void factorial(int n,int ans){
   
    if(n == 1){
        printf("%d", ans);
    }
    else{
        ans *= n;
        n--;
        factorial(n,ans);
    }
}
int main() {
    int n,ans=1;
    printf("Enter Number:");
    scanf("%d", &n);
    
    factorial(n,ans);
    return 0;
}
