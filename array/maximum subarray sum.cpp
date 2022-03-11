#include<vector>
using namespace std;

int maxSubarraySum(vector<int> arr){
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();
   int cs=0,ms=0;
   for(int i=0;i<n;i++)
   {
       cs+=arr[i];
       ms=max(cs,ms);
       if(cs<0)
       {
           cs=0;
       }
   }
   return ms;
    
    
    
    
}