//Encapsulation
#include<iostream>
using namespace std;
class ABC{
	public:
		int x;
	
	void set(int n)
	{
		x = n;
	}
	int get(){
		return x;
	}
};

int main()
{
	ABC obj;
	obj.set(10);
	cout<<obj.get()<<endl;
}
