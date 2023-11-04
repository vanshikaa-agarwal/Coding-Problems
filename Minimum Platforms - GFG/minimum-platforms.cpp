//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    static bool cmp(const pair<int,int>&a,const pair<int,int>&b){
        return a.second<b.second;
    }
    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr,arr+n);
        sort(dep,dep+n);
        int ct=0,ans=0;
        int i=0,j=0;
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                i++;
                ct++;
            }
            else{
                j++;
                ct--;
            }
            ans=max(ans,ct);
        }
        return ans;
    //     	vector<int>ans;
    // 	ans.push_back(vp[0].second);
    // 	for(int i=1;i<n;i++){
    // 	    for(int j=0;j<ans.size();j++){
    	        
    //     	    if(vp[i].first>ans[j]){
    //     	        ans[j]=vp[i].second;
    //     	        sort(ans.begin(),ans.end());
    //     	        break;
    //     	    }
    // 	    }
    	    
    // 	        ans.push_back(vp[i].second)
    	    
    // 	}
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends