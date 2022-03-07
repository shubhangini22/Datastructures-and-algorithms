#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long ans;
	cin>>n;
	long long a[n];
	 for(int i=0;i<n;i++){
	     cin>>a[i];
	 }
	      sort(a,a+n);
	      for(int i=0;i<n;i++){
	          a[i]*=n-i;
	          ans=max(ans,a[i]);
	      }
	      cout<<ans<<endl;
	return 0;
}
