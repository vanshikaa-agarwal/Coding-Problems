//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    pair<int,int>p;
    sort(arr,arr+n);
    int start=0;
    int end=n-1;
    int f=-1;
    int c=-1;
    
        while(end-start>1){
            int mid=(start+end)/2;
            if(arr[mid]>x){
                end=mid-1;
            }
            else{
                start=mid;
            }
            
        }
        if(arr[end]<=x){
            f= end;
        }
        else if(arr[start]<=x){
            f= start;
        }
    if(arr[end]<=x){
        f=arr[end];
    }
    else if(arr[start]<=x){
        f=arr[start];
    }
    start=0;
    end=n-1;
    while(end-start>1){
        int mid=start+(end-start)/2;
        if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    if(arr[start]>=x){
        c=arr[start];
    }
    else if(arr[end]>=x){
        c=arr[end];
    }
    p.first=f;
    p.second=c;
    return p;
}