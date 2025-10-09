#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 * Test Cases
 * Array Len | Begin | End | Result | Return Value
 *      2       11      12   {11,12}        2
 *      6       11      14   {11,12,13,14}  4
 *      2       11      14   {11,12}        2
 *      0       11      14      N/A         0
 */
#include <stdlib.h>  // for malloc and free

int array_fill(int* array, int array_len, int begin, int end) {
    if (array_len < 1) return 0;

    if (begin>end) return 0;

    int *temp = malloc(array_len * sizeof(int));
    if (temp == NULL) return 0; // memory allocation failed

    int diff = end - begin + 1;
    int count = 0;
    

    if (diff <= array_len) {
        for (int i = 0; i < diff; i++) {
            temp[i] = begin++;
            array[i] = temp[i]; // optionally copy to output array
            count++;
        }
    }

    free(temp);
    return count;
}
