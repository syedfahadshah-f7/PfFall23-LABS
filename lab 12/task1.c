/* Programmer:Syed Fahad Faheem Shah(23k-0062)
    Date:12-2-2023
    Description: Reading and printing data from CSV file
*/
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
void tokenize(char* arr[30]){
	char delim[2]= ",";
	char* temp= strtok(arr,delim);
	while(temp != NULL){
		printf("%s\t|", temp);
		temp = strtok(NULL,delim);		
	}
}

int main(){
	FILE *ptr=fopen("table.csv", "r");
	char line[30];
	int max_cols=1,max_rows=0;
	
	 while(fgets(line,sizeof(line),ptr)!= NULL){
		max_rows++;
		printf("\n");
		tokenize(line);
		
	}
	fseek(ptr,0,SEEK_SET);
	
	while(1){
		if(fgetc(ptr) == '\n'){
			break;
		}
		if(fgetc(ptr)==','){
			max_cols++;
		}
	}
	printf("\n%d max rows\t %d max columns",max_rows,max_cols);

	fclose(ptr);
	return 0;
}
