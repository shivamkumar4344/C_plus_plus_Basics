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

void insertAtHead(Node* &head,int d)
{
	//new node created
	Node* temp = new Node(d);
	
	temp->next = head;
	head = temp;
	
}


void insertAtTail(Node* &tail,int d){
	//new node created
	Node* temp = new Node(d);
	
	tail->next = temp;
	tail = temp;
}

void display(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main()
{
	int d;
	cout<<"Enter the head data : ";
	cin>>d;
	
	Node* node1 = new Node(d);
	
	Node* head = node1;
	Node* tail = node1;
	
//	insertAtHead(head,12);
    insertAtTail(tail,12);
//	display(head);
	
//	insertAtHead(head,15);
    insertAtTail(tail,15);
	display(head);
}
