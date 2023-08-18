//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
     bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        unordered_map<char,int>brackets={{'(',-1},{'[',-2},{'{',-3},{')',1},{']',2},{'}',3}};
        for(int i=0;i<x.size();i++){
            if(brackets[x[i]]<0){s.push(x[i]);}
            else{
                if(s.empty()) return false;
                
                char c=s.top();
                s.pop();
                
                if((brackets[x[i]] + brackets[c] )!=0)return false;
            }
        }
        if(s.empty())return true;
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends