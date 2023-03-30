class Solution {
public:
    int balancedStringSplit(string s) {

    int countR=0;
    int countL=0;
    int balanced_string=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='R')
            countR++;
        else
            countL++;
        
        if(countR==countL)
        {
            balanced_string++;
            countR=0;
            countL=0;
        }
    }
    return balanced_string;


    }
};