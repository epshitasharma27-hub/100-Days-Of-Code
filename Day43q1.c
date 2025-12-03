//Reverse a string.

#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int i, j;
    char temp;

    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str); // reads a single word

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
