//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main() {   
    char name[100];
    int i, len;

    printf("Enter a name: ");
    gets(name);   // for simplicity (unsafe but fine for small programs)

    len = strlen(name);

    // Print the first initial
    if(name[0] != '\0') {
        printf("%c. ", name[0]);
    }

    // Print initials after spaces
    for(i = 0; i < len; i++) {
        if(name[i] == ' ' && name[i + 1] != '\0' && i + 1 < len - 1) {
            printf("%c. ", name[i + 1]);
        }
    }

    // Print the surname in full
    for(i = len - 1; i >= 0; i--) {
        if(name[i] == ' ') {
            printf("%s\n", &name[i + 1]);
            break;
        }
    }

    return 0;
}