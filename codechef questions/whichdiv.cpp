#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int r;
	    cin>>r;
	    if(r>=2000)
	    cout<<1;
	    else if(r>=1600 && r<2000)
	    cout<<2;
	    else if(r<1600)
	    cout<<3;
	    cout<<"\n";
	}
	return 0;
}
