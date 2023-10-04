//Multiple inheritance
#include<iostream>
using namespace std;
class Parent1{
	public:
		Parent1()
		{
			cout<<"Parent 1\n";
		}
};

class Parent2{
	public:
		Parent2()
		{
			cout<<"Parent 2\n";
		}
};


class Child: public Parent1, Parent2{
	public:
		Child()
		{
			cout<<"Child Class"<<endl;
		}
};


int main()
{
	Child c;
}
