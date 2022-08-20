class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        if(startFuel>=target){ // if target is less than startfuel so no need to stop in stations.
            return 0;
        }
        priority_queue<int>pq; // create priority queue  add all station comes before max distance that you have cover till.
		
        int i=0, n=stations.size(),maxDist=startFuel,cnt=0;
		
        while(target>maxDist){      // if target<maxDist to break;
            while(i<n && stations[i][0]<=maxDist){  // push all station that appears between the maxDist that you will cover;
                pq.push(stations[i][1]);
                i++;
            }
            if(pq.empty()){    // if no fuel station in Queue so return -1.
                return -1;
            }
            maxDist+=pq.top();    // take higest fuel in which you have appears till so, use priority queue.
            cnt++;   // make count of stops 
            pq.pop();
        }
        return cnt; // return count.
    }
};