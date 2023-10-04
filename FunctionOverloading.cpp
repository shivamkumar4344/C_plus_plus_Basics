//Function Overloading 
#include<iostream>
using namespace std;
class Sum{
	public:
	void add(int x , int y)
	{
		int sum = x+y;
		cout<<sum<<endl;
	}
	
	void add(int x, int y ,int z)
	{
		int sum = x+y+z;
		cout<<sum<<endl;
	}
	
	void add(float x , float y)
	{
		float sum = x+y;
		cout<<sum<<endl;
	}
};

int main()
{
	Sum s;
	s.add(2,8);
	s.add(6,8,9);
	s.add(float(2.98),float(9.81));
	return 0;
}
