//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int ct0=0;
        int ct1=0;
        int ct2=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                ct1++;
            }
            else if(a[i]==0){
                ct0++;
            }
            else if(a[i]==2){
                ct2++;
            }
        }
        int i=0;
        while(ct0){
            a[i]=0;
            i++;
            ct0--;
        }
        while(ct1){
            a[i]=1;
            i++;
            ct1--;
            
        }
        while(ct2){
            a[i]=2;
            i++;
            ct2--;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends