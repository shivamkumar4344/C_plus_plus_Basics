//Number Pattern -5
//1
//2 2
//3 3 3
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int i=1;
	while(i<=n){
		int j = 1;
		while(j<=i){
			cout<<i<<" ";
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
