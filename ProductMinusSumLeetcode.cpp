//Leetcode=1
//Given an integer number n, return the difference between the product of its digits and the sum of its digits.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number : ";
	cin>>n;
	
	int prod =1;
	int sum =0;
	
	while(n!=0){
		int last_digit = n%10;
		prod = prod * last_digit;
		sum+=last_digit;
		n = n/10;
	}
	int ans = prod - sum;
	cout<<"Answer is : "<<ans<<endl;
	
	return 0;
}
