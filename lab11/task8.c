#include <stdio.h>

typedef struct data {
    int length;
    int width;
    int height;
} data;

int main() {
    
    data arr[5]={
        {4,0,0},
        {5,5,5},
        {1,2,40},
        {10,5,41},
        {7,2,42}
    } ;

   for(int i=0;i<5;i++){
       if(arr[i].height<41){
           printf("%d\n", arr[i].length*arr[i].width*arr[i].height);
       }
   }
    return 0;
}
