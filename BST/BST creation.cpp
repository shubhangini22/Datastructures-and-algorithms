#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int key;
Node *left;
Node *right;

Node (int key)
{
	//declaration of what node contains
	this->key=key;
	left=right=NULL;
}

};
//Recursive function for creating a bst,
//initially there is nothing we have to make a function call and return a node
Node* insert(Node *root,int key)
{
	if(root==NULL)
	{
		//here the tree doesn't exist so we have to create a new node(heap)
		return new Node(key);
	}
	if(key<root->key)
	{
		//the new key whivh we have to insert is less than the key at root node
		root->left=insert(root->left,key);
	}
	if(root->key<key)
	{
		//here we will insert the number to right side
		root->right=insert(root->right,key);
	}
	return root;
}
//we have to write one function to print tree
//inorder traversal which will give us in sorted order
void print(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	print(root->left);
	cout<<root->key<<",";
	print(root->right);
	//left ,root ,right
}



int main()
{
	Node *root=NULL;
	int arr[]={8,3,4,5,10,13,25};
	for(auto x:arr)
	{
		root=insert(root,x);
	}
	print(root);
	return 0;
}