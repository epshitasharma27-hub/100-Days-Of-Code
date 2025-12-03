//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char str[200];
    char *p;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    p = str;

    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *p = *p - 32;
        }
        p++;
    }

    printf("Uppercase string: %s", str);

    return 0;
}
