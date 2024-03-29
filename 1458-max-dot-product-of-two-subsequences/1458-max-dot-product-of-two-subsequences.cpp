class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<int> memo(nums1.size());
        int prev,temp;
        memo[0]=nums1.front()*nums2.front();
        for(int i=1;i<nums1.size();i++)
            memo[i]=max(nums1[i]*nums2.front(),memo[i-1]);
        for(int j=1;j<nums2.size();j++)
        {
            prev=memo[0];
            memo[0]=max(nums1.front()*nums2[j],memo[0]);
            for(int i=1;i<nums1.size();i++)
            {
                temp=memo[i];
                memo[i]=max({nums1[i]*nums2[j]+max(prev,0),memo[i],memo[i-1]});
                prev=temp;
            }
        }
        return memo[nums1.size()-1];
    }
};