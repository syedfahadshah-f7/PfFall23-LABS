/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-19-2023
 *Description:This is a program for light sensor value changes.
 */
#include<stdio.h>
int main(){
     int intensity;
     printf("Enter the intensity of light(0~1000):");
    scanf("%d", &intensity);
    
    if(intensity > 500){
        printf("its under sunshine");
    }//end if
    else if(intensity>0 && intensity<=100){
        printf("its evening");
    }//end else if
    else if(intensity>100 && intensity<=500){
        printf("its under lightning");
    }//end else if
}//end main
