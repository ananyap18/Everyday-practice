class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        if (x < 0) {
            sign = -1;
            x = -1ll * x;
        }
        long long reverse = 0;
        while (x > 0) {
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }
        reverse *= sign;
        if (reverse < INT_MIN || reverse > INT_MAX) {
            return 0;
        }
        return (int)reverse;
    }
};