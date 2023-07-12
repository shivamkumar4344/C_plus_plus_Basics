//function 2-Even or Not
#include<iostream>
using namespace std;

bool isEven(int n)
{
	if(n&1)
	{
		return 0;
	}
	else{
		return 1;
	}
}

int main(){
	int n;
	cout<<"Enter the Number : ";
	cin>>n;
	if(isEven(n))
	{
		cout<<"Even number ";
	}
	
	else{
		cout<<"Odd number ";
		
	}
	return 0;
}
