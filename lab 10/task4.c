#include <stdio.h>
#include <string.h>
char *reversesentence(char *sen){
      char *p1, *p2;

      if (! sen || ! *sen)
            return sen;
      for (p1 = sen, p2 = sen + strlen(sen) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
       return sen;
}

void reverseletters(char *sen, char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char sen[1000];
    printf("Enter Sentence: ");
    fgets(sen, sizeof(sen), stdin);
     
    reversesentence(sen);

    char *start = sen;
    char *end = sen;

    do{
        if (*end == ' ' || *end == '\n') {
            reverseletters(sen, start, end - 1);
            start = end + 1;
        }
        end++;
    } while (*end != '\0');

   
    reverseletters(sen, start, end - 1);

    printf("%s", sen);
    return 0;
}
