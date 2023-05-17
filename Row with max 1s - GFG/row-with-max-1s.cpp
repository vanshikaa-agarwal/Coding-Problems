//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        int ans=-1;
        int fans=-1;
        
        int ct=0;
        int temp=0;
        // int i=0;
        for(int i=0;i<n;i++)
        {
            int start=0;
            int end=m-1;
            while(end-start>1)
        {
            long long mid=start+(end-start)/2;
            if(arr[i][mid]==1)
            {
                end=mid;
            }
            else
            {
                start=mid+1;
            }
            // ct=m-mid;
            
            // i++;
            
        }
        // cout<<start<<" /"<<end<<endl;
        
        if(arr[i][start]==1){
            ct=m-start;
        }
        else if(arr[i][end]==1){
            ct=m-end;
        }
        else{
            ct=-1;
        }
        // cout<<ct<<endl;
        // ans=max(ans,ct);
        if(ct>ans){
            ans=ct;
            fans=i;
        }
        }
        
       
        
        
        return fans;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends