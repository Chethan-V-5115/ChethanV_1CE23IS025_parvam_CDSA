#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}