//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int a[], int n){
        int maxR=a[0];
        //maximum reachable point
        int step=a[0];
        //steps which can be taken
        int jump=1;
        //initial jump for any
        if(n==1) return 0;
        if(a[0]==0) return -1;
        //base case already at end
        for(int i=1;i<n;i++)
        {
            if(i==n-1) return jump;
            
            maxR=max(maxR,i+a[i]);
            step--;
            if(step==0)
            {
                jump++;
                if(i>=maxR)
                {
                    return -1;
                    
                }
                step=maxR-i;
                //step?
            }
            //updating max reachable point
            
        }
      
        
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
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends