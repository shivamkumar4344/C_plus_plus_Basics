//Find the sum of even numbers from 1 to n
//2+4+6+8+10+......+n

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number at where you want the sum of : ";
	cin>>n;
	int sum = 0;
	int i = 2;
	while(i<=n){
		sum = sum + i;
		i+=2;
	}
	cout<<"Sum of even numbers : "<<sum<<endl;
}
