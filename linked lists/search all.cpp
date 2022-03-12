#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};


bool isPresent(node * head, int key){
    //Complete this function 
    
    while(head!=NULL)
    {
        if(head->data==key)
        {
            return true;
            break;
        }
       head=head->next;
    }
 return false;
    
    
    
}