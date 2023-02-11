class Solution {
public:
    vector<string> findWords(vector<string>& words);
};
/*********************************************************/
vector<string> Solution::findWords(vector<string>& words) {
    vector<string> keyboard {"qwertyuiop", "asdfghjkl", "zxcvbnm"}, ans;
    int i, j, k, sizeW = words.size(), sizeK = keyboard.size(), found;
    vector<unordered_set<char>*> keyboardSet;
    unordered_set<char> k1,k2,k3;
    keyboardSet.emplace_back(&k1);
    keyboardSet.emplace_back(&k2);
    keyboardSet.emplace_back(&k3);
    for (i = 0; i < sizeK; ++i) {
        for (j = 0; j < keyboard[i].size(); ++j) {
            keyboardSet[i]->insert(keyboard[i][j]);
        }
    }
    for (i = 0; i < sizeW; ++i) {
        for (j = 0, found = 1; j < sizeK; ++j, found = 1) {
            for (k = 0; k < words[i].size(); ++k) {
                if (keyboardSet[j]->find( tolower(words[i][k]) ) == keyboardSet[j]->end() ) {
                    found = 0;
                    break;
                }
            }
            if (found == 1) {
                ans.emplace_back(words[i]);
                break;
            }
        }
    }
    return ans;
}
/*********************************************************/