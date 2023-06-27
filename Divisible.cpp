//take positive integer input and tell if it is divisible by 5 or 3 but not divisible
//by 15.
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter your positive integer : ";
	cin>>x;
	if((x%5==0 or x%3==0) and (x%15!=0)){
		cout<<"Condition is matching"<<endl;
	}
	else{
		cout<<"Condition is not matching "<<endl;
	}
	return 0;
}
