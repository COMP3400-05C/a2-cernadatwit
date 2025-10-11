#include <stddef.h> // For NULL
#include <ctype.h>

/**
 * TODO: Describe what the function does
 * Given a char array that contains a string w/ empty space. Dest = src1, Total Capacity
 * is src1 cap. src1 is PARTIALLY FILLED. 
 * Basically src1 + src2. 
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    int len = 0;
    int len2 = 0;

    if (src2==NULL) return;

    while (src1[len] != '\0'){
        len++;
    }
    while (src2[len2] != '\0'&&(len+1)<src1_cap){
        src1[len] = src2[len2];
        len2++;
        len++;
        
    }
    if (len<src1_cap){
        src1[len]='\0';
    } else {
        src1[src1_cap-1]='\0';
    }
}

