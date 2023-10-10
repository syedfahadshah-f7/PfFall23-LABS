// Online C compiler to run C program online
#include <stdio.h>
// printing Hat
void hat(int n){
    for(int k=0;k<n-2;k++){
    for(int i=0;i<n-1;i++)
        printf(" ");
    for(int j=0;j<n;j++)
        printf("*");
        printf("\n");
    }
    for(int i=0;i<1;i++)
    printf(" ");
    for(int j=0;j<n%2+n*2;j++)
     printf("*");
      printf("\n");
}
// printing Face
void face(int n){
    //for eyes
    for(int i=0;i<n-1;i++){
    printf(" ");}
    printf("*");
    for(int j =0; j<n-2;j++){
    printf(" ");}
    printf("*");
    printf("\n");
    //for nose
    for(int i=0;i<n+1;i++){
    printf(" ");}
    printf("|");
    printf("\n");
    //for mouth
    for(int i=0;i<n;i++){
    printf(" ");}
    printf("(");
    printf("_");
    printf("/");
    printf("\n");
    printf("\n");
    for(int i=0;i<n;i++){
        printf(" ");}
    printf("|");
     printf(" ");
    printf("|");
}
int main() {
    int num;
    printf("Enter Number:");
    scanf("%d", &num);
    
    hat(num);
    face(num);

    return 0;
}
