/*
 * Author: Gulam Jakaria
 * Date: 13/02/2025
 */

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(nums.begin(), nums.end());

        int op = 0;
        while(pq.top() < k){
            long long x = pq.top();
            pq.pop();

            long long y = pq.top();
            pq.pop();

            pq.push(2*min(x, y) + max(x, y));

            op++;
        }

        return op;
    }
};