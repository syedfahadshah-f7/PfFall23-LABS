#include<stdio.h>

void main(){
    int off=0, cost, saved=0;
    printf("Enter the total cost of items: ");
    scanf("%d", &cost);
    
    if(cost <= 1999){
        
        off = cost*50 /100;
        saved = cost - off;
        printf("Actual value of amount is %d:", cost);
        printf("\nsaved amount  %d:", saved);
        printf("\nAmount after discount:%d", off);
    }//end if
    else if(cost>=2000 && cost<=4000){
        
        off = cost*20 /100;
        saved = cost - off;
        printf("Actual value of amount is %d:", cost);
        printf("\nsaved amount  %d:", saved);
        printf("\nAmount after discount:%d", off);
    }//end else if

    else if(cost>4000 && cost<=6000){
        
        off = cost*30 /100;
        saved = cost - off;
        printf("Actual value of amount is %d:", cost);
        printf("\nsaved amount  %d:", saved);
        printf("\nAmount after discount:%d", off);
    }//end else if
    else if(cost>6000){
        
        off = cost*50 /100;
        saved = cost - off;
        printf("Actual value of amount is %d:", cost);
        printf("\nsaved amount  %d:", saved);
        printf("\nAmount after discount:%d", off);
    }//end else if


}
