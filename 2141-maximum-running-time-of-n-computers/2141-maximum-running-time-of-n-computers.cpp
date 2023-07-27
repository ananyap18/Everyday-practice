class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long total = 0; 
        for(auto x : batteries) 
            total += x;
        
        sort(batteries.rbegin(), batteries.rend()); 
        for(int i = 0; i < batteries.size(); i++, n--) {
           
            if(batteries[i] <= (total / n)) 
                break;
            
            total -= batteries[i];
        }
        
        return total / n; 
    }
};