// star pattern = 1
//***
//***
//***

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
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
