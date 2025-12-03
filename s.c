#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Check if the first argument is "reverse" and there are additional arguments
    if (argc >= 3 && strcmp(argv[1], "reverse") == 0) {
        // Print arguments from last to first (skipping program name and "reverse")
        for (int i = argc - 1; i >= 2; i--) {
            printf("%s", argv[i]);
            if (i > 2) {
                printf(" ");
            }
        }
        printf("\n");
    } else {
        // Print usage message
        printf("Usage: ./main reverse STRING1 STRING2 ...\n");
    }
    
    return 0;
}