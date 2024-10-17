#include <stdio.h>

int main() {
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (c >= 'a' && c <= 'z') {
        printf("The character is a lowercase letter.\n");
    } else if (c >= 'A' && c <= 'Z') {
        printf("The character is an uppercase letter.\n");
    } else if (c >= '0' && c <= '9') {
        printf("The character is a digit.\n");
    } else if (c == ' ') {
        printf("The character is a whitespace.\n");
    } else {
        printf("The character is neither a letter nor a digit nor whitespace.\n");
    }
    
    return 0;
}
