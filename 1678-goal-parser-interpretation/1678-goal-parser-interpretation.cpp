class Solution {
public:
    string interpret(string com) {
        string ans;
        for(int i=0;i<com.size();i++) {
            if(com[i] == 'G'){
                ans.push_back('G');
            }
            else if(com[i] == '(' && com[i + 1] == ')') {
                ans.push_back('o');
            }
            else if(com[i] == '(' && com[i + 1] == 'a') {
                ans.push_back('a');
                ans.push_back('l');
            }
        }
        return ans;
    }
};