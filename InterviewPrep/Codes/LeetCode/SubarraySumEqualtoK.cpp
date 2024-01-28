class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        mp[0] = 1;
        int pre = 0;
        int count  = 0;
        for(int i=0;i<nums.size();i++)
        {
            pre+=nums[i];
            int re = pre-k;
            count+=mp[re];
            mp[pre]+=1;
        }
        return count;
    }
};