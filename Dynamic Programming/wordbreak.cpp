//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    unordered_map<string,int> dp;
    int wordBreak(string A, vector<string> &B) 
    {
        int sz=A.length();
        //base case
        if(sz==0)
        {
            return 1;
            //no string left to search
        }
        if(dp[A]!=0) return dp[A];
        for(int i=1;i<=sz;i++)
        {
            int f=0;
            //bool flag initially equal to 0
            string subs=A.substr(0,i);
            for(int j=0;j<B.size();j++)
            {
                if(subs.compare(B[j])==0)
                {
                    f=1;
                    break;
                    //comparing all the generated substrings 
                    //with given vector of strings
                    //this loop will execute everytime the comparison is done
                }
            }
            if(f==1 && wordBreak(A.substr(i,sz-i),B)==1)
            {
                return dp[A]=1;
                //smaller substrings
            }
        }
        return dp[A]=0;
        
        //code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends