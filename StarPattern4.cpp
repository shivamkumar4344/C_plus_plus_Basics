//Star Pattern-3
//    *
//   **
//  ***
// ****
//*****
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	int i =1;
	while(i<=n){
		
		//for spaces
		int spaces = n-i;
		while(spaces){
			cout<<" ";
			spaces-=1;
		}
		
		//for stars
		int j =1;
		while(j<=i){
			cout<<"*";
			j+=1;
		}
		cout<<endl;
		i+=1; 
	}
	return 0;
}
