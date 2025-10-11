#include <stddef.h> // For NULL
#include <ctype.h>

/**
 * TODO: Describe what the function does
 * Fills a String with Content. Given a char array that you are to fill in (this is called a
 * DESTINATION BUFFER). You are also given the capacity of the destination buffer aka the size
 * 
 *  E.g.) array[9] and 'R', -> 'RRRRRR..' Can only do 8 (n-1) because of '\0' 
 */
void string_fill(char dest[], int dest_cap, char c) {
    while (dest!=NULL){
        for (int i=0;i<dest_cap;i++){
            if (i==dest_cap-1){
                dest[i]='\0';
            } else {
                dest[i] = c;
            }
        }
        break;
    }

}
