/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-12-2023
 *Description:This is a program for telling who is older by taking two persons DOB as a input.
 */
#include <stdio.h>

int main() {
   int personone;
   int persontwo;
   
   int dob, mob, yob; //assigning first person values
   printf("Enter first person date/month/year of birth :");
   scanf("%d %d %d", &dob, &mob, &yob);

     int sdob, smob, syob; //assigning second person values
   printf("Enter seconf person date/month/year of birth :");
   scanf("%d %d %d", &sdob, &smob, &syob);

   //checking by years 
   if(yob > syob){
       printf("second person is Older");
   }
   // checking by months
   else if(yob == syob){
       if(mob > smob){ printf("second person is Older"); }
       else{ printf("first person is Older"); }
   }
   //checking by dates
   else if(mob == smob){
       if(dob > sdob){ printf("second person is Older"); }
       else{ printf("first person is Older"); }
   }
   else{
       printf("First person is Older");
   }
   return 0;
}
