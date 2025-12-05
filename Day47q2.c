//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[50] = "";
    char temp[50];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        // Build each word in temp
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            temp[j++] = sentence[i];
        } else {
            temp[j] = '\0';   // end of temp word
            if (strlen(temp) > strlen(longest))
                strcpy(longest, temp);
            j = 0; // reset for next word
        }
        i++;
    }

    // Check last word if sentence doesn't end with space
    temp[j] = '\0';
    if (strlen(temp) > strlen(longest))
        strcpy(longest, temp);

    printf("Longest word: %s\n", longest);

    return 0;
}
