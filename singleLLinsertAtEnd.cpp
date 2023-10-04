//In singly linked list insert at tail
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int data)
		{
			this->data  = data;
			this->next = NULL;
		}
};

void insertAtTail(Node* &tail,int d)
{
	Node* temp = new Node(d);
	
	tail->next = temp;
	tail = temp;
}

void display(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main()
{
	int d;
	cout<<"Enter the data: ";
	cin>>d;
	Node* node1 = new Node(d);
	
	Node* head = node1;
	Node* tail = node1;
	insertAtTail(tail,12);
	insertAtTail(tail,15);
	insertAtTail(tail,20);
	display(head);
	return 0;
	
}
