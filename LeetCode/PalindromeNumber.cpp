class Solution {
public:
    bool isPalindrome(int x) {
        int newx = 0;
        if (x < 0)
        {
            return false;
        }
        else {
            int count = 0, xc = x;
            while (xc > 0)
            {
                xc /= 10;
                count++;
            }

            xc = x;
            long long int Px = 0;
            for (int i = count; i>0; i--)
            {
                int temp = xc%10;
                xc /=10;
                Px += temp * pow(10, i-1);
            }
            cout << Px << "Px" << endl;
            if (Px == x) return true;
            else return false;
        }
    }
};
