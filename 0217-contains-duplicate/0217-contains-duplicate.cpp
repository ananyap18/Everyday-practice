class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        while(!pq.empty())
        {
            int temp=pq.top();
            pq.pop();
            if(!pq.empty() && pq.top()==temp)
            return 1;
        }
        return 0;
    }
};
