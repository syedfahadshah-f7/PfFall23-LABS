/*programmer:Syed Fahad Faheem Shah(23k-0062)
  Description: Divide two numbers according to user demand
  date:10/10/2023
 */
#include <stdio.h>

int main() {
   int num1, num2, rem, count=0;
   printf("Enter Num1:");
   scanf("%d", &num1);
   printf("Enter Num2:");
   scanf("%d", &num2);
  
   while(num1 >= num2){
       num1 = num1 - num2;
        count++;
   }
   
   printf("Reminder=%d\n Quotient=%d\n",num1,count);

    return 0;
}
