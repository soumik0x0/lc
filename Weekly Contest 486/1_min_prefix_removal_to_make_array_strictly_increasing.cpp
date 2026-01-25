class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n = nums.size();

        if (n <= 1) return 0;

        int suffixStart = n - 1;

        while (suffixStart > 0) {
            if (nums[suffixStart] > nums[suffixStart - 1]) {
                suffixStart--;
            } else {
                break;
            }
        }

        return suffixStart;
    }
};