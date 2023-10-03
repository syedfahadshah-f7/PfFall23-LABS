/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-03-2023
 *Description: Fibonacci series up to 10000 and the sum of the generated Fibonacci numbers divisible by 3, 5 or 7  
 */
#include<stdio.h>
int main(){
int sum=0,fibonachi=1,a=0,b=0;



for(int i=0;fibonachi<10000;i++){

if(fibonachi%3 == 0 || fibonachi%5 == 0 || fibonachi%7 == 0){
	sum +=fibonachi;
}// end if	


a=b;
b=fibonachi;
fibonachi=a+b;
if(fibonachi>10000){break;}	
printf("%d,", fibonachi);


}// end loop
printf("\nSum is:%d", sum);
return 0;
}// end main
