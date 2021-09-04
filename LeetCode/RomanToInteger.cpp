class Solution {
public:
    int romanToInt(string s) {
        map<char, int> Rmap;
        
        Rmap.insert({'I', 1});
        Rmap.insert({'V', 5});
        Rmap.insert({'X', 10});
        Rmap.insert({'L', 50});
        Rmap.insert({'C', 100});
        Rmap.insert({'D', 500});
        Rmap.insert({'M', 1000});
        
        int ans = 0;
        
        for (int i=0; i<s.size(); i++)
        {
            auto it = Rmap.find(s[s.size()-i-1]);
            ans += (*it).second;
        }
        for (int i=0; i<s.size()-1; i++)
        {
            auto it = Rmap.find(s[i]);
            auto itNxt = Rmap.find(s[i+1]);
            if ((*it).second < (*itNxt).second) ans -= (*it).second *2;
        }
        
        return ans;
    }
};
