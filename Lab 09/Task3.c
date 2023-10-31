// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter Size :");
    scanf("%d", &n);
    
    char crr[10]={'a','b','c','d','e','f','g','h','i','j','\0'};
    int brr[10]={0,1,2,3,4,5,6,7,8,9};
    long long int arr[10]={10,9,8,7,6,5,4,3,2,1};
    
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
