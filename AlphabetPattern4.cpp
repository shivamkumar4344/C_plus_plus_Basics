//Alphabet Pattern-4
//A B C
//B C D
//C D E
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int i =1;
	while(i<=n){
		int j =1;
		while(j<=n){
			cout<<char(i+j-2+'A')<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
