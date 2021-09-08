class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        map<int, int> MP;
        for (int i=0; i<nums.size(); i++)
        {
            MP.insert({nums[i], 0});
        }
        nums.clear();
        for (auto it=MP.begin(); it != MP.end(); it++)
        {
            nums.push_back((*it).first);
        }
        
        return MP.size();
    }
};
