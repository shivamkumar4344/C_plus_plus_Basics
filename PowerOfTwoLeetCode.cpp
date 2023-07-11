//Leetcode - 5
//Power of Two
#include<iostream>
#include<cmath>
using namespace std;

int powerOfTwo(int n){
	int i ;
	bool yes = false;
	for(i=0;i<=30;i++)
	{
		int ans = pow(2,i);
		if(ans==n){
			yes = true;
			cout<<yes<<endl;
		}
		
	}
	cout<<yes<<endl;
	
}


int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	powerOfTwo(n);
	
//	return 0;
}
