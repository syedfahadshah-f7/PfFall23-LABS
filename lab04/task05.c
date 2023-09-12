#include <stdio.h>

int main() {
   int personone;
   int persontwo;
   
   int dob, mob, yob;
   printf("Enter first person date/month/year of birth :");
   scanf("%d %d %d", &dob, &mob, &yob);

     int sdob, smob, syob;
   printf("Enter seconf person date/month/year of birth :");
   scanf("%d %d %d", &sdob, &smob, &syob);
   
   if(yob > syob){
       printf("second person is Older");
   }
   else if(yob == syob){
       if(mob > smob){ printf("second person is Older"); }
       else{ printf("first person is Older"); }
   }
   else if(mob == smob){
       if(dob > sdob){ printf("second person is Older"); }
       else{ printf("first person is Older"); }
   }
   else{
       printf("First person is Older");
   }
