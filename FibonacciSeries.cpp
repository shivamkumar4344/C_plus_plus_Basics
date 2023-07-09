// Fibonacci Series - 0 1 1 2 3 5 8 21 ........
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	int a = 0;
	int b = 1;
	cout<<a<<" "<<b<<" ";
	int i;
	for(i=1;i<=n;i++)
	{
		int sum = a+b;
		cout<<sum<<" ";
		a=b;
		b=sum;
	}
	return 0;
}

