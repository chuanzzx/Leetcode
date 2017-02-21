bool detectCapitalUse(char* word) {
    int n = strlen (word);
    if (n > 1 && islower(word[0]) && isupper(word[1]))
        return false;
    for (int i = 1; i < n - 1; i++) {
        if (islower(word[i]) ^ islower(word[i + 1]))
            return false;
    }
    return true;
}