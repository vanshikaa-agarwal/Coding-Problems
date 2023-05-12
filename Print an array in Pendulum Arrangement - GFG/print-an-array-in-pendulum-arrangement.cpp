//{ Driver Code Starts
// C++ program for pendulum arrangement of numbers
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Returns pendulam arrangement of arr[]
vector<int> pendulumArrangement(int arr[], int n) {
    sort(arr,arr+n);
    vector<int>v(n);
    int index=n/2;
    // cout<<index<<endl;
    if(n%2==0){
        index=(n-1)/2;
    }
    int j=0;
    int i=n-1;
    if(n%2==0){
        i=n-2;
    }
    for(i;i>1;i-=2){
        v[j]=arr[i];
        j++;
        
    }
    v[index++]=arr[0];
    v[index++]=arr[1];
    for(int i=3;i<n;i+=2){
        v[index++]=arr[i];
        
    }
    
    return v;
}


//{ Driver Code Starts.

int main() {
    int t, i;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) cin >> arr[i];

        vector<int> ans = pendulumArrangement(arr, n);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends