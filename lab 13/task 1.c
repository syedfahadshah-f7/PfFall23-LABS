#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 5
int main(){
	FILE *f=fopen("task1.txt","r");
	if(f == NULL){
		printf("Error in opening file");
	}

	int i,j;
	int arr[size][size];
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			fscanf(f,"%d,",&arr[i][j]);			
		}
	}
	
	for(i=0;i<size;i++){
		for(j=i;j<size;j++){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
		printf("\n");
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d\t|", arr[i][j]);
		}
		printf("\n");
	}
	fclose(f);
	return 0;
