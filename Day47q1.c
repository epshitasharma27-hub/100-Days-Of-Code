#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int count1[256] = {0}, count2[256] = {0};

    // Input two strings
    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    // If lengths differ → not anagram
    if (strlen(s1) != strlen(s2)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequency of each character
    for (int i = 0; s1[i] != '\0'; i++) {
        count1[(int)s1[i]]++;
        count2[(int)s2[i]]++;
    }

    // Compare both frequency arrays
    for (int j = 0; j < 256; j++) {
        if (count1[j] != count2[j]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
