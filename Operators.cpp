#include<iostream>
using namespace std;
int main()
{
	int a = 4;
	int b = 6;
	
	cout<<"a&b : "<<(a&b)<<endl;
	cout<<"a|b : "<<(a|b)<<endl;
	cout<<"~a : "<<(~a)<<endl;
	cout<<"a^b : "<<(a^b)<<endl;;
	
	cout<<(5<<1)<<endl;
	
	cout<<(17>>2)<<endl;
	
	//post and pre increment and decrement
	int i = 7;
	cout<<(++i)<<endl;
	cout<<(i++)<<endl;
	cout<<(i--)<<endl;
	cout<<(--i)<<endl;
	return 0;
}
