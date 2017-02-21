bool canConstruct(char* ran, char* mag) {
    int a1[26] = {0}, a2[26] = {0}, n1 = strlen(ran), n2 = strlen(mag);
    for (int i = 0; i < n2; i++) {
        a2[mag[i] - 'a']++;
    }
    for (int i = 0; i < n1; i++) {
        int index = ran[i] - 'a';
        if (a2[index] < ++a1[index]) {
        	return false;
        }
    }
    return true;
}