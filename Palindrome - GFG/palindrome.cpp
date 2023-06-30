//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{   int l = 0, r = 0;
		    int m = n;
		    // Code here.
		    while(n > 0){
		        l = n% 10;
		        n = n/10;
		        r = (r * 10) + l;
		    }
		    if (r == m){
		        return "Yes";
		    } else {
		        return "No";
		    }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends