/* programmer: Syed Fahad Faheem Shah (23k-0062)
   Description: printing man
   Date:10/10/2023
*/
#include <stdio.h>
// printing Hat
void hat(int n){
    for(int k=0;k<n-2;k++){)
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
    printf("\n");
}
// printing body
void body(int n){
for(int i=0;i<n/2+1+(n*2);i++)
printf("*");
printf("\n");
for(int i=0;i<n-1;i++){
for(int i=0;i<n-3;i++)
printf("*");
for(int i=0;i<n-3;i++)
printf(" ");
for(int i=0;i<n;i++)
printf("*");
for(int i=0;i<n-3;i++)
printf(" ");
for(int i=0;i<n-3;i++)
printf("*");
printf("\n");
}
}
// function for legs
void legs(int n){
for(int i=0;i<n-1;i++)
printf(" ");
for(int i =0;i<n;i++)
printf("*");
printf("\n");
for(int i=0;i<n-1;i++){
for(int i=0;i<n-1;i++)
printf(" ");
for(int i =0;i<n-3;i++)
printf("*");
for(int i =0;i<n-4;i++)
printf(" ");
for(int i =0;i<n-3;i++)
printf("*");
printf("\n");
}
}
// function for feet
void feet(int n){
for(int i=0;i<2;i++){
printf(" ");
for(int i=0;i<n;i++)
printf("*");
}
}
int main() {
    int num;
    printf("Enter Number:");
    scanf("%d", &num);
    
    hat(num);
    face(num);
    body(num);
    legs(num);
    feet (num);

    return 0;
}
