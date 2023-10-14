class Solution {
public:
    int solve(vector<int>& cost, vector<int>& time, int i, int wallsrem, vector<vector<int>>& dp) {
        if (wallsrem <= 0) return 0;
        if (i >= cost.size()) return 500000000; 
        if (dp[i][wallsrem] != -1) return dp[i][wallsrem];
        int nottake = solve(cost, time, i + 1, wallsrem, dp);
        int take = cost[i] + solve(cost, time, i + 1, wallsrem - time[i] - 1, dp);
        return dp[i][wallsrem] = min(take, nottake);
    }

    int paintWalls(vector<int>& cost, vector<int>& time) {
        vector<vector<int>> dp(cost.size() + 1, vector<int>(cost.size() + 1, -1));
        return solve(cost, time, 0, time.size(), dp);
    }
};