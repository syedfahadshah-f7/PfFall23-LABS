/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-19-2023
 *Description:This is a program for check 4th bit and 7th bit is on of off, if on then off it.
 */
#include<stdio.h>
  int main (){
  int num, bit4, bit7;
    printf("Enter 8 bit number:");
    scanf("%d", &num);
    
   bit4 = (num /1000) % 10;
  bit7 = (num /1000000) % 10;
  
  if(bit4!=0 && bit7!=0){
   
   num = num-1000000-1000;
  }//end if
  printf("Final numbers:%.8d", num);
  return 0;
  }//end main
  
