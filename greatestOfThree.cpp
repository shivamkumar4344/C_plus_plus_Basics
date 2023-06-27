//take 3 positive integers input and print greatest of them .
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter the values of all 3 positive integers : ";
	cin>>x>>y>>z;
	if(x==y && x==z){
		cout<<"All are positive "<<endl;
	}
	else if(x>y && x>z){
		cout<<"x is greatest "<<x<<endl;
	}
	else if(y>x && y>z){
		cout<<"y is greatest "<<y<<endl;
	}
	else{
		cout<<"z is greatest "<<z<<endl;
	}
	
	return 0;
}
