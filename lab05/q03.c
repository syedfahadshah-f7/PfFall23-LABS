/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-19-2023
 *Description:This is a program for asking you sure to delete or not.
 */
#include<stdio.h>
void main (){
	char hold;
	printf("Are you sure too delete [Y/y]/[N/n]");
	scanf("%c", &hold);

	switch(hold){
		case 'Y':
	printf("Delete successfully");
		break;
		case 'N':
	printf("Delete canceled");
		break;
		case 'y':
	printf("Delete successfully");
		break;
		case 'n':
	printf("Delete canceled");
		break;
	

}//end switch
}//end main
