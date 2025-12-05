// Print the initials of a name.
#include <stdio.h>
int main() {   
    char name[100];
    int i;

    printf("Enter a name: ");
    gets(name);   // for simplicity (unsafe but fine for small programs)

    // Print the first initial
    if(name[0] != '\0') {
        printf("%c. ", name[0]);
    }

    // Print initials after spaces
    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c. ", name[i + 1]);
        }
    }

    printf("\n");
    return 0;
}