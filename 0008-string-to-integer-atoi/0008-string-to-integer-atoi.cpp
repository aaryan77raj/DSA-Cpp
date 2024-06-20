class Solution {
public:
    int myAtoi(string s) {
        long long ret = 0;
        int sign = 1;
        int i = 0;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i++] == '-') ? -1 : 1;
        }
        while (i < s.length() && isdigit(s[i])) {
            ret = ret * 10 + (s[i++] - '0');
            if (ret * sign > INT_MAX) return INT_MAX;
            if (ret * sign < INT_MIN) return INT_MIN;
        }
        return (int)(ret * sign);
    }
};
