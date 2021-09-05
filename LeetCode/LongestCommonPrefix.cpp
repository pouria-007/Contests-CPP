class Solution {
public:
    
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        sort(strs.begin(), strs.end());  
        
        bool T = true;
        string test = strs[0];
        
        for (int j=0; j<test.size(); j++)
        {
            if (test == strs[strs.size()-1]) ans = test;
            else if (test[j] != strs[strs.size()-1][j] || test == strs[strs.size()-1]) {T = false; break;}
            else ans += test[j];
        }
        
        return ans;
    }
};
