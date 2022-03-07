// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int height[], int n){
         long long total = 0;
    int high1 = 0, high2 = 0, l = 0, r = n-1;
    while(l<r)
    {
        if (height[l] < height[r]) {
            high1 = max(high1, height[l]);
            total += high1 - height[l++];
        } else {
            high2 = max(high2, height[r]);
            total += high2 - height[r--];
        }
    }
    return total;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends