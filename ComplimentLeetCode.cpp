//Leetcode - 4
//Compliment of Base 10 integer
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	int m =n;
	int mask =0;
	//edge case
	if(n==0){
		cout<<1;
	}
	
	while(m!=0)
	{
		mask = (mask<<1) | 1;
		m = m>>1;
	}
	int ans = (~n)&mask;
	cout<<"ANSWER : "<<ans<<endl;
	return 0;
}
