//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        
        int sumA=0;
        int sumB=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            sumA+=A[i];
            
        }
        for(int i=0;i<m;i++){
            sumB+=B[i];
            mp[B[i]]=1;
            
        }
        
        
        int diffA=sumB-sumA;
        if(diffA%2==1)return -1;
        diffA=diffA/2;
        for(int i=0;i<n;i++){
            int bi=diffA+A[i];
            if((sumB-sumA + 2*A[i])%2==0 && mp.find(bi)!=mp.end())return 1;
        }
        return -1;
        
	}
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends