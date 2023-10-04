//Insert at any position
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

void insertAtPosition(Node* &head ,Node* &tail ,int position ,int d)
{
	//insert at start
	if(position==0 && position==1)
	{
		insertAtHead(head,d);
		return;
	}
	
	Node* temp = head;
	int count = 1;
	while(count<position-1)
	{
		temp = temp->next;
		count++;
	}
	//insert at end
	if(temp->next == NULL)
	{
		insertAtTail(tail,d);
		return;
	}
	
	Node* nodeToInsert = new Node(d);
	nodeToInsert->next = temp->next;
	temp->next = nodeToInsert;
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
	

    insertAtTail(tail,12);
    insertAtTail(tail,15);
    cout<<"Single Linked List : "<<endl;
	print(head);
	
	cout<<"Single Linked List after insertion : ";
	insertAtPosition(head,tail,3,45);
	print(head);
	
	return 0;
}
