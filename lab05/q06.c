/*Programmer : Syed Fahad Faheem shah (23k-0062)
 *Date:9-19-2023
 *Description:This is a program for check 4th bit and 7th bit is on of off, if on then off it.
 */
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
