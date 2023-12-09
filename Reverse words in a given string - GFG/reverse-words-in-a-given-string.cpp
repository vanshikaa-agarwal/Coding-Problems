//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int n=S.size();
        string temp="";
        vector<string>v;
        for(int i=0;i<n;i++){
            if(S[i]!='.'){
                
                temp+=S[i];
            }
            else if(S[i]=='.'){
                v.push_back(temp);
                temp="";
            }
        }
        v.push_back(temp);
        string ans="";
        for(int i=v.size()-1;i>=0;i--){
            ans+=v[i];
            ans+='.';
        }
        ans.pop_back();
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends