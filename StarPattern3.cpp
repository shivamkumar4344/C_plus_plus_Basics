//Star Pattern-3
//*
//* *
//* * *
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	int row,col;
	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
