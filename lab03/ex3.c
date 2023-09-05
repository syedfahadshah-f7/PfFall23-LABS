#include<stdio.h>
#include<math.h>

void main(){
	int a,b;
	printf("Enter two sides=");
	scanf("%d %d", &a , &b);

	int sides = (a*a)+(b*b);
	printf("Hypotenaous: %.2f",sqrt(sides));

	
}
