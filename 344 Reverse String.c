char* reverseString(char* s) {
    int size = strlen(s);
    char t;
    for (int i = 0; i < size / 2; i++) {
        t = s[i];
        s[i] = s[size - i - 1];
        s[size - i - 1] = t;
    }
    return s;
}
