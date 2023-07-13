class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max, temp_max, check;
        max = temp_max = check = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                check = 1;
                temp_max++;
            } else { 
                check = 0;
                temp_max = 0;
            }
            if (temp_max > max) max = temp_max;
        }
        return max;
    }
};