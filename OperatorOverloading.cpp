//Operator Overloading

#include<iostream>
using namespace std;

class Complex{
	public:
		int real;int img;
		Complex(int x, int y) //parameterised constructor
		{
			real = x;
			img = y;
		}
		
		Complex operator+(Complex &c) //+ operator overloaded
		{
			Complex ans(0,0);
			ans.real = real + c.real;
			ans.img = img + c.img;
			return ans;
		}
		
};


int main()
{
	int x,y,a,b;
	cout<<"Enter value of x and y : "<<endl;
	cin>>x>>y;
	cout<<"Enter value of a and b : "<<endl;
	cin>>a>>b;
	Complex c1(x,y);
	Complex c2(a,b);
	Complex c3 = c1+c2;
	cout<<"Complex Number is : "<<c3.real<<"+"<<c3.img<<"i"<<endl;
}
