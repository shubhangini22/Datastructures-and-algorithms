// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
    unordered_set<int> p;
    bool r=false;
    int u;
    
    for(int i=0;i<n;i++)
    {
        if(p.find(A[i])==p.end())
        {
            p.insert(A[i]);
        }
        for(int j=i+1;j<n;j++)
        {
            u=X-(A[i]+A[j]);
            if(p.find(u)!=p.end())
            {
                r=true;
            }
            
        }
    }
    return r;
        //Your Code Here
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends