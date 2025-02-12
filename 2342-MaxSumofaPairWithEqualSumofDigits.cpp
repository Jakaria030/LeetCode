/*
 * Author: Gulam Jakaria
 * Date: 12/02/2025
 */

class Solution{
public:
    int digitSum(int n){
        int sum = 0;
        while(n != 0){
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int maximumSum(vector<int> &nums){
        int len = nums.size();
        vector<vector<int>> v(100);

        for(int i = 0; i < len; i++){
            int sum = digitSum(nums[i]);
            v[sum].push_back(nums[i]);
        }

        int mx = -1;
        for(int i = 0; i < 100; i++){
            sort(v[i].begin(), v[i].end());
            int vLen = v[i].size();

            if(vLen >= 2){
                mx = max(mx, v[i][vLen - 1] + v[i][vLen - 2]);
            }
        }

        return mx;
    }
};