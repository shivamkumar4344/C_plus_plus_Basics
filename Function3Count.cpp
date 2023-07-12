//function 3-counting from 1 to n
#include<iostream>
using namespace std;

void count(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		cout<<i<<" ";
	}
}

int main()
{
	int n;
	cout<<"Enter the number you want the counting of: ";
	cin>>n;
	count(n);
	return 0;
}
