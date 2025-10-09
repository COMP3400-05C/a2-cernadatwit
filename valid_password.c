#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h>

/**
 * TODO: Describe what the function does
 * Password must be a string 6<= s <= 10,
 * must inlude 1 lowercase, 1 uppercase XOR 1 digit.
 * Minimum of 2 Lowercase Letters + 2 Uppercase Letters
 */
bool valid_password(const char* s) {
    bool lowerCase2 = false;
    bool upperCase2 = false;
    size_t length = 0;
    int upper = 0;
    int lower = 0;
    while (*s != '\0'){
        length++;
        if (isupper(s)){
            upper++;
        }
        if (islower(s)){
            lower++;
        }
        if (upper == 2 && lower == 1 && (6<=length && length<=10)){
            return true;
        }
    }

    return false;
}
