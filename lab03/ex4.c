#include<stdio.h>
int main(){
	int discountprice;
	int saleprice;
	int originalprice;
	printf("Enter Original price:");
	scanf("%d", &originalprice);

	int discount;
	printf("Enter discount:");
	scanf("%d", &discount);
	
	 discountprice = (originalprice/10)*(discount/10) ;
	
    saleprice = originalprice - discountprice ;
	printf("Sale Price %d", saleprice);

}
