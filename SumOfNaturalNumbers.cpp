//print the sum of n natural numbers ,where n is the input..

#include<iostream>
using namespace std;

int main()
{
	int n,i ;
	int sum = 0 ;
	cout<<"Enter the number you want the sum of : ";
	cin>>n;
	for(i=1;i<=n;i++){
		sum+=i;
	}
	cout<<"Sum of given natural numbers are : "<<sum<<endl;
	return 0;
}
