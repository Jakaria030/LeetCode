/*
 * Author: Gulam Jakaria
 * Date: 10/02/2025
 */

class Solution{
public:
    string clearDigits(string s){
        string res = "";
        int len = s.size();

        for (int i = 0; i < len; i++){
            if ((s[i] >= '0' && s[i] <= '9') && (res.size() > 0)){
                res.pop_back();
            }else{
                res.push_back(s[i]);
            }
        }

        return res;
    }
};