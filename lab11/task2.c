#include<stdio.h>
#include<string.h>

 struct automobilecompany{
	char serial_num[3];
	char manufacture[10];
	char material[10];
	char quantity[10];
};
int main(){
	int n;
	printf("Enter total number of serial numbers:");
	scanf("%d", &n);
	
	struct automobilecompany faltoo[n];
    int i;
	for(i=0;i<n;i++){
		printf("ENTER serial number (%d): ", i+1);
		scanf("%s", faltoo[i].serial_num);
		printf("\nENTER Year of Manufacture (%d): ", i+1);
		scanf("%s", faltoo[i].manufacture);
		printf("ENTER Material (%d): ", i+1);
		scanf("%s", faltoo[i].material);
		printf("ENTER Quantity (%d): ", i+1);
		scanf("%s", faltoo[i].quantity);	
	}
	
	for(i=0;i<n;i++){
		if(strcmp("BB1",faltoo[i].serial_num)<=0 && strcmp("CC6",faltoo[i].serial_num)>=0){
		printf("serial number:%s ", faltoo[i].serial_num );
		printf("\nYear of Manufacture: %s", faltoo[i].manufacture);
		printf("\nMaterial:%s", faltoo[i].material);
		printf("\nQuantity:%s", faltoo[i].quantity);
		printf("\n");
	    }
	}
	
return 0;	
}
