#include "cipher.h"
#include <string.h>

char *vigenere_encrypt(char *plaintext, char *key) {
    static char result[100];
    strcpy(result, plaintext);
    
    for (size_t i = 0; result[i] != '\0'; i++) {
        if (result[i] >= 'A' && result[i] <= 'Z') {
            size_t keyIndex = i % strlen(key);
            size_t shift = key[keyIndex] - 'A';
            result[i] = ((result[i] - 'A' + shift) % 26) + 'A';
        }
    }
    return result;
}

char *vigenere_decrypt(char *ciphertext, char *key) {
    static char result[100];
    strcpy(result, ciphertext);
    
    for (size_t i = 0; result[i] != '\0'; i++) {
        if (result[i] >= 'A' && result[i] <= 'Z') {
            size_t keyIndex = i % strlen(key);
            size_t shift = key[keyIndex] - 'A';
            result[i] = ((result[i] - 'A' - shift + 26) % 26) + 'A';
        }
    }
    return result;
}