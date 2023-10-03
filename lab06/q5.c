
#include <stdio.h>

int main() {
    for(int i=0;i<=6;i++){
        if(i%2 == 0){
            printf("%d\t%d\t%d\t%d\t\n", i,i,i,i);
        }// end if
        else{
            printf("\t%d\t%d\t\n",i,i);
        }// end else
    }//end for loop

    return 0;
}
