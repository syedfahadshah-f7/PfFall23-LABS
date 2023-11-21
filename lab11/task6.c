#include <stdio.h>

typedef struct date {
    int day;
    int month;
    int year;
} date;

int main() {
    date current_date;
    current_date.day = 21;
    current_date.month = 11;
    current_date.year = 2023;

    current_date.day += 45;

    while (current_date.day > 30) {
        current_date.day -= 30;
        current_date.month++;
         
        if (current_date.month > 12) {
            current_date.month = 1;
            current_date.year++;
        }
    }

    printf("Final date: %d-%d-%d", current_date.month, current_date.day, current_date.year);
    return 0;
}
