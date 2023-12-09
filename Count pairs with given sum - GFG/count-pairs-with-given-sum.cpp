//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int ans=0;
        for(auto it:mp){
            if(it.first==k-it.first){
                ans+=(it.second*(it.second-1));
            }
            else{
            int x=0;
            // if(mp[k-it.first]>0){
                x=mp[k-it.first];
            // }
            ans+=it.second*x;
            }
        }
        ans/=2;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends