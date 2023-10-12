//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long sum=0;
        long ans=INT_MIN;
        int i=0;
        int j=0;
        sum+=Arr[0];
        while(j<N){
            if(j-i+1<K){
                j++;
                sum+=Arr[j];
                
            }
            else if(j-i+1==K){
                ans=max(ans,sum);
                sum-=Arr[i];
                i++;
                j++;
                sum+=Arr[j];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts


//{ Driver Code Starts.

// } Driver Code Ends

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends