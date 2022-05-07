#include<bits/stdc++.h>
using namespacde std;

//firstly we will create a class graph
class Graph{
int v;
//there is an array vertical
//for each array we have the respective elements in the form of linked list
//this represents connection of each element.
list<int> *l;
public:
	Graph(int v)
	{
		V=v;
		l=new list<int>[V];
	}
};