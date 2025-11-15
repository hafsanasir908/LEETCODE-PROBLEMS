char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    int i = 0;

    while (strs[0][i] != '\0') {
        char c = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c) {
                char* ans = (char*)malloc(i + 1);
                strncpy(ans, strs[0], i);
                ans[i] = '\0';
                return ans;
            }
        }
        i++;
    }

    char* ans = (char*)malloc(i + 1);
    strncpy(ans, strs[0], i);
    ans[i] = '\0';
    return ans;
}

