//Number Pattern-8
//1
//2 3
//3 4 5
//4 5 6 7
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int i =1;
	int val = i;
	while(i<=n){
		int j =1;
		while(j<=i){
			cout<<val<<" ";
			val+=1;
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
}
