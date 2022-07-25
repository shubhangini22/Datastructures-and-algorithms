// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        //right shift is division by 2
        int c,sum=0,i=1;
        while(N>0)
        {
            if((N&1)==1)
            {
                //check for set bits
                c=i;
                sum++;
            }
            
            N=N>>1;
            i++;
        }
        if(sum>1 || sum==0) return -1;
        else return c;
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends