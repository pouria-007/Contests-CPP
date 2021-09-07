class Solution {
public:
    
    bool isValid(string s) {
        
        int i=0;
        while (i < s.size())
        {
            if (s[i] == '{' && s[i+1] == '}')
            {
                s.erase(i, 2);
                if (i-2 >= 0) i -= 2;
                else i=0;
            }
            else if (s[i] == '(' && s[i+1] == ')')
            {
                s.erase(i, 2);
                if (i-2 >= 0) i -= 2;
                else i=0;
            }
            else if (s[i] == '[' && s[i+1] == ']')
            {
                s.erase(i, 2);
                if (i-2 >= 0) i -= 2;
                else i=0;
            }
            else i++;
        }
        
        if (s.size() == 0) return true;
        else return false;
    }
};
