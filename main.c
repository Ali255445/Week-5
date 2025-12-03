#include <stdio.h>
#include <string.h>
#include "cipher.h"

int main(int argc, char* argv[]) {
    // Check if we have correct number of arguments
    if (argc != 3) {
        printf("Usage: %s e|d c|v\n", argv[0]);
        printf("  e = encrypt, d = decrypt\n");
        printf("  c = caesar, v = vigenere\n");
        return 1;
    }
    
    char mode = argv[1][0];  // First character of first argument
    char style = argv[2][0]; // First character of second argument
    char text[100];
    char key[100];

    // Validate mode and style
    if ((mode != 'e' && mode != 'd') || (style != 'c' && style != 'v')) {
        printf("Forkert input: e|d c|v\n");
        return 1;
    }

    printf("Skriv din tekst med kun store bogstaver og ingen mellemrum: \n");
    scanf_s("%s", text, 100);
    
    if (style == 'v') {
        printf("Skriv din key med kun store bogstaver: \n");
        scanf_s("%s", key, 100);
    }

    // Process the text
    for (size_t i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            if (style == 'c' && mode == 'e') { // caesar encrypt
                text[i] = ((text[i] - 'A' + 3) % 26) + 'A';
            }
            if (style == 'c' && mode == 'd') { // caesar decrypt
                text[i] = ((text[i] - 'A' - 3 + 26) % 26) + 'A';
            }
            if (style == 'v' && mode == 'e') { // vigenere encrypt
                strcpy(text, vigenere_encrypt(text, key));
                break;
            }
            if (style == 'v' && mode == 'd') { // vigenere decrypt
                strcpy(text, vigenere_decrypt(text, key));
                break;
            }
        }
    }

    printf("%s\n", text);
    return 0;
}

