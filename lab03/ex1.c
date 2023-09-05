#include <stdio.h>
int main(){
    
    int num1;
    int num2;
    
    printf("Enter Number 1:\n");
    scanf("%d", &num1);
    
    printf("Enter Number 2:\n");
    scanf("%d", &num2);
    char func;
    printf("Enter Function:");
    scanf("%c", &func);

    if (func =="+"){
        printf("Add = %d", num1+num2);
    }
    else if(func =='-'){
        printf("Sub = %d", num1-num2);
    }
    else if (func =='*'){
        printf("Multiply = %d", num1*num2);
    }
    else  (func == '/') {
        printf("divide = %d", num1/num2);
    }
    return 1;
}
