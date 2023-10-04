//Doubly Linked List - Inserting at end
#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node* prev;
		Node(int data)
		{
			this->data = data;
			this->next = NULL;
			this->prev = NULL;
		}
};

void insertAtTail(Node* &tail,int d)
{
	
	if(tail==NULL)
	{
		Node* temp = new Node(d);
		tail = temp;
	}
	//creating a new node.
	else{
		Node* temp = new Node(d);
	
	    tail->next = temp;
	    temp->prev = tail;
	    tail = temp;
	}
}

void display(Node* &tail)
{
	Node* temp = tail;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->prev;
	}
	cout<<endl;
}

int main()
{
//	int d;
//	cout<<"Enter the header node : ";
//	cin>>d;
//	Node* node1 = new Node(d);
//	Node* head = NULL;
	Node* tail = NULL;
	
	insertAtTail(tail,12);
	insertAtTail(tail,15);
	insertAtTail(tail,20);
	cout<<"Doubly Linked List : ";
	display(tail);
}
