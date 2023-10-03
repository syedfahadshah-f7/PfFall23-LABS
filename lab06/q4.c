/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:10-03-2023
 *Description: Program for printing  from num1 till num2 and printing it in descriptive form
   */
#include <stdio.h>

int main() {
  
   int num1,num2;
   printf("Enter Two Numbers:");
   scanf("%d %d", &num1,&num2);
   for(int i=0;num1<=num2;num1++){
       

       if(num1<=9){
	switch(num1){
            case 1 :
            printf("one,");
            break;
            case 2 :
            printf("two");
            break;
            case 3 :
            printf(",three");
            break;
            case 4 :
            printf(",Four");
            break;
            case 5 :
            printf(",Five");
            break;
            case 6 :
            printf(",Six");
            break;
            case 7:
            printf(",Seven");
            break;
            case 8 :
            printf(",Eight");
            break;
            case 9 :
            printf(",Nine");
            break;
           
	}//end switch

            
       }// end if
	else if(num1>9){
       if(num1%2 ==0){printf(",Even");}
            else{printf(",odd");}

     }
   }// end for loop

    return 0;
}
