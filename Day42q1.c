//Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c >= 'A' && c <= 'Z')
            c += 32;

        if (c >= 'a' && c <= 'z') {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
}
