//Given two numbers a and b. Find a raise to the power b.
#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter the value of a : ";
	cin>>a;
	
	int b;
	cout<<"Enter the value of b : ";
	cin>>b;
	
	int i;
	int result = 1;
	
	for(i=1;i<=b;i++){
		result*=a;
	}
		cout<<a<<" raised to power "<<b<<" is "<<result<<endl;
		return 0;
}
