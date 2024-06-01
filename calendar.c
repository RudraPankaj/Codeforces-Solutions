#include <stdio.h>
#include <stdlib.h>

// Function to determine if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1; // Invalid month
    }
}

// Function to display the calendar for a given month and year
void displayCalendar(int month, int year) {
    int i, j, day = 1;
    int daysInMonth = getDaysInMonth(month, year);

    // Find the day of the week for the first day of the month
    int startingDay = ((year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + day) % 7;

    // Print the calendar header
    printf("\n---------------------------\n");
    printf("   Calendar for %d-%02d\n", year, month);
    printf("---------------------------\n");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    // Print leading spaces
    for (i = 0; i < startingDay; i++) {
        printf("    ");
    }

    // Print the days of the month
    for (j = 1; j <= daysInMonth; j++) {
        printf("%4d", day++);
        if ((day - 1 + startingDay) % 7 == 0 || j == daysInMonth) {
            printf("\n");
        }
    }

    printf("---------------------------\n");
}

int main() {
    int year;

    // Input the year
    printf("Enter the year: ");
    scanf("%d", &year);

    // Display the calendar for each month
    for (int month = 1; month <= 12; month++) {
        displayCalendar(month, year);
    }

    return 0;
}
