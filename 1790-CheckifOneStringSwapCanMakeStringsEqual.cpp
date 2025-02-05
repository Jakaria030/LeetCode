/*
 * Author: Gulam Jakaria
 * Date: 05/02/2025
 */

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int len = s1.size();
        int cnt = 0, indx1 = -1, indx2 = -1;

        for(int i = 0; i < len; i++){
            if(s1[i] == s2[i]){
                continue;
            }else if(indx1 == -1){
                indx1 = i;
                cnt++;
            }else if(indx2 == -1){
                indx2 = i;
                cnt++;
            }else{
                cnt++;
            }
        }

        if(cnt == 0 || cnt == 2){
            if(cnt == 2){
                if(s1[indx1] == s2[indx2] && s1[indx2] == s2[indx1]){
                    return true;
                }else{
                    return false;
                }
            }else{
                return true;
            }
        }else{
            return false;
        }
    }
};