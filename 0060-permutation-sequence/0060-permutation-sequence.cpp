class Solution {
    public:
        string getPermutation(int n, int k) {
            string s;
            for (int i = 0; i < n; ++i) s += to_string(i + 1);
            while (--k > 0 && next_permutation(s.begin(), s.end()));
            return s;
        }
};