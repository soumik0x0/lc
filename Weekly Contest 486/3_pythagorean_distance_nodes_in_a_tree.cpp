class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> temp;

        for (int num : nums) {
            if (num >= 0) {
                temp.push_back(num);
            }
        }

        if (temp.empty()) {
            return nums;
        }

        int n = temp.size();
        k = k % n;

        int nonNegIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                nums[i] = temp[(nonNegIndex + k) % n];
                nonNegIndex++;
            }
        }

        return nums;
    }
};