/*
 * Author: Gulam Jakaria
 * Date: 03/02/2025
 */

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int len = nums.size();
        int test = true;
        int mx = 0, cnt = 1;

        for (int i = 0; i < len - 1; i++) {
            if (test) {
                if (nums[i] < nums[i + 1]) {
                    cnt++;
                } else if (nums[i] > nums[i + 1]) {
                    mx = max(mx, cnt);
                    cnt = 2;
                    test = false;
                } else {
                    mx = max(mx, cnt);
                    cnt = 1;
                }
            } else {
                if (nums[i] > nums[i + 1]) {
                    cnt++;
                } else if (nums[i] < nums[i + 1]) {
                    mx = max(mx, cnt);
                    cnt = 2;
                    test = true;
                } else {
                    mx = max(mx, cnt);
                    cnt = 1;
                }
            }
        }

        mx = max(mx, cnt);

        return mx;
    }
};