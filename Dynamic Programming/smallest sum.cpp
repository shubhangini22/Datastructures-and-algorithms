//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      int sum=INT_MAX;
      int curr=0;
      for(int i=0;i<a.size();i++)
      {
          curr+=a[i];
          if(curr<sum)
          {
              sum=curr;
          }
          if(curr>0)
          {
              curr=0;
          }
      }
      return sum;
      //Code here
  }
};


//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends