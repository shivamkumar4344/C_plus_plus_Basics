//Alphabet pattern-5
//A
//B B 
//C C C
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<char('A'+i-1)<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
