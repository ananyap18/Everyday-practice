class Solution {
public:
        string longestCommonPrefix(vector<string>& A) {
        int n = A.size();
        string f = A[0]; int fl = f.length();
        string ans="";
        for(int i=0; i<fl; ++i){
            for(int j=1; j<n; ++j){
                if(i>=A[j].length() || f[i] != A[j][i]){
                    return ans;
                }
            }
            ans += f[i];
        }
        return ans;
    }
};

