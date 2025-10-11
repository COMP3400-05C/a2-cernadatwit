#include <stddef.h> // For NULL
// TODO: Include any necessary header files here
#include <stdlib.h>
#include <ctype.h>

/**
 * TODO: Describe what the function does
 * For this part, you will implement a function that takes a string s 
 * and returns a new string that has all of its lower-case alphabet letters into uppercase, 
 * using the toupper function. All other letters should be left alone.
 */
char* capitalize(const char* s) {
    while (s!=NULL){
        int len = 0;
        // if (isalnum(s))

        while (s[len]!='\0'){
            len++;
        }
        int size = len+1;
        char* temp = malloc(size*sizeof(char));
        // for (int i = 0; s[i] != '\0'; i++) {
        //     temp[i] = toupper((unsigned char)s[i]);
        // }
        for (int i=0;i<len;i++){
            // if (!(isalpha(s[i]))) continue;
            if (islower(s[i])){
                temp[i] = toupper((unsigned char) s[i]);
            } else {
                temp[i] = s[i];
            }
        }
        temp[len]='\0';
        return temp;
        
    }
    return NULL;
}

