/* 
programmer: Syed Fahad Faheem Shah (23k-0062)
Date: 10-06-2023
Description:Program for checking characters are plaindrome 
*/
#include <stdio.h>
#include <stdbool.h>
int main() {
    int size;
    printf("How many characters you want to check:");
    scanf("%d", &size);
    char arr[100];
    for(int i=0;i<size;i++){
    printf("\nEnter Characters%d:", i+1);
    scanf("%c ",&arr[i]);
    }
    bool flag=false;
    for(int i=0,j=size-1;i<=j;i++,j--){
        if(arr[i] != arr[j]){
        flag =true;
        }
        if(flag==true){
            printf("Character is plain drome ");
            break;
        }
        else{
            printf("Character is not plain drome ");
            break;
        }
    
        
    }
    
    return 0;
}
