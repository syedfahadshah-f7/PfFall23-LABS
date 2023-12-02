#include<stdio.h>
#include<stdbool.h>

int main() {
    FILE *a = fopen("test1.txt", "rb");
    FILE *b = fopen("test2.txt", "rb");

    if (a == NULL || b == NULL) {
        perror("Error opening files");
        return 1;
    }

    bool flag = true;

    while (1) {
        int c1 = fgetc(a);
        int c2 = fgetc(b);

        if (c1 != c2) {
            flag = false;
            break;
        }

        if (c1 == EOF || c2 == EOF) {
            break;
        }
    }

    if (flag) {
        printf("Equal\n");
    } else {
        printf("Not Equal\n");
    }

    fclose(a);
    fclose(b);

    return 0;
}
