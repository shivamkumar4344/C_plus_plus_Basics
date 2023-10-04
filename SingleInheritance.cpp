//Single Inheritance 
#include<iostream>
using namespace std;

class Parent{
	public:
		Parent(){ // constructor called->default
			cout<<"Parent Class"<<endl;
		}	
};

class Child: public Parent{  // Child class -> Inherited from parent class
	public:
	Child()// constructor called->default
	{
		cout<<"Child Class"<<endl;
	}
};

class Grandchild: public Child{
	public:
		Grandchild()
		{
			cout<<"Grand Child"<<endl;
		}
};

int main()
{
	Parent p;
	cout<<endl;
	Child c;
	cout<<endl;
	Grandchild gc;
	return 0;
}
