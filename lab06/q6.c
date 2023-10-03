
#include <stdio.h>

int main() {
int num,store=21,computers;
  while(store>5){
      num = 0;
     printf("Choose one Number(1,2,3,4):");
     scanf("%d", &num);
     store = store- num;
     computers = 5-num;
     printf("Computers pick:%d\n", computers);
     store = store- computers;
     printf("Remaining matchstick:%d\n", store);
    
}
while(store>1){
    num = 0;
     printf("Choose one Number(1,2,3,4):\n");
     scanf("%d", &num);
     store -= num;
     printf("Your Choise:%d\n Remaining Matchsticks:%d", num,store);
    switch(num){
        case 1:
        store = store - num;
        store = store - 4;
        printf("comuter Choise:4\n Remaining Matchsticks:%d", store);
        break;
        case 2:
        store = store - num;
        store = store - 3;
        printf(" comuter Choise:3\n Remaining Matchsticks :%d",store);
        break;
        case 3:
       store = store - num;
        store = store - 2;
        printf("comuter Choise:2\n Remaining Matchsticks:%d",store);
        break;
        case 4:
        store = store - num;
        store = store - 1;
        printf("comuter Choise:1\n Remaining Matchsticks:%d",store);
        break;
    }// end switch
}// end last loop
printf("You Loose");

    return 0;
}
