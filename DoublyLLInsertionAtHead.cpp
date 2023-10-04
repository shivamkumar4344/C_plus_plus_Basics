//Doubly Linked List - Inserting at Beginning
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

void insertAtHead(Node* &head,int d)
{
	
	if(head == NULL){
		Node* temp = new Node(d);
		head = temp;
	}
	else{
		Node* temp = new Node(d);
	temp->next = head;
	head->prev = temp;
	head = temp;
	}
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
//	int d;
//	cout<<"Enter the header node: ";
//	cin>>d;
//	Node* node1 = new Node(d);
	
	Node* head = NULL;
	insertAtHead(head,11);
	insertAtHead(head,15);
	insertAtHead(head,18);
	cout<<"Doubly Linked List : ";
	display(head);
	
}

