#include <stdio.h>
#include <string.h>

void swapping(int *num1,int *num2){
      
            *num1 ^= *num2;
            *num2 ^= *num1;
            *num1 ^= *num2;
      
}
int main() {
    int num1,num2;
    printf("Enter Number 1:");
    scanf("%d", &num1);
    printf("Enter Number 2:");
    scanf("%d", &num2);

    printf("Number 1:%d\t Number 2:%d",num1,num2);
    swapping(&num1,&num2);
    printf("\nNumber 1:%d\t Number 2:%d",num1,num2);
    return 0;
}
