#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int a[3][3];
	for(int i=0;i<3;i++)
	{
	     for(int j=0;j<3;j++)
	     {
	          cin>>a[i][j];
	     }
	}
	int s1=a[2][0]+a[2][1]+a[1][0];
	//we are taking the sum of the extra elements present out here 
	//so we can calculate the number of swaps required 
	//maximum is taken because we want the min swaps for all the balls to be arranged int the required manner
	int s2=a[0][1]+a[0][2]+a[1][2];
	
	cout<<max(s1,s2)<<"\n";
	

	}
	return 0;
}
