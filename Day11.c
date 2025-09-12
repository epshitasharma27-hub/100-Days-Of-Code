#include <stdio.h>

//Write a program to display the month name and number of days using switch-case for a given month number.

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 1:
            printf("January - 31 days\n");
            break;
        case 2:
            printf("February - 28 or 29 days (leap year)\n");
            break;
        case 3:
            printf("March - 31 days\n");
            break;
        case 4:
            printf("April - 30 days\n");
            break;
        case 5:
            printf("May - 31 days\n");
            break;
        case 6:
            printf("June - 30 days\n");
            break;
        case 7:
            printf("July - 31 days\n");
            break;
        case 8:
            printf("August - 31 days\n");
            break;
        case 9:
            printf("September - 30 days\n");
            break;
        case 10:
            printf("October - 31 days\n");
            break;
        case 11:
            printf("November - 30 days\n");
            break;
        case 12:
            printf("December - 31 days\n");
            break;
        default:
            printf("Invalid month number! Please enter between 1 and 12.\n");
    }

    //Write a program to find profit or loss percentage given cost price and selling price.


    #include <stdio.h>


    float costPrice, sellingPrice, profit, loss, percentage;

    // Input values
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if(sellingPrice > costPrice) {
        // Profit case
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;
        printf("Profit = %f\n", profit);
        printf("Profit Percentage = %f%%\n", percentage);
    }
    else if(sellingPrice < costPrice) {
        // Loss case
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;
        printf("Loss = %f\n", loss);
        printf("Loss Percentage = %f%%\n", percentage);
    }
    else {
        // No profit no loss
        printf("No Profit, No Loss.\n");
    }

    

    return 0;
}
