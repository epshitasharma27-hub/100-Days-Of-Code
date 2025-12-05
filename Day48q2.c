//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char s[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        if (s[i] == ' ' || s[i] == '\n') {
            reverseWord(s, start, i - 1);
            start = i + 1;   // move to next word
        }
        i++;
    }

    printf("Reversed words: %s", s);

    return 0;
}
