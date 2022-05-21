#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	//V is the number of vertices
	list<int> *l;
	//list for allocation
public:
	Graph(int v)
	{
		//graph constructor
		V=v;
		l=new list<int>[V];
		//we are doing dynamic memory allocation because initially the size of list is unknown
	}
	void addEdge(int i,int j,bool undir=true)
{
    l[i].push_back(j);
    if(undir)
    {
    	l[j].push_back(i);
    }
	//this function is for creating a adjacency list with all its neighbours
}


void bfs(int source)
{
	//initially we are having a source node then repeated;
	queue<int> q;
	bool *visited=new bool[V]{0};
	int *distance=new int[V]{0};
	int *parent=new int[V];
	//to maintain the distance and the parent for every node 
	//while traversal
	for(int i=0;i<V;i++)
	{
		parent[i]=-1;
	}
	//queue is a fifo ds
	q.push(source);
	//for source node initially 
	parent[source]=source;
	distance[source]=0;
	visited[source]=true;

	//do some work untill all the nodes are printed
	while(!q.empty())
	{
		//do some work for every node
		int f=q.front();
		//f is the first element then we have to find its nbrs and print
		
		q.pop();
		//push the nbrs of current node inside q if they are not already visited
		for(auto nbr:l[f])
		{
         if(!visited[nbr])
         {
         	q.push(nbr);
         	//while traversal we are visiting all the nodes
         	//we need to update distance and parent while this
         	parent[nbr]=f;
         	distance[nbr]=1+distance[f];

         	visited[nbr]=true;
         	//this loop will work for the insertion of adj nbrs if they are not already visited.
         }
        }
	}
	for(int i=0;i<V;i++)
	{
		cout<<"shortest distance "<<i<<"is"<<distance[i]<<endl;
	}
}

};
int main()
{
	Graph g(7);
	g.addEdge(0,1);
	g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(0,4);
    g.addEdge(3,4);
    g.bfs(1);
    return 0;

}
