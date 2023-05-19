//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int index=0;
        
        for(int i=0;i<n;i++){
            if(x>=matrix[i][0] && x<=matrix[i][m-1]){
                int lo=0;
                int hi=m-1;
                while(hi-lo>1){
                    int mid=(lo+hi)/2;
                    if(matrix[i][mid]>x){
                        hi=mid-1;
                        index=i;
                    }
                    else if(matrix[i][mid]<=x){
                        lo=mid;
                        index=i;
                    }
                
                }
                if(matrix[index][lo]==x){
                    return true;
                }
                else if(matrix[index][hi]==x){
                    return true;
                }
                
            lo=0;
            hi=m-1;
            }
            
        }
        
        return false;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {

 		int n, m;
    	cin>> n>> m;
        vector<vector<int> > matrix(n);
            
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        int x;
        cin>>x;
        Solution obj;
        if (obj.search(matrix,n,m,x)) 
            cout << "1\n"; 
        else
            cout << "0\n"; 
    }
	return 0; 
} 


// } Driver Code Ends