//Calculating simple intrest

#include<iostream>
using namespace std;
int main()
{
	float p,r,t,SI;
	cout<<"Enter the Principal Amount in Rupees : ";
	cin>>p;//inputting the principal amount.
	cout<<"Enter the Rate of Intrest : ";
	cin>>r;//inputting the rate of intrest.
	cout<<"Enter the time in years : ";
	cin>>t;//inputting the time.
	SI = (p * r * t)/100;//calculating the simple intrest
	cout<<"SIMPLE INTREST IS : "<<SI<<endl;//printing the simple intrest
	
	return 0;
	
}
