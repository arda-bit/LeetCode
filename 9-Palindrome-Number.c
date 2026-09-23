bool isPalindrome(int x) {
    if (x < 0) return false;   // negatives can't be palindromes

    char numer[15];
    int idx = 0;
    int n;

    if (x == 0) numer[idx++] = '0';   // handle x == 0 explicitly

    while (x != 0) {
        n = x % 10;
        numer[idx] = '0' + n;   // <-- store as character
        idx++;
        x /= 10;
    }
    numer[idx] = '\0';

    int len = strlen(numer);
    char bnumer[len];

    for (int i = 0; i < len; i++) {
        bnumer[len - i - 1] = numer[i];
    }

    for (int i = 0; i < len; i++) {
        if (bnumer[i] != numer[i]) {
            return false;
        }
    }

    return true;
}