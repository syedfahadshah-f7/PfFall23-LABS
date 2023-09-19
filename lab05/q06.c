#include <stdio.h>

int main() {
    // All are bits values from bit1 to bit 8
    int one, two, three, four, five, six, seven, eight;

    printf("Enter 8 bits number: ");
    scanf("%d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight);

    if (four != 0 && seven != 0) {
        four = 0;
        seven = 0;
        printf("\n%d %d %d %d %d %d %d %d\n", one, two, three, four, five, six, seven, eight);
    } //end if
    else {
        printf("\n%d %d %d %d %d %d %d %d\n", one, two, three, four, five, six, seven, eight);
    }// end else

    return 0;
}//end main
