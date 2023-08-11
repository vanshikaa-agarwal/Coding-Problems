//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    vector<char>t(26,0);
	    vector<char>p(26,0);
	    int j=pat.size();
	    int n=txt.size();
	    for(int i=0;i<pat.size();i++){
	        p[pat[i]-'a']++;
	        t[txt[i]-'a']++;
	    }
	    int ans=0;
	    int i=0;
	    while(j<n){
	        if(t==p)ans++;
	        t[txt[i]-'a']--;
	        t[txt[j]-'a']++;
	        i++;
	        j++;
	    }
	    if(t==p)ans++;
	    return ans;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends