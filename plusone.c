#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1; // start with adding one

    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }

    if (carry == 0) {
        *returnSize = digitsSize;
        return digits; // no extra digit needed
    } else {
        // Need an extra digit at the front
        int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
        result[0] = carry;
        for (int i = 0; i < digitsSize; i++) {
            result[i + 1] = digits[i];
        }
        *returnSize = digitsSize + 1;
        return result;
    }
}

