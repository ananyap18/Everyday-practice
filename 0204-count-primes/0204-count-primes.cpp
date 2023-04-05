class Solution {
public:
    int countPrimes(int n) {
        
        int ans=0;

       if(n==0 || n==1) return 0;

        vector<bool>v(n,true);
       
        for( long long int i=2;i<n;i++){
            if(v[i]==true){
            for(long long int j=2*i;j<n;j+=i){ 
                v[j]=false;
               }
            }
        }

       for(long long int i=0;i<v.size();i++){
           if(v[i]==true){
               ans++;
           } 
       }
         return ans-2;
    }
};