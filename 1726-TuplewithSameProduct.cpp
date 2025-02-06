/*
 * Author: Gulam Jakaria
 * Date: 06/02/2025
 */

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int totalTuples = 0;
        int len = nums.size();

        for(int a = 0; a < len; a++){
            for(int b = len-1; b >= a+1; b--){
                int p = nums[a] * nums[b];
                unordered_set<int> dTuples;

                for(int c = a+1; c < b; c++){
                    if(p % nums[c] == 0){
                        int d = p / nums[c];

                        if(dTuples.find(d) != dTuples.end()){
                            totalTuples += 8;
                        }

                        dTuples.insert(nums[c]);
                    }
                }
                
            }
        }

        return totalTuples;
    }
};