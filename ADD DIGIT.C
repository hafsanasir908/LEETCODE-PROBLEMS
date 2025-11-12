/**
 * Note: The returned integer is the final single-digit result.
 */
int addDigits(int num){
    if(num == 0) return 0;
    return 1 + (num - 1) % 9;
}

