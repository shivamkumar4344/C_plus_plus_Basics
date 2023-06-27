// star pattern using c++
#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter the number of star you want to print of : ";
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++){
			cout<<" *";
		}
	cout<<"\n";	
	}
	return 0;
}
