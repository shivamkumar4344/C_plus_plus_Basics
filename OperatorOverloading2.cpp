//Opeartor Overloading 2

#include<iostream>
using namespace std;

class Mul{
	public:
		int real;
		int img;
		Mul(int x,int y)//parameterised constructor
		{
			real = x;
			img = y;
		}
		Mul operator*(Mul &c)  //* operator is overloaded
		{
			Mul ans(0,0);
			ans.real = real + c.real;
			ans.img = img + c.img;
			return ans;
		}
};

int main()
{
	int x,y;
	cout<<"Enter the value of x and y : ";
	cin>>x>>y;
	int a,b;
	cout<<"Enter the value of a and b : ";
	cin>>a>>b;
	Mul c1(x,y);
	Mul c2(a,b);
    Mul c3 = c1*c2;
	cout<<c3.real<<"*"<<c3.img;
	
}
