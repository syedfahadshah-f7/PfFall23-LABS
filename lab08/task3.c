/* Programmer: Syed Fahad Faheem Shah(23k-0062)
   description: Text input from the user and searches for a specific character and display the totalcount of variable in function.
   Date: 24/10/2023
*/ 
#include<stdio.h>
int count(char *str, char check){
	int i,count=0;
	for(i=0;i<*str;i++){
		if(check == str[i]){
			count++;
		}
	}
	return count;
}
int main(){
	char str[100];
	printf("Enter text");
	scanf("%s", str);
	
	char check;
	printf("Enter variable you want to count:");
	scanf(" %c", &check);
	
	int ans = count (&str, check);
	printf("%d", ans);
	return0;
	
}
