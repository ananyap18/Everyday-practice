class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; // to store the indices of the two numbers
        for(int i=0;i<nums.size();i++){ // loop through each element in the array
            for(int j=i+1;j<nums.size();j++){ // loop through the rest of the array to find the other number
                int sum = nums[i]+nums[j]; // calculate the sum of the two numbers
                if(sum==target){ // check if the sum equals the target value
                    ans.push_back(i); // store the indices of the two numbers
                    ans.push_back(j);
                    return ans; // return the answer
                }
            }
        }
        return ans; // if no such numbers exist, return an empty vector
    }
};