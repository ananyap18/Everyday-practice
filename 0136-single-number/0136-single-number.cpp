class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size(); // extracting the size of the array
        
        // traverse from the array
        for(int i = 0; i < n - 1; i++)
        {
            nums[i + 1] = nums[i] ^ nums[i + 1]; // (prev answer xor current index)
        }
        
        return nums[n- 1]; // return left over element

    }
};