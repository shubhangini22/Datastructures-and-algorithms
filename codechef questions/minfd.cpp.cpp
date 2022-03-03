#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,sum=0,cnt=0,res=-1;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			sum+=a[n-i-1];
			cnt++;
			if(sum>=x)
			{
				res=cnt;
				break;
			}
			
		}
		cout<<res<<"\n";
		
	}
	return 0;
}
