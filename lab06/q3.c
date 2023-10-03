/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-03-2023
 *Description: Program for finding LCM and GCD of two numbers
   */
#include <stdio.h>

int main() {
   int num1,num2, check,store,lcm,j=1;
   printf("Enter Two Numbers:");
   scanf("%d %d", &num1,&num2);
   
   if(num1 < num2){check = num1;}
   else {check = num2;}
  
   for(int j = check;j>0;j--){
       if(num1%j == 0 && num2%j ==0){
           if(j>=check){
        printf("GCD is:%d", j);} 
        lcm = (num1*num2)/j;
      printf("\nLCM is:%d", lcm);
   
        break ;
       }// end if
   }// end for
    return 0;
}
