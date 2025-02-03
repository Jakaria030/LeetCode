/*
 * Author: Gulam Jakaria
 * Date: 02/02/2025
 */

class Solution {
public:
    bool check(vector<int>& nums) {
        int brk = 0;
        int len = nums.size();

        for(int i = 0; i < len-1; i++){
            if(nums[i] <= nums[i+1]){
                continue;
            }else{
                brk++;
            }
        }

        if(brk == 0) return true;
        if(brk == 1 && nums[0] >= nums[len-1]) return true;
        
        return false;
    }
};