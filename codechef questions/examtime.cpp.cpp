#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d1,t1,m1,d2,t2,m2;
		cin>>d1>>t1>>m1;
		cin>>d2>>t2>>m2;
		if(d1+t1+m1==d2+t2+m2)
		{
			if(d1>d2)
			{
				cout<<"DRAGON\n";
			}
			else if(d2>d1)
			{
				cout<<"SLOTH\n";
			}
			else
			{
					if(t1>t2)
			{
				cout<<"DRAGON\n";
			}
			else if(t2>t1)
			{
				cout<<"SLOTH\n";
			}
			else
			{
				cout<<"TIE\n";
			}
			}
		}
		else if(d1+t1+m1>d2+t2+m2)
		{
			cout<<"DRAGON\n";
		}
		else
		{
			cout<<"SLOTH\n";
		}
		
	}
	return 0;
}
