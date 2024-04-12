#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j, len;
    int isPalindrome = 1;

    printf("Enter a word or phrase: ");
    fgets(str, sizeof(str), stdin);

    // Removing newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    len = strlen(str);

    // Convert input to lowercase for case-insensitive comparison
    for (i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }

    // Check if the word or phrase is a palindrome
    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}