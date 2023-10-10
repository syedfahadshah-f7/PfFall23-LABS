/*programmer:Syed Fahad Faheem Shah(23k-0062)
  Description: Ask users to enter a bill for all mobile phones in all branches and finding following things.
- Total bill for all branches
- Total bill for each branch
- Branch ID where maximum bill arrived
- Branch and Mobile Phone IDs where bill is highest of all mobile phones.
  date:10/10/2023
 */
#include <stdio.h>
    int main() {
    int phoneid,branch,totalsum=0,maxbranchbill=0,branchid=0,maxmobilebill=0,mobileid=0;
    printf("Enter Number of Branches:");
    scanf("%d", &branch);
     printf("\nEnter Number of Mobile Phone Id in each Branch");
    scanf("%d", &phoneid);
    int arr[branch][phoneid];
    
    // taking input by user
    for (int i=0;i<branch;i++){
        printf("Enter bill for all mobile phones in branch %d:\n", i+1);
        for(int j=0;j<phoneid;j++){
        scanf("%d", &arr[i][j]);
        }
    }
    // finding total sum of branch and separate sum of branch
    for (int i=0;i<branch;i++){
        int sum=0;
        for(int j=0;j<phoneid;j++){
         sum += arr[i][j];
        }
        totalsum += sum;
        if(maxbranchbill<sum){
            maxbranchbill=sum;
            branchid = i+1;
        }
        printf("Total bill of Branch %d is:%d\n", i+1, sum);
    }
     printf("Total Bill of all Branches  is:%d\n", totalsum);
     printf("Branch %d where maximum bill arrived\n", branchid);

    
    // finding Branch ID where maximum bill arrived Branch and Mobile Phone IDs where bill is highest of all mobile phones.
    
    for (int i=0;i<branch;i++){
        for(int j=0;j<phoneid;j++){
            if(maxmobilebill<arr[i][j]){
                maxmobilebill=arr[i][j];
               mobileid = j+1;
            }
        }
    }
    printf("Branch %d Mobile Phone %d where bill is highest of all mobile phones.", branchid,mobileid);
    return 0;
}
