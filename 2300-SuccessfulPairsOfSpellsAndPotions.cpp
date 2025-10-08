/**
 * Author: Gulam Jakaria
 * Date: 08/10/2025
 */


class Solution {
public:
    int binarySearch(vector<int>& potions, long long sStrength, long long success){
        int m = potions.size();
        int left = 0;
        int right = m-1;
        int mid;

        while(left <= right){
            mid = left + (right-left) / 2;
            long long pStrength = potions[mid];

            if(sStrength*pStrength >= success){
                right = mid - 1;
                if(left > right){
                    return m-mid;
                }
            }else{
                left = mid + 1;
            }
        }

        return m-mid-1;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        
        sort(potions.begin(), potions.end());

        vector<int> pairs;
        for(int i = 0; i < n; i++){
            pairs.push_back(binarySearch(potions, spells[i], success));
        }

        return pairs;
    }
};