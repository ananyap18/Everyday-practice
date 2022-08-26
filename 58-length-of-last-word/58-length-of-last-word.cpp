class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(s.find_last_not_of(" \n\t\r")+1);
        int count = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == ' '){
                break;
            }
            count+=1;
        }
        return count;
        
    }
};