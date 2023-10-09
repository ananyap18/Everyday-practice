class Solution {
public:
    vector<int> searchRange(vector<int> &nums,int target){
        int n=nums.size();
        vector<int> res={-1,-1};
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                res[0]=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                res[1]=i;
                break;
            }
        }
        return res;
    }
};