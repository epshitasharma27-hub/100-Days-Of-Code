//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i, j;
    int freq[26] = {0}; // Frequency array for 'a' to 'z'

    printf("Enter a string: ");
    gets(str);   // for simplicity (unsafe but fine for small programs)

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}