class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        // store the frequency of element into freq array
        
        vector<int> freq;
        
        int i = 0;
        
        while(i < n)
        {
            // count the frequncy of each element
            
            int count = 1;
            
            while(i < n - 1 && arr[i] == arr[i + 1])
            {
                count++;
                
                i++;
            }
            
            freq.push_back(count);
            
            i++;
        }
        
        // the freq array
        
        sort(freq.begin(), freq.end());
        
        // curr_sum will store the no. of deleted elements
        
        int curr_sum = 0;
        
        i = freq.size() - 1;
        
        // count will store the no. of distinct element deleted
        
        int count = 0;
        
        while(i >= 0)
        {
            // update curr_sum
            
            curr_sum += freq[i];
            
            // increment count
            
            count++;
            
            // if target is acheived
            
            if(curr_sum >= n / 2)
                break;
            
            i--;
        }
        
        return count;
    }
};