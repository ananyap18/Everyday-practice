class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int n=s.size();
        int i=0,j=n-1;
        if(n==0||n==1) return s;
        if(s==" ") return s;
        while(i<=j&&i!=n&&j!=-1)
        {
            while(i!=n&&j!=-1&&i<=j&&!isVowel(s[i])) i++;
            while(i!=n&&j!=-1&&i<=j&&!isVowel(s[j])) j--;
            if(i<=j&&i!=n&&j!=-1)
            {
                swap(s[i],s[j]);
            }
            i++;
            j--;
        }
        return s;
    }
};