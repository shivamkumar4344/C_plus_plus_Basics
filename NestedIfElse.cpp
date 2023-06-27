//nested if - else

//this code will specify whether the given number is divisible by both 3 and 5 or not or it means that it is is divided by 15 only.
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a number : ";
	cin>>x;
	if(x%5==0){
		if(x%3==0){
			cout<<"Valid"<<endl;
		}
		else{
			cout<<"Invlaid"<<endl;
		}
	
	}
	else{
		cout<<"Invalid"<<endl;
	}
	return 0;
}
