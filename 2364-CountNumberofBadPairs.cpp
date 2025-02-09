/*
 * Author: Gulam Jakaria
 * Date: 09/02/2025
 */

class Solution{
public:
    long long countBadPairs(vector<int> &nums){
        long long len = nums.size();
        map<long long, long long> mp;

        for (long long i = 0; i < len; i++){
            mp[i - nums[i]]++;
        }

        long long sum = 0;
        for (auto it : mp){
            sum += it.second * (it.second - 1) / 2;
        }

        long long ans = (len * (len - 1) / 2) - sum;

        return ans;
    }
};