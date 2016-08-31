char findTheDifference(char* s, char* t) {
    int tSize = strlen(t);
    char Sum = t[tSize - 1];
    for (int i = 0; i < tSize - 1; i++)
        Sum = Sum ^ s[i] ^ t[i];
    return Sum;
}