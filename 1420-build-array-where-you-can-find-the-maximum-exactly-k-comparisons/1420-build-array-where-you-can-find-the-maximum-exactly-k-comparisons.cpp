class Solution {
public:
    int m;
    int md=1000000007;
    int dp[51][101][51];
    
    int rec(int n, int p, int k){
        if(n==0){
            return k==0?1:0;
        }
        if(k<0) return 0;
        
        int &ret = dp[n][p][k];
        if(ret!=-1) return ret;
        
        ret=0;
        for(int i=1; i<=m; i++){
            if(p<i){
                ret = (ret+rec(n-1, i, k-1))%md;
            }
            else ret = (ret+rec(n-1, p, k))%md;
        }
        return ret;
    }
    
    int numOfArrays(int n, int _m, int k) {
        m=_m;
        memset(dp, -1, sizeof(dp));
        return rec(n,0,k);
    }
};