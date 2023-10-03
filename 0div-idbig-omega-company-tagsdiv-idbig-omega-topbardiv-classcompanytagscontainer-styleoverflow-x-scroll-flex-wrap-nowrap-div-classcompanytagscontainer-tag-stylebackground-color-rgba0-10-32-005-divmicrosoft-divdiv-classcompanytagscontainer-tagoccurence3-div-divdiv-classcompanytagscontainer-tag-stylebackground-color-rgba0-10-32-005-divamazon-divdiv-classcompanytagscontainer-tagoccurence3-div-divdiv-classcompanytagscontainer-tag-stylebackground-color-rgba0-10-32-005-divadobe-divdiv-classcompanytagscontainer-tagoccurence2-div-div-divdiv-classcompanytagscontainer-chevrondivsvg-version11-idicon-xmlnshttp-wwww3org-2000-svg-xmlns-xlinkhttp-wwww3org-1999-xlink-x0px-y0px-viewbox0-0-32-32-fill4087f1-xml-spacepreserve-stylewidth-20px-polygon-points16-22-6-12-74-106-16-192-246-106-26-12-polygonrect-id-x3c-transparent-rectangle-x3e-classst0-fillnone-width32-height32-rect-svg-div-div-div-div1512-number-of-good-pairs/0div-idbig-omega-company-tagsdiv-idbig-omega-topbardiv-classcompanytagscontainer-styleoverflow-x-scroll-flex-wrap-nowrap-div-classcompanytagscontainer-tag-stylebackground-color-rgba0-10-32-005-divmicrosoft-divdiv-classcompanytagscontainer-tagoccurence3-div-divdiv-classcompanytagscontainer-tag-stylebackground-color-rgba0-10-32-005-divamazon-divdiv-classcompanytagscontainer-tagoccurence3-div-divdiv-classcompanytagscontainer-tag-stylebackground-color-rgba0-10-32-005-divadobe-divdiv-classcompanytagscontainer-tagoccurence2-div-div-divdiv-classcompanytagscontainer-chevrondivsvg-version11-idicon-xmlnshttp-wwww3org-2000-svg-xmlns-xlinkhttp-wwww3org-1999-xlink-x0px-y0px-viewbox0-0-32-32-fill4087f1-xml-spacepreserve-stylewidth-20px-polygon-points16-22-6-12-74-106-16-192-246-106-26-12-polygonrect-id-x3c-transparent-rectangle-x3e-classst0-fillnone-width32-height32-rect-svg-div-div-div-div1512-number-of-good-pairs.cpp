class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
         int sum = 0;
        map<int,int>mp;//To keep track of how many times elements of nums occur
        for(int i = 0;i < nums.size();i++)
        {
            sum += mp[nums[i]]++;//if we get an element, check in map how many times it has occured before and add in sum
        }
        return sum;
    }
};