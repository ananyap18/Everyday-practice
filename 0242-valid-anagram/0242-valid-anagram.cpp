class Solution {
public:
    bool allZeroes(vector<int>& count) {
        for (int i = 0; i < 26; i++) {
            if(count[i] != 0)
                return false;
        }
        return true;
    }
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n != m)
            return false;
        vector<int> count(26, 0);
        for (int i = 0; i < n; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        if(allZeroes(count) == false)
            return false;
        return true;
    }
};