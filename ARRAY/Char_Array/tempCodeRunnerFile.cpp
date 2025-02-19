
string decrypt(string A) {
    string ans = "";
    int n = A.length();
    for (int i = 0; i < n; i++) {
        if (isalpha(A[i])) {
            char s = A[i];
            int j = i + 1;
            int repeat = 0;
            while (j < n && isdigit(A[j])) {
                repeat = repeat * 10 + (A[j] - '0');
                j++;
            }
            ans.append(repeat, s);
            i = j - 1;
        }
    }
    return ans;
}

char kThCharaterOfDecryptedString(string s, long long k) {
    string A = decrypt(s);
    return A[k - 1]; // 1-based index
}
