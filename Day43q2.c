//Check if a string is a palindrome.

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
    char str[100], original[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    
    strcpy(original, str);

   
    reverse(str);

    
    if (strcmp(original, str) == 0)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
