class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
       int n=points.size();
        int ans=0;
        
        double d;
        for(int i=0;i<n;i++){
            unordered_map<double,int> mp;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(points[i][0]==points[j][0]){
                    d=INT_MAX;// here slope is infinite 
                }
                else{
                    d=(double)(points[i][1]-points[j][1])/(points[i][0]-points[j][0]);//slope of the line
                }
                mp[d]++;
                ans=max(ans,mp[d]);
            }
        }
        return ans+1;
 
    }
};