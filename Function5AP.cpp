//Function - 5
//AP = (3*n)+7
#include<iostream>
using namespace std;

int ap(int n)
{
	int ans = (3*n)+7;
	return ans;
}

int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	
	cout<<"nth of the given AP 3n+7 is : "<<ap(n)<<endl;
}
