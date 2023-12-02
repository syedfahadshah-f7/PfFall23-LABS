/* Programmer:Syed Fahad Faheem Shah(23k-0062)
    Date:12-2-2023
    Description: Reading and comparing data in binary mode
*/
#include<stdio.h>
#include<stdbool.h>

int main() {
    FILE *a = fopen("test1.docs", "rb");
    FILE *b = fopen("test2.docs", "rb");

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
