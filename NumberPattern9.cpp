//Number Pattern-9
//   1
//  121
// 12321
//1234321
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number : ";
	cin>>n;
	
	int i = 1;
	while(i<=n){
		
		//for spaces
		int spaces = n-i;
		while(spaces){
			cout<<" ";
			spaces-=1;
		}
		
		//for 1st triangle
		int j = 1;
		while(j<=i)
		{
			cout<<j;
			j+=1;
		}
		
		//for 2nd triangle
		int k = i-1;
		while(k){
			cout<<k;
			k-=1;
		}
		cout<<endl;
		i+=1; 
	}
	return 0;
}
