class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>tar;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;
        
        for(int i=0;i<nums.size();i++)
        {
            int k = target - nums[i];
            if(mp.find(k)!=mp.end() && mp[k]!=i)
            {
                tar.push_back(i);
                tar.push_back(mp[k]);
                break;
            }
        }
        return tar;
    }
};
