//take 3 numbers input and tell if they can be the sides of a triangle
#include<iostream>
using namespace std ;
int main()
{
	int a,b,c;
	cout<<"Enter the values of all three sides of a triangle : ";
	cin>>a>>b>>c;
	if((a+b>c and b+c>a and c+a>b)){
		cout<<"Valid Triangle"<<endl;
	}
	else{
		cout<<"Invalid trianle"<<endl;
	}
	return 0;
}
