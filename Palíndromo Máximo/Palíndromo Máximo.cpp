#include <bits/stdc++.h>
#define Hd main()
using namespace std;

string findLongestPalindrome(const string& s) {
    int start = 0, maxLen = 1;
    int len = s.length();
    bool table[len][len] = {false};

    for (int i = 0; i < len; ++i) {
        table[i][i] = true;
    }

    for (int i = 0; i < len - 1; ++i) {
        if (s[i] == s[i + 1]) {
            table[i][i + 1] = true;
            start = i;
            maxLen = 2;
        }
    }

    for (int k = 3; k <= len; ++k) {
        for (int i = 0; i < len - k + 1; ++i) {
            int j = i + k - 1;
            if (table[i + 1][j - 1] && s[i] == s[j]) {
                table[i][j] = true;
                if (k > maxLen) {
                    start = i;
                    maxLen = k;
                }
            }
        }
    }

    return s.substr(start, maxLen);
}

Hd{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string inputString;
    cin>>inputString;
    string longestPalindrome = findLongestPalindrome(inputString);
    cout << longestPalindrome << "\n";
}