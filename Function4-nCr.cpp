//function 4-nCr
#include<iostream>
using namespace std;

int factorial(int n)
{
	int fact = 1;
	int i;
	for(i=1;i<=n;i++)
	{
		fact = fact * i;
		 
	}
	return fact;
	
}

int nCr(int n,int r)
{
	int numr = factorial(n);
	int denom = factorial(r)*factorial(n-r);
	return (numr/denom);
	 
	
}

int main()
{
	int n,r;
	cout<<"Enter the value of n: ";
	cin>>n;
	cout<<"Enter the value of r: ";
	cin>>r;
	
	cout<<"nCr is : "<<nCr(n,r)<<endl;
	return 0;
}
