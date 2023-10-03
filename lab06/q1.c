/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-03-2023
 *Description:checking the Number is perfect or not  .
 */
#include<stdio.h>
void main(){
int num, sum=0;
printf("Enter number:");
scanf("%d", &num);

for(int i=1;i<=num/2;i++){
if(num%i == 0){
sum =sum + i;
}// end if
}// end loop
if(num == sum){
printf("Number is Perfect");
}// end if
else{ printf("Number is not perfect");
}// end else
}// end main
