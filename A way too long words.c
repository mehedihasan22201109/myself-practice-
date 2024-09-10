#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of words

    // Loop through each word
    for (int i = 0; i < n; i++) {
        char word[101]; // Buffer to store the word (up to 100 characters)
        scanf("%s", word); // Read the word

        int length = strlen(word); // Calculate the length of the word

        // Check if the word is too long
        if (length > 10) {
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]); // Print abbreviation
        } else {
            printf("%s\n", word); // Print the word as is
        }
    }

    return 0;
}

