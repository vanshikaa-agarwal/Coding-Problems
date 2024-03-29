//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int>v;
        stack<int>st;
        st.push(0);
        v.push_back(1);
        for(int i=1;i<n;i++){
            while(!st.empty() && price[st.top()]<=price[i]){
                st.pop();
                
            }
            if(st.empty()){
                v.push_back(i+1);
            }
            else{
                v.push_back(i-st.top());
            }
            st.push(i);
        }
        return v;
       // Your code here
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends