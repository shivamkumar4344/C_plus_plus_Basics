//Alphabet pattern-2
//A B C
//A B C
//A B C
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	int i = 1;
	while(i<=n){
		int j =1;
		while(j<=n){
			cout<<char('A'+j-1)<<" ";
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
	return 0;
}
