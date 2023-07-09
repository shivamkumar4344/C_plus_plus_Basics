//Alphabet pattern-3
//A B C
//D E F
//G H I
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int i,j;
	int count =0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<char('A'+count)<<" ";
			count++;
		}
		cout<<endl;
	}
	return 0;
}
