//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
        void dfs(int node,vector<int>adjls[],vector<int>&vis){
            vis[node]=1;
            for(auto it:adjls[node]){
                if(!vis[it]){
                    dfs(it,adjls,vis);
                }
            }
        }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int>adjls[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(i!=j  && adj[i][j]==1){
                    
                adjls[i].push_back(j);
                adjls[j].push_back(i);
                }
            }
        }
        
        vector<int>vis(V,0);
        int ct=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                ct++;
                dfs(i,adjls,vis);
            }
        }
        return ct;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends