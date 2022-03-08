#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	long double q,p;
	cin>>n;
	while(n--)
	{   
	    cin>>q>>p;
	    if(q>1000)
	    {
	        cout<< fixed << setprecision(6) <<0.9*p*q<<endl;
	    }
	    else
	    {
	        cout<< fixed << setprecision(6) <<p*q<<endl;
	    }
	}
	return 0;
}