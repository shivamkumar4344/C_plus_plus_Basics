//Reverse the digits of a number
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number :";
	cin>>n;
	
	int reverse = 0;
	while(n>0){
		int last_digit = n%10;
		reverse = reverse*10 + last_digit;
		n=n/10;
		
	}
	cout<<"Reverse of the digits : "<<reverse<<"\n";
	return 0;
}
