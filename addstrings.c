#include <string.h>
#include <stdlib.h>

char* addStrings(char* num1, char* num2) {
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    int carry = 0;
    int k = (i > j ? i : j) + 2;  // +1 for carry, +1 for '\0'

    char* result = (char*)malloc(k * sizeof(char));
    result[k - 1] = '\0'; // null terminate

    int pos = k - 2;

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? num1[i--] - '0' : 0;
        int y = (j >= 0) ? num2[j--] - '0' : 0;

        int sum = x + y + carry;
        result[pos--] = (sum % 10) + '0';
        carry = sum / 10;
    }

    // If pos >= 0, move the string forward to remove leading empty space
    if (pos >= 0) {
        memmove(result, result + pos + 1, k - pos - 1);
    }

    return result;
}

