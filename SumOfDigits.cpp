//find the sum of digits in a given number n
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	int sum = 0;
	while(n>0){
		int last_digit = n%10;
		sum+=last_digit;
		n=n/10;
	}
	cout<<"Sum of the given digits of a number : "<<sum<<endl;
	return 0;
}
