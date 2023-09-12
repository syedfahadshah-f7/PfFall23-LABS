/*programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-12-2023
 *Description:This is a program for print sum of the squares of integers.
*/

#include <stdio.h>

int main() {
  int num;
  printf("Enter your Number:");
  scanf("%d", &num);
  
  int i; // counter variable for loop
  int squr;
  int sum = 0;
  int j; // this variable store squares of numbers
  
  while(i < num){
      
      printf("Enter Number=");
      scanf("%d", &squr);
      
      j= squr * squr;
      sum = sum + j;
      i = i + 1;
      
  }//end loop
	
    printf("%d", sum);
    
    return 0;
}// end main	
