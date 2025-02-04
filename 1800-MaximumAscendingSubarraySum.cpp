/*
 * Author: Gulam Jakaria
 * Date: 04/02/2025
 */

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int len = nums.size();
        int mx = 0, sum = nums[0];

        for(int i = 1; i < len; i++){
            if(nums[i-1] < nums[i]){
                sum += nums[i];
            }else{
                mx = max(mx, sum);
                sum = nums[i];
            }
        }

        mx = max(mx, sum);

        return mx;
    }
};