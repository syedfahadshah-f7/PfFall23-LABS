#include<stdio.h>
int main(){
     int a, b ,c, discriminant;
     printf("Enter the value of a,b and c:");
    scanf("%d %d %d", &a, &b, &c);
    
    discriminant = b*b-(4*a*c);
    if(discriminant >0){
        printf("The Roots are unequal and Real");
    }// end if
    else if(discriminant == 0){
        printf("The Roots are equal and Real");
    }// end  else if
    if(discriminant < 0){
        printf("The Roots are complex and imaginary");
    }// end if
}//end main
