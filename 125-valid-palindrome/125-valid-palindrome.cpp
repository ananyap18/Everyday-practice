class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
                ans.push_back(tolower(s[i]));
        }
        
        string temp =ans;
        reverse(temp.begin(),temp.end());

        if(temp==ans)
            return true;
        
        else 
            return false;
    }
    
};