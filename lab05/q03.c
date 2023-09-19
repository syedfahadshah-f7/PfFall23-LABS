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
