//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int getlargest(int arr[],int n){
	    int res=0;
	    for(int i=1;i<n;i++){
	        if(arr[i]>arr[res]){
	            res=i;
	        }
	    }
	    return res;
	}
	int print2largest(int arr[], int n) {
	    int max_ele=getlargest(arr,n);
	   // return max_ele;
	   int ans=-1;
	   for(int i=0;i<n;i++){
	       if(arr[i]!=arr[max_ele]){
	           if(ans==-1){
	               ans=i;
	           }
	           else if(arr[i]>arr[ans]){
	               ans=i;
	           }
	       }
	   }
	   if(ans==-1){
	       return ans;
	   }
	   return arr[ans];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends