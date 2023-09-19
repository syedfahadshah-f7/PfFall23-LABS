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
