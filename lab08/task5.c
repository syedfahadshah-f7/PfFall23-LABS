/* Programmer: Syed Fahad Faheem Shah(23k-0062)
   description: Taking car number and day number as a input and checking both are even or odd then user use the car
    if car number and even number are even and odd then user dont use the car all do this in functions;
   Date: 24/10/2023
*/ 
#include<stdio.h>
int decidecarusage(int x, int y){
	if(x%2 == y%2){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int carnum,daynum;
	printf("Enter Car Number:");
	scanf("%d", &carnum);
	
	printf("Enter Day Number from(1to7):");
	scanf("%d", &daynum);
	
	int check = decidecarusage(carnum,daynum);
	if(check == 1){
		printf("Car should be used");
	}
	else{
		printf("Car should not be used");
	}
	return 0;
}
