#include<stdio.h>

struct date {
    int day;
    int month;
    int year; 
};
struct date today = {29, 11, 2025};
struct date tomorrow;

void count() {
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;
}
int every[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int kabisat(int y) {
    return (y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0);
}
int maxdays() {
    if (kabisat(today.year) && today.month == 2) {
        return 29;
    } else {
        return every[today.month - 1];
    }
    if (tomorrow.day > maxdays)
    {
        tomorrow.day = 1;
        tomorrow.month += 1;
        if (tomorrow.month > 12)
            tomorrow.month = 1;
            tomorrow.year += 1;
    }   
}

int main(){
    count();
    kabisat(today.year);
    maxdays();
    printf("Today %d/%d/%d\n", today.day, today.month, today.year);
    printf("Tomorrow %d/%d/%d\n", tomorrow.day, tomorrow.month, tomorrow.year);
    printf("Max days in month %d is %d\n", today.month, maxdays());
    printf("Kabisat year %d is %s\n", today.year, kabisat(today.year) ? "true" : "false");

    return 0;
}