//Freind function
#include<iostream>
using namespace std;
class A{
	int x;//private funtion
	public:
		A(int y){  // parameterised constructor
			x=y;
		}
		
		friend void print(A &obj);  // friend funtion call
};

void print(A &obj)
{
	cout<<obj.x<<endl;
}

int main()
{
	A obj(5);
	print(obj);
}
