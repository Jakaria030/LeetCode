/*
 * Author: Gulam Jakaria
 * Date: 07/02/2025
 */

 class Solution {
    public:
        vector<int> queryResults(int limit, vector<vector<int>>& q) {
            unordered_map<int, int> cMap, bMap;
            int n = q.size();
            vector<int> colors(n);
    
            for(int i = 0; i < n; i++){
                int b = q[i][0], c = q[i][1];
    
                if(bMap.find(b) != bMap.end()){
                    int prevC = bMap[b];
                    cMap[prevC]--;
    
                    if(cMap[prevC] == 0){
                        cMap.erase(prevC);
                    }
                }
                bMap[b] = c;
                cMap[c]++;
                colors[i] = cMap.size();
            }
    
            return colors;
        }
    };