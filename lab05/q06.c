#include<stdio.h>

void main(){
	int num, i, j, remone, remtwo;
	printf("Enter bit number");
	scanf("%d", &num);
	
	remone = num % 1000 ;
	remtwo = num % 1000000;
	 if(remone!= 0 && remtwo!= 0){
	     
    i = 1000 + remone;
    j = 1000000 + remtwo;
	num = num - i -j;
	num = num + 1000 +1000000;
    printf(" %d", num);
    
}// end eif
    else if(remone == 0 && remtwo==0){
        printf(" %d", num);
    }//else if end
}
