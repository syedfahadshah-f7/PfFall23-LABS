#include<stdio.h>
int main(){
	char value;
	printf("Enter character:");
	scanf("%c", &value);
	int store = value;

	if (value>32 && value<=47){
		printf("Input is special character");
}// end if
	else if (value>47 && value<=57){
	printf("Input is digit");
}// end else if

	else if (value>96 && value<= 122){
	printf("Input is Small Alphabet");
}// end else if
	
	else if (value>64 && value<= 90){
	printf("Input is Capital Alphabet");
}// end else if

}//end main
