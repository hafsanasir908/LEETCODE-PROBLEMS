/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex + 1;
    int* row = (int*)malloc(sizeof(int) * (*returnSize));
    
    row[0] = 1;  // first element
    for(int i = 1; i <= rowIndex; i++) {
        row[i] = 1;  // last element
        // update middle elements from right to left
        for(int j = i - 1; j > 0; j--) {
            row[j] = row[j] + row[j-1];
        }
    }
    
    return row;
}

