class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        vector<int> nums(n, 0);
        auto it1 = nums1.begin();
        auto it2 = nums2.begin();
        auto it = nums.begin();
        for (; it != nums.end(); ++it) {
            *it = it2 == nums2.end() || (it1 != nums1.end() && *it1 < *it2) ? *it1++ :
            *it2++;
        }
        if (n % 2 == 0) {
            return ((double) nums[n/2] + nums[n/2 - 1]) / 2;
        } else {
            return (double) nums[n/2];
        }
    }
};