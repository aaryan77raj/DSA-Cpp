class Solution {
    public:
        string addBinary(string a, string b) {
            int i = a.size() - 1, j = b.size() - 1;
            int carry = 0;
            string ret;
            for (; i >= 0 || j >= 0; --i, --j) {
                if (i >= 0) carry += a[i] - '0';
                if (j >= 0) carry += b[j] - '0';
                ret += (carry & 1) + '0';
                carry >>= 1;
            }
        if (carry > 0) ret += carry + '0';
        reverse(ret.begin(), ret.end());
        return ret;
    }
};