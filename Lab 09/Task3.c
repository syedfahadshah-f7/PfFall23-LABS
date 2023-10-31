/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-31-2023
 *Description:Taking 3 arrays from user  of type char, int, long long int Print the addresses and values stored in all these 
 arrays one by one using pointer arithmetic.
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter Size :");
    scanf("%d", &n);
    char crr[n]={'\0'};
    int brr[n]={0};
    long long int arr[n]={0};

    printf("Enter Values of Char Array");
    for(int i;i<n;i++){
        scanf("%c", &crr[i]);}
    printf("Enter Values of Int Array");
    for(int i;i<n;i++){
        scanf("%d", &arr[i]);}
    printf("Enter Values of long long Int Array");
    for(int i;i<n;i++){
        scanf("%d", &arr[i]);}
   
    
    int *b=brr;
    char *c=crr;
    long long int *a=arr;
    
    printf("\nAddresses and Values of Type Long Long int\n ");
    for(int i=0;i<n;i++){
        printf("l:%p, R:%d,",a+i,*(a+i));
    }
     printf("\nAddresses and Values of Type int\n ");
    for(int i=0;i<n;i++){
        printf("l:%p, R:%d,",b+i,*(b+i));
    }
     printf("\nAddresses and Values of Type char\n ");
     for(int i=0;i<n;i++){
        printf("l:%p, R:%c,",c+i,*(c+i));
    }
    return 0;
}
//
