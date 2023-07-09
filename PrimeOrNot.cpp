// Find whether the number is prime or not..
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number : ";
	cin>>n;
	int i = 2;
	
	while(i<n){
		if(n%i==0)
		{
			cout<<"Not prime for "<<i<<endl;
		}
		else
		{
			cout<<"Prime for "<<i<<endl;
		}
		i+=1;
	}
	return 0;
}
