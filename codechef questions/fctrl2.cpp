#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost :: multiprecision;
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int N;
	
	while(t--)
	{
	    
	    cin>>N;
	    cpp_int fact = 1;
	    for(int i = 1; i <= N; i++)
	    {
	        fact = fact * i;
	    }
	    
	    cout<<fact<<endl;
	    
	}
	return 0;
}

