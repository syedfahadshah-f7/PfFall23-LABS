/*programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-12-2023
 *Description:print star inside spacing.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    // Print upper part of the pattern
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i) {
            printf(" ");
            j++;
        }//end loop

        printf("*");

        if (i > 1) {
            j = 1;
            while (j <= 2 * (i - 1) - 1) {
                printf(" ");
                j++;
            }//end loop
            printf("*");
        }//end if

        printf("\n");
        i++;
    }//wmd main upper loop

    // Print lower part of the pattern
    i = n - 1;
    while (i >= 1) {
        int j = 1;
        while (j <= n - i) {
            printf(" ");
            j++;
        }// end loop
        printf("*");

        if (i > 1) {
            j = 1;
            while (j <= 2 * (i - 1) - 1) {
                printf(" ");
                j++;
            }//end loop
            printf("*");
        }//end if

        printf("\n");
        i--;
    }//end main lower loop

    return 0;
}//end main
