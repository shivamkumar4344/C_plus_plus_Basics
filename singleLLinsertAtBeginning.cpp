//In singly linked list insert at beginning
#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int data)
		{
			this->data = data;
			this->next = NULL;
		}
};

void insertAtBeginning(Node* &head,int d)
{
	//creating a new node
	Node* temp = new Node(d);
	
	temp->next = head;
	head = temp;
	
}

void display(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main()
{
	int d;
	cout<<"Enter the value at head : "<<endl;
	cin>>d;
	
	Node* node1 = new Node(d);
	
	Node* head = node1;
	
	insertAtBeginning(head,12);
	insertAtBeginning(head,15);
	insertAtBeginning(head,18);
	display(head);
}

