//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[20];
    char day[3], year[5];

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    // Extract day and year only
    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    year[0] = date[5];
    year[1] = date[6];
    year[2] = date[7];
    year[3] = date[8];
    year[4] = '\0';

    // Print in required format
    printf("%s-Apr-%s\n", day, year);

    return 0;
}
