

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int n) {
        int count=0;
        //everytime we are taking the last bit and checking
        //count number of set bits
        while(n>0)
        {
            int last_bit=n&1;
            count+=last_bit;
            n=n>>1;
            //n right shift 1
        }
        return count;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends