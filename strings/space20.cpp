#include<bits/stdc++.h>
using namespace std;

void url(char *str)
{
  //in place of spaces here we have to give %20
	//character type of array
	for(int i=0;i<1000;i++)
	{
		if(str[i]==' ')
		{
			str[i];
		}
	}
}
int main()
{
	char str[10000];
	//we are getting input in the form of character array
	cin.getline(str,1000);
	url(str);
	cout<<str<<"\n";
}