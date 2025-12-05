//Remove all vowels from a string.
#include <stdio.h>
int main (){
    char str[100];
    int i, j;
    printf("Enter a string: ");
    gets(str);   

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            // Shift characters to the left
            for(j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            i--; // Adjust index to check the new character at this position
        }
    }

    printf("String after removing vowels: %s\n", str);

    return 0;
}