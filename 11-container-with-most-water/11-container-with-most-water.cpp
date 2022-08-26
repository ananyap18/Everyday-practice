class Solution {
public:
    int maxArea(vector<int>& height) {
         // Two pointers
        int left = 0;
        int right = height.size() - 1;
        
        int area = 0;
        while(left < right)
        {
            int temp;
            if(height[left] > height[right])
            {
                temp = height[right] * (right - left);
                // Decrement right pointer to find a larger height
                right -= 1;
            }
            else
            {
                temp = height[left] * (right - left);
                // Increment left pointer to find a larger height
                left += 1;
            }
            // Check to see if the computed area is bigger
            if(temp > area)
                area = temp;
        }
        
        return area;    
    }
};