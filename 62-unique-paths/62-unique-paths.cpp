class Solution {
public:
    int uniquePaths(int m, int n) {
        long int paths = 1;

        for(int i = n; i < m + n - 1; i++){
            paths *= i;
            paths /= (i - n + 1);
        }

        return int(paths);

    }
};