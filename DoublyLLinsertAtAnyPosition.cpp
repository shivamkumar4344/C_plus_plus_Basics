//Doubly Linked List - Insert at any position
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

void insertAtTail(Node* &tail ,int d)
{
	if(tail==NULL)
	{
		Node* temp = new Node(d);
		tail = temp;
	}
	else
	{
		Node* temp = new Node(d);
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
		
	}
}

void insertAtHead(Node* &head,int d)
{
	if(head == NULL)
	{
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

void insertAtPosition(int pos,Node* &head, Node* &tail,int d)
{
	if(pos==0)
	{
		return;
	}
	if(pos==1 )
	{
		insertAtHead(head,d);
		return;
	}
	
	Node* temp = head;
	int cnt = 1;
	while(cnt<pos-1)
	{
		temp = temp->next;
		cnt++;
	}
	
	if(temp->next==NULL)
	{
		insertAtTail(tail,d);
		return ;
	}
	
	Node* nodeToInsert = new Node(d);
	nodeToInsert->next = temp->next;
	temp->next->prev = nodeToInsert;
	temp->next = nodeToInsert;
	nodeToInsert->prev = temp;
	
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
	cout<<"Enter the header node: ";
	cin>>d;
	Node* node1 = new Node(d);
	Node* head = node1;
	Node* tail = node1;
	
	insertAtTail(tail,10);
	insertAtTail(tail,20);
	cout<<"Original Data: ";
	display(head);
	
	cout<<"\nAfter insertion : ";
	int pos ;
	cout<<"\nEnter the position : ";
	cin>>pos;
	int data;
	cout<<"\nEnter the data you want : ";
	cin>>data;
	insertAtPosition(pos,head,tail,data);
	display(head);
	return 0;
}


