#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toggle_case(char *str) {
    while (*str) {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}

int main() {
    char word[100];
    printf("Enter your word/sentence: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0; 

    toggle_case(word);

    printf("Word/sentence with toggled case: %s\n", word);

    return 0;
}
