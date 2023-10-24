/* Programmer: Syed Fahad Faheem Shah(23k-0062)
   description: Validation and user authentication according to stored password
   Date: 24/10/2023
*/ 
#include <stdio.h>
#include <string.h>
int main(){
	char password[100];
	printf("Enter password:");
	scanf("%s", password);
	
	char check[100]={"secure123"};
	
	int value= strlen(password);
	
	int ans = strcmp(check,password);
	
	if(value>=8){
	    if(ans == 0){
		printf("Login Successful");
			}
		else{
		printf("Login Failed");
	    	}
	}// end checking condition
	else{
		printf("Password is too short")
	}
	return 0;
	
}// end main
