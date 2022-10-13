//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
       stack<char> st;
       st.push(S[0]);
       for(int i=0;i<S.length();i++)
       {
           
           char a=st.top();
           if(S[i]!=a)
           {
               st.push(S[i]);
           }
       }
       string res="";
       while(!st.empty())
       {
           char b=st.top();
           st.pop();
           res+=b;
       }
       reverse(res.begin(),res.end());
       return res;
        // code here.
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends