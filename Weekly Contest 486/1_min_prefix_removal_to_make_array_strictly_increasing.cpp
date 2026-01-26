#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n = nums.size();

        if (n <= 1) return 0;

        int suffixStart = n - 1;

        while (suffixStart > 0 && nums[suffixStart] > nums[suffixStart - 1]) {
            suffixStart--;
        }

        return suffixStart;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        cout << sol.minimumPrefixLength(nums) << "\n";
    }

    return 0;
}