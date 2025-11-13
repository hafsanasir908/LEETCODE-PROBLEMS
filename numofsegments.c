int countSegments(char* s) {
    int count = 0;
    int i = 0;

    while (s[i] != '\0') {
        // If current char is not space and either it's the first char
        // or previous char is space, we found a new segment
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            count++;
        }
        i++;
    }
    return count;
}

