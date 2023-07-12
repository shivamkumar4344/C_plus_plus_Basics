//function 1-power of a^b
#include<iostream>
using namespace std;

int power()
{
	int a,b;
	cout<<"Enter the value of a and b: ";
	cin>>a>>b;
	int ans =1;
	int i;
	for(i=1;i<=b;i++)
	{
		ans = ans*a;
	}
	return ans;
}

int main()
{
	int a,b;
	cout<<"Power is: "<<power()<<endl;
}
