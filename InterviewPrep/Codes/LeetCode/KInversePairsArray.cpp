// K InversePairs



class Solution {
public:
// int dp[1001][1002] = {0};
 int mod =1000000007;
    int kInversePairs(int n, int k){
        int dp[1001][1002] = {0};

        dp[0][0] =1;

        for(int i=1;i<=n;i++)
        {
           long int val=0;
           
            for(int j=0;j<=k;j++)
            {
               val+=dp[i-1][j];
                if(j>=i)
                {
                    val-=dp[i-1][j-i];
                }
            dp[i][j]=val%mod;
            }
        }
        return dp[n][k];
    
    }

    // int kInversePairs(int n, int k) {
    //    if(k<=0)return k==0;
    //    if(dp[n][k]==0){
    //        dp[n][k] = 1;
    //        for(int i=0;i<n;i++){
    //            dp[n][k] = (dp[n][k]+kInversePairs(n-1,k-i))%1000000007;
    //        }
    //    }
    //    return dp[n][k]-1;
    // }
};
