/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-31-2023
 *Description:Finding Fibonachi series through Recursion.
 */
#include <stdio.h>
int checking(int n,int a,int b,int fib){
   
      if(n>0){
      a=b;
      b=fib;
      printf("%d,", fib=a+b);
      checking(n-1,a,b,fib);
 
      } else {return 0; }
}
int main() {
int n;
printf("How many numbers you want to print from Fibonacci series:");
scanf("%d", &n);
int a=0,b=0,fib=1;
printf("%d,", fib);
checking(n,a,b,fib);

    return 0;
}
