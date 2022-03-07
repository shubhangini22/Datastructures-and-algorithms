// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    char a[9]={'!','#','$','%','&','*','@','^','~'};
	    unordered_set<char> p1;
	     unordered_set<char> p2;
	    for(int i=0;i<n;i++)
	    {
	        p1.insert(nuts[i]);
	        p2.insert(bolts[i]);
	    }
	    for(int i=0,j=0;i<9;i++)
	    {
	        if(p1.find(a[i])!=p1.end() && p2.find(a[i])!=p2.end())
	        {
	            nuts[j]=a[i];
	            bolts[j]=a[i];
	            j++;
	            
	        }
	        
	    }
	    // code here
	    return;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends