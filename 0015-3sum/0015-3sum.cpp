class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>>ans;
        for(int i=0;i<n-1;i++){
            int j=i+1,k=n-1;
            // check duplicate 1 here
            if(i>0 and arr[i]==arr[i-1] )continue;
            while(j<k){ 
                if(arr[i]+arr[j]+arr[k]==0){
                    ans.push_back({arr[i],arr[j],arr[k]});
                    // check duplicate 2 here
                    while(j<k and arr[j]==arr[j+1])j++;
                    // check duplicate 3 here
                    while(j<k and arr[k]==arr[k-1])k--;
                    j++,k--;
                }
                else if((arr[i]+arr[j]+arr[k])<0)j++;
                else k--;
            }
          
        }
        return ans;
    }
};