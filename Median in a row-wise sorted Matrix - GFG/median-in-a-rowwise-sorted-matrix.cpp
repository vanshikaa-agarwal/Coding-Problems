//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here       
        int minv=INT_MAX;
        int maxv=INT_MIN;
        for(int i=0;i<R;i++){
            minv=min(minv,matrix[i][0]);
            maxv=max(maxv,matrix[i][C-1]);
        }
        int med_pos=(R*C+1)/2;
        int l=minv;
        int h=maxv;
        
        while(h>l){
            int mid=l+(h-l)/2;
            int ct=0;
            for(int i=0;i<R;i++){
                int val=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
                ct+=val;
            }
            if(ct<med_pos){
                    l=mid+1;
                }
            else{
                    h=mid;
                }
                
                
        }
    return l;  
    }
    
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends