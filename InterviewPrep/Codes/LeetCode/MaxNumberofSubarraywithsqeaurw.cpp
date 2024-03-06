class Solution {
public:
    int maximumLength(vector<int>& nums) {
       long long ans = 0;
       map<int, int> fre;
       for(auto a : nums)
       {
           fre[a]++;
       }
       for(auto [k,f]:fre)
       {
           long long t = k, count=0;
           if(t==1)
           {
               count+=fre[t];
               fre[t] = 0;
           }
           while(t<INT_MAX && fre[t]>0)
           {
               count+=2;
               if(fre[t]==1)break;
               fre[t] = 0;
               t= t*t;
           }
           if(count % 2 ==0) count--;
           ans = max(count,ans);
       } 
       return ans;
    }
};