/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-31-2023
 *Description:Multiply Two numbers through addition using Recursion.
 */
#include <stdio.h>
int multiply(int a, int b,int ans){
    if(b ==0)return  ans;
      ans += a;
     multiply(a,b-1,ans);
}
int main() {
   int a,b,ans=0;
   printf("Enter Number1:");
   scanf("%d", &a);
    printf("Enter Number2:");
   scanf("%d", &b);

    int mul =multiply(a,b,ans);
    printf("Ans=%d", mul);
    return 0;
}
