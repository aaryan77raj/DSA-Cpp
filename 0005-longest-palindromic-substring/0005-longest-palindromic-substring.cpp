class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int n = s.size(), start = 0, maxLength = 1;

        auto expandAroundCenter = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLength) {
                    start = left;
                    maxLength = right - left + 1;
                }
                --left;
                ++right;
        }
    };

    for (int i = 0; i < n; ++i) {
        expandAroundCenter(i, i); 
        expandAroundCenter(i, i + 1); 
    }

    return s.substr(start, maxLength);
}

int main() {
    string s1 = "babad";
    cout << "Longest palindromic substring of " << s1 << " is " << longestPalindrome(s1) << endl;

    string s2 = "cbbd";
    cout << "Longest palindromic substring of " << s2 << " is " << longestPalindrome(s2) << endl;

    return 0;
}
};