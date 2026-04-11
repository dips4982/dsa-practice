class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        int dp[1001][1001];
        for(int i=0;i<1001;i++) {
            for(int j=0;j<1001;j++){
                dp[i][j] = -1;
            }
        }
        return lcs(text1,text2,0,0,dp);
    }

    

    int lcs(string s1, string s2, int i, int j, int dp[1001][1001]) {
        if(i>=s1.length() || j>=s2.length()) {
            return dp[i][j] = 0;
        }

        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }

        int ans = 0;

        // both matching
        if(s1[i]==s2[j]) {
            ans = 1+lcs(s1,s2,i+1,j+1,dp);
        }

        else
        {
            ans = max(lcs(s1,s2,i+1,j,dp), lcs(s1,s2,i,j+1,dp));
        }

        return dp[i][j] = ans;
    }
};
