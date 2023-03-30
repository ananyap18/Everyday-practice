class Solution {
public:
    int MOD=1e9+7;
    long long pow(long long a,long long b){
        if(b==0)
            return 1;
        long long res=pow(a,b/2);
        res*=res;
        res%=MOD;
        if(b%2)
        res*=a;
        res%=MOD;
        return res;
    }
    int countGoodNumbers(long long n) {
        long long odd=n/2;
        long long even=n/2 + n%2;
        return (pow(5,even)*pow(4,odd))%MOD;
    }
};