class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int answer = nums[0]+nums[1]+nums[n-1];
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++){
            int lefty = i+1;
            int righty = n-1;
            while(lefty < righty){
                int currAnswer = nums[i]+nums[lefty]+nums[righty];
                if(currAnswer > target){
                    righty--;
                }
                else{
                    lefty++;
                }

                if(abs(currAnswer - target) < abs(answer - target)){
                    answer = currAnswer;
                }
            }
        }
        return answer;
    }
};