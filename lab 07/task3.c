/*programmer:Syed Fahad Faheem Shah(23k-0062)
  Description: taking number from user and count the sum of their digits
  date:10/10/2023
 */
#include <stdio.h>
int main(){
    int num,sum,store = 0;
    printf("Enter Number");
    scanf("%d", &num);
    while(num >0){
        store = num%10;
        num =num/10;
        sum += store;
    }
    printf("Sum is:%d", sum);
    return 0;
}
