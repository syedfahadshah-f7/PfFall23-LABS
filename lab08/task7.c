/* Programmer: Syed Fahad Faheem Shah(23k-0062)
   description: Calculate discount by last month coming records and purchase .
   Date: 24/10/2023
*/ 
#include<stdio.h>
int calculatediscount(int x, int y){
	int discount;
	if(x>=50 && y>10){
		discount =15;
		x -=(x/100)*discount;
	}
	else if(x>5 && y>=30){
		discount=10;
		x -=(x/100)*discount;
	}
	return x;	
}
int main (){
	int tpa, visit,cost;
	printf("Enter total purchase amount:");
	scanf("%d", &tpa);
	printf("Enter number of time visited past month:");
	scanf("%d", &visit);

	
	cost = calculatediscount(tpa,visit);
	printf("Discount Amount:%d", cost);
	return 0;
}
