class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set <int> s;
        for(int i:nums) s.insert(i);
        int mini=INT_MIN;
        for(auto it:s){
            if(it<0){
                if(s.find(abs(it))!=s.end()){
                    mini=max(abs(it),mini);
                }
            }
        }
        if(mini!=INT_MIN)
            return mini;
            else return -1;
    }
};