// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int s=0;
        //int n=a^b;
        //here we are taking xor
       while(a>0 || b>0)
       {
           int t1=(a&1);
           int t2=(b&1);
           if(t1!=t2) s++;
           //right shifting a and b to extract there bits
           a=a>>1;
           b=b>>1;
       }
       return s;
        // Your logic here
        
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends