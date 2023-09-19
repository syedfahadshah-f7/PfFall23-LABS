/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-19-2023
 *Description:This is a program for greeting according to time using a 24-hour format.
 */
#include <stdio.h>

void main(){
	double time;
	printf("Enter time:");
	scanf("%lf", &time);

	if(time>5 && time<=11){
		printf("Good Morning");

}//end if
	else if(time>12 && time<=18){
		printf("Good Evening");

}//end else if
	else if(time>18 && time<=24){
		printf("Good Night");

}//end else if
}// end main
