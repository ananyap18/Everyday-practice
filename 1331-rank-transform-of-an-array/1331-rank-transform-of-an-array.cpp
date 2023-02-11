class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        priority_queue<int,vector<int>,greater<int>> minheap;
        for(int i=0;i<arr.size();i++){
            minheap.push(arr[i]);
        }
        unordered_map<int,int> ourmap;
        int rank=1;
        while(minheap.size()!=0){
            
            int data=minheap.top();
            minheap.pop();
            if(ourmap.find(data)==ourmap.end()){
                ourmap[data]=rank;
                rank++;
            }
        }
        int n=arr.size();
        vector<int> ans(n);
        for(int i=0;i<arr.size();i++){
            ans[i]=ourmap[arr[i]];
        }
        return ans;
    }
};