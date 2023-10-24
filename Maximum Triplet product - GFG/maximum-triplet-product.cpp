//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	sort(arr,arr+n);
    	long long ans=0;
    	if(arr[n-1]<0 && arr[n-2]<0 && arr[n-3]<0){
    	    ans=arr[n-1]*arr[n-2]*arr[n-3];
    	    return ans;
    	}
    	long long val1=arr[0]*arr[1];
    	long long val2=arr[n-3]*arr[n-2];
    	if(val1>val2){
    	    ans=val1*arr[n-1];
    	}
    	else{
    	    ans=val2*arr[n-1];
    	}
    	return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends