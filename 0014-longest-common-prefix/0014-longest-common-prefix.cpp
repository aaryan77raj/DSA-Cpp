class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty() || strs[0].empty()) return "";
        sort(strs.begin(), strs.end(), [](const string& s1, const string& s2) {
            if (s1.size() == s2.size()) return s1 < s2;
            return s1.size() < s2.size();
        });
        string ret;
        for (int k = (int)strs[0].size(); k >= 0; --k) {
            bool isCommonPrefix = true;
            string prefix = strs[0].substr(0, k);
            for (int i = 1; i < (int)strs.size(); ++i) {
                if (prefix != strs[i].substr(0, k)) {
                    isCommonPrefix = false;
                    break;
                }
            }
            if (isCommonPrefix) {
                ret = prefix;
                break;
            }
        }
        return ret;
    }
};