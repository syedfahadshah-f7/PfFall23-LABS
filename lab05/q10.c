/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-19-2023
 *Description:This is a program  to exchange higher four bits with the lower four bits .
 */
#include<stdio.h>
void main (){
	// All are bits values from bit1 to bit 8
		int one, two, three, four, five, six, seven, eight, i, j, k, l;

		printf("Enter 8 bits number:");
		scanf("%d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight);

		i = five;
		j = six; 
		k = seven;
		l = eight;
		
		five =one; 
		six = two; 
		seven = three; 
		eight = four;

		printf("your change bits:%d %d %d %d %d %d %d %d \n", i, j, k, l, five, six, seven, eight);
}// end main
