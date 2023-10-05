//Binary Tree Traversal in 3 forms - in order, pre-order and post-order
#include<iostream>
using namespace std;

class Node
{
	public:
	Node* right;
	Node* left;
	int data;
	Node(int data)//constructor
	{
		this->data = data;
		this->right = NULL;
		this->left = NULL;
	}
};

void inOrderTraversal(Node* &root)
{
	if(root == NULL)
	{
		return;
	}
	inOrderTraversal(root->left);
	cout<<root->data<<"->";
	inOrderTraversal(root->right);
	
}

void preOrderTraversal(Node* &root)
{
	if(root == NULL)
	{
		return;
	}
	cout<<root->data<<"->";
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
	
}

void postOrderTraversal(Node* &root)
{
	if(root == NULL)
	{
		return;
	}
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	cout<<root->data<<"->";
}


int main()
{
	int d;
	cout<<"Enter the root node: ";
	cin>>d;
	
	Node* root = new Node(d);
	root->left = new Node(3);
	root->right = new Node(10);
	root->left->left = new Node(1);
	root->left->right = new Node(6);
	root->right->right = new Node(14);
	root->left->right->left = new Node(4);
	root->left->right->right = new Node(7);
	root->right->right->left = new Node(13);
	
	cout<<"Inorder Traversal : ";
	inOrderTraversal(root);
	cout<<endl;
	
	cout<<"Pre-order Traversal : ";
	preOrderTraversal(root);
	cout<<endl;
	
	cout<<"Post-order Traversal : ";
	postOrderTraversal(root);
	cout<<endl;
	
	return 0;
	
}

