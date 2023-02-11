class Solution {
public:
    int longestPalindrome(string s) {
        const int nax = 256;
        vector<int> charMap(nax, 0);
        for (const auto &x: s) {
            ++charMap[x];
        }
        int result = 0;
        bool middleElementPicked = false;
        for (auto entry: charMap) {
            if (entry % 2 == 1 && !middleElementPicked) {
                ++result;
                --entry;
                middleElementPicked = true;
            }
            result += entry - (entry % 2 == 1);
        }
        return result;
    }
};