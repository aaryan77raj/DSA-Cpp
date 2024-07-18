class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int ret = 0, n = nums.size();
            for (int i = 0; i < n; ++i) {
                if (i <= ret) {
                    ret = max(i + nums[i], ret);
                } else {
                break;
            }
        }
        return ret >= n - 1;
    }
};