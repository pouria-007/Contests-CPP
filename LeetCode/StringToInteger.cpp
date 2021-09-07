class Solution {
public:
    #include <string>
    int reverse(int x) {

        bool isNegative = false;
        if (x<0) {isNegative = true; x=abs(x);}
        
        long long int ans = 0;
        while (x != 0)
        {
            ans = ans*10 + x%10;
            x/=10;
        }
        
        if (ans > -2147483648 && ans < 2147483647)
        {
            if (isNegative) return -ans;
            else return ans;
        }
        else return 0;
    }
};
