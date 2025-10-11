#include <stddef.h> // For NULL
#include <stdlib.h>
// TODO: Include any necessary header files here

/**
 * TODO: Describe what the function does
 * For this part, you will implement a function that creates an array with even numbers, 
 * 
 * from begin to end, in increasing order. 
 * The function definition looks like the following:
To create an array, you need to call malloc to allocate a dynamic array, then call array_fill on that. Lastly, return this pointer (the testing fraweork is responsible for freeing this array, so no worries).

If the range is impossible (for example, 3 and 3), then return NULL.
 */
int* array_create_evens(int begin, int end) {
    // int* temp = malloc(sizeof(int));
    if (begin>= end) return NULL;
    if (begin % 2 !=0) begin++;
    if (end %2!=0) end--;
    if (begin>end) return NULL;
    int size = ((end-begin)/2)+1;
    int* temp = malloc(size*sizeof(int));
    if (temp==NULL) return NULL;
    for (int i=0;i<size; i++){
        temp[i]=begin+(i*2);
    }
    return temp;
}
