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
