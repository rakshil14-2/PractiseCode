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

    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = 0;
        for(int i = 0;i<m;i++)
        {
            vector<int> Su(n,0);
            for(int j = i;j<m;j++)
            {
                for (int k = 0;k<n;k++)
                {
                    Su[k]+= matrix[j][k];
                }
                ans+=subarraySum(Su,target);
            }    
            
        }

        return ans;
    }
};