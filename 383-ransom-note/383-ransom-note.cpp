class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> a(26,0),b(26,0);
        for(auto x:magazine)// freq of each char in magazine
            b[x-'a']++;
        for(auto x:ransomNote)// freq of each char in ransomNote
            a[x-'a']++;
        
        for(int i=0;i<26;i++)
        {
		// ransomNote has freq of character (i+'a') greater than in magazine soo we can't construct it. ( False )
            if(a[i]>b[i])
                return false;
        }
		// for all character we had freq in ransomNote <= freq in magazine, soo it can be constructed. ( True )
        return true;
    }
};