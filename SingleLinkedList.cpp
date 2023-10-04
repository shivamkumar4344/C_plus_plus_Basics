//Single Linked list..
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
	Node(int data)//consrtructor
	{
		this->data = data;
		this->next = NULL;
	}
};

void insertAtHead(Node* &head,int d)
{
	//new node created
	Node* temp = new Node(d);
	
	temp->next = head;
	head = temp;
}

void insertAtTail(Node* &tail,int d)
{
	//new node created
	Node* temp = new Node(d);
	
	tail->next = temp;
	tail  = temp;
}

void print(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;//increment krna
	}
	cout<<endl;
}



int main()
{
	int d;
	cout<<"Enter the head value: "<<endl;
	cin>>d;
	Node* node1 = new Node(d);
	
	//head pointed to node 1
	Node* head = node1;
	//tail pointed to node 1
	Node* tail = node1;
//	print(head);
	
//	insertAtHead(head,12);
    insertAtTail(tail,12);
//	print(head);
	
//	insertAtHead(head,15);
    insertAtTail(tail,15);
    cout<<"Single Linked List : ";
	print(head);
	
	return 0;
}
