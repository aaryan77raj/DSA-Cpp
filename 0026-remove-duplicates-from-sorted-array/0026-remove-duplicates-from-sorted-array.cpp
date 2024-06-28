class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        int slow = 0, fast = 1, n = nums.size();
        for (; fast < n; ++fast) {
            while (nums[fast] == nums[fast - 1]) if (++fast >= n) break;
            if (fast < n) nums[++slow] = nums[fast];
        }
        return slow + 1;
    }
};