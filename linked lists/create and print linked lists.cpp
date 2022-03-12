#include<bits/stdc++.h>
using namespace std;

//firstly we have to define node class that can be accesed by all the functions.
class Node{
public:
	int data;
	Node *next;
	//next is the pointer to another node here.
	Node(int data)
	{
		this->data=data;
		next=NULL;
	}

};
//class node created.
void createLL(Node *&head,int data)
{
	//head pointer is passed by reference since we have to modify the original pointer.
	//fuction to create linked list using dynamic allocation.
	if(head==NULL)
	{
head=new Node(data);
return;
	}
	//otherwise
	Node *n=new Node(data);
	n->next=head;
	head=n;
	//for every insertion we are calling this function.
}
void printLL(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<endl;
//we are passing the head pointer by value so only a copy is created .
	//original values are not modified.
}

int main()
{
	Node *head=NULL;
	//we are initializing the head node initially as null.
	//firstly it will enter into if section of the function then it will create new nodes, as per the fuction calls.
	createLL(head,3);
	createLL(head,4);
	createLL(head,7);
	createLL(head,5);
	createLL(head,6);
	createLL(head,8);
	printLL(head);

}