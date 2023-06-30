// Default Parameter value

#include<iostream>
using namespace std;

int add(int n1,int n2=1,int n3 =2){
	return (n1+n2+n3);
}

int main()
{
	cout<<add(2)<<endl;
	cout<<add(2,5)<<endl;
	cout<<add(2,6,10)<<endl;
}
