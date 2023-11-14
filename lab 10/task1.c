// Online C compiler to run C program online
#include <stdio.h>
void printingfunction(void* arr,int datatype){
    
    if(4==datatype/sizeof(int)){
        printf("Array data type is int\n");
        for(int i=0;i<datatype/sizeof(arr[0]);i++){
            printf("%d", arr+i);
        }
    }
    if(1==datatype/sizeof(char)){
        printf("Array data type is char\n");
        for(int i=0;i<datatype/sizeof(arr[0]);i++){
            printf("%c", arr+i);
        }
    }
    if(8==datatype/sizeof(double)){
        printf("Array data type is double\n");
        for(int i=0;i<datatype/sizeof(arr[0]);i++){
            printf("%lf", arr+i);
        }
    }
    if(4==datatype/sizeof(float) ){
        printf("Array data type is float\n");
        for(int i=0;i<datatype/sizeof(arr[0]);i++){
            printf("%f", arr+i);
        }
    }
}
    


int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double doubleArr[] = {1.111, 2.222, 3.333, 4.444, 5.555};
    char charArr[]= {'a', 'b', 'c', 'd'} ;
    
     printingfunction(intArr,sizeof(intArr));
     printingfunction(floatArr,sizeof(floatArr));
     printingfunction(doubleArr,sizeof(doubleArr));
     printingfunction(charArr,sizeof(charArr));
    return 0;
}
