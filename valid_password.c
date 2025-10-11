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
    if (s == NULL){
        return false;
    }

    bool lowerCase2 = false;
    bool upperCase2 = false;
    int upper = 0;
    int lower = 0;
    int x = 0;
    while (s[x] != '\0'){
        x++;
    }

    if (x<6 || x > 10) return false;

    for ( int i=0;i<x;i++){
        if (islower(s[i])){
            lower++;
        }
        if (isupper(s[i])){
            upper++;
        }
    }
    if (lower<2 || upper<2){
        return false;
    }
    //Special Chars not allowed
    for (int i=0;i<x;i++){
        if (!isalnum(s[i])){
            return false;
        }
    }
    return true;
}
/*
if (isupper(s)){
            upper++;
        }
        if (islower(s)){
            lower++;
        }
        if (upper == 2 && lower == 1 && (6<=length && length<=10)){
            return true;
        }
*/