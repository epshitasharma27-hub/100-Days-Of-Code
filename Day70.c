/*Write a program to take a string input. Change it to sentence case.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase first
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);

    // Convert first non-space letter to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[i] = toupper(str[i]);
            break;
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}
