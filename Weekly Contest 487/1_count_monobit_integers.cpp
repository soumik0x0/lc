class Solution {
public:
    bool isMonobit(int num) {
        if (num == 0) {
            return true;
        }

        while (num > 0) {
            if ((num & 1) == 0) {
                return false;
            }

            num = num >> 1;
        }

        return true;
    }
    
    int countMonobit(int n) {
        int count = 0;

        for (int i = 0; i <= n; i++) {
            if (isMonobit(i)) {
                count++;
            }
        }

        return count;
    }
};