//function -6
//Fibonacci series
#include<iostream>
using namespace std;

int fibonacci_rec(int n)
{
	if(n==1 || n==2)
	{
		return n-1;
	}
	else{
		return fibonacci_rec(n-1)+fibonacci_rec(n-2);
	}
}

int fibonacci_iter(int n)
{
	int i,a=0,b=1;
	for(i=0;i<n-1;i++)
	{
		b=b+a;//1 2 3 5
		a=b-a;//1 1 2 3
	}
	return a;
}

int main()
{
	int n;
	cout<<"Enter the number you want : ";
	cin>>n;
	cout<<"nth term of the fibonacci through recurssive approach is : "<<fibonacci_rec(n)<<endl;
	cout<<endl;
	cout<<"nth term of the fibonacci through iterative approach is : "<<fibonacci_iter(n)<<endl;
}
