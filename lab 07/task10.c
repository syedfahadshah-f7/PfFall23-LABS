/*programmer:Syed Fahad Faheem Shah(23k-0062)
  Description: Taking an unsorted array by user that contains only + integers, find a continuous sub-
array which adds to a given number S.
  date:10/10/2023
 */
#include <stdio.h>
    int main() {
    int sum, num,hold=0,startingindex,endindex;
    printf("Enter Number of elements");
    scanf("%d", &num);
    int arr[num];
    printf("\nEnter Elements:");
    
    // taking input elements and sum
    for(int i=0;i<num;i++){
    scanf("%d", &arr[i]);
    }
    printf("\nEnter Sum:");
    scanf("%d", &sum);
     
    for(int i=0;i<num;i++){
        hold=0;
        for(int j=i+1;j<num;j++){
            hold += arr[j];
            if(hold == sum){
                startingindex = i+1;
                endindex = j;
                break;
            }
        }
    }
   
   printf("The Elements from Index %d to %d when summed results in the output of %d.", startingindex,endindex,sum);
    return 0;
}
