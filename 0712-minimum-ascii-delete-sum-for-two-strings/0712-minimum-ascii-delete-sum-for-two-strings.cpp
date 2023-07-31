class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int len1 = s1.length(), len2 = s2.length();
        vector<vector<int>>dp(len1+1, vector<int>(len2+1, 0));
        for(int i = 0; i < len1; i++)
            dp[i+1][0] = dp[i][0] + s1[i];
        for(int i = 0; i < len2; i++)
            dp[0][i+1] = dp[0][i] + s2[i];
        
        for(int i = 0; i < len1; i++)
        {
            for(int j = 0; j < len2; j++)
            {
                if(s1[i] == s2[j])
                {
                    dp[i+1][j+1] = dp[i][j];
                }
                else
                {
                    dp[i+1][j+1] = min(dp[i+1][j] + s2[j], dp[i][j+1] + s1[i]);
                }
            }
        }                
        return dp.back().back();
    }
};