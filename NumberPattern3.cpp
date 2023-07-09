//Number Pattern-3
//3 2 1
//3 2 1
//3 2 1
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<n-j+1<<" ";
		}
		cout<<endl;
	}
	return 0;
}
