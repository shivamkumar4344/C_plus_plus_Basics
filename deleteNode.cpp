//Delete Node at any position
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
		
		~Node()
		{
			int value = this->data;
			if(this->next!=NULL)
			{
				delete next;
				this->next = NULL;
			}
			cout<<"Memory is freed at value "<<value<<endl;
		}
};


void insertAtTail(Node* &tail,int d)
{
	Node* temp = new Node(d);
	tail->next = temp;
	tail = temp;
}

void deleteNode(int pos ,Node* &head)
{
	//deleting first node
	if(pos==1)
	{
		Node* temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}
	
	else
	{
		//at any middle position or end node
		Node* curr = head;
		Node* prev = NULL;
		int cnt = 1;
		while(cnt < pos)
		{
			prev = curr;
			curr = curr->next;
			cnt++;
		}
		
		prev->next = curr->next;
		curr->next = NULL;
		delete curr;
	}
}

void display(Node* &head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main()
{
	int d;
	cout<<"Enter the head node value"<<endl;
	cin>>d;
	
	Node* node1 = new Node(d);
	Node* head = node1;
	Node* tail = node1;
	
	insertAtTail(tail,12);
	insertAtTail(tail,15);
	insertAtTail(tail,18);
	cout<<"Original value of Linked List : ";
	display(head);
	
	int pos;
	cout<<"\nEnter the position you want to delete : ";
	cin>>pos;
	deleteNode(pos,head);
	cout<<"Linked List after deletion : ";display(head);
	
}
