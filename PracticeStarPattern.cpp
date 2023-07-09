//Practice Star pattern-10
//1 2 3 4 5 5 4 3 2 1
//1 2 3 4 * * 4 3 2 1
//1 2 3 * * * * 3 2 1
//1 2 * * * * * * 2 1
//1 * * * * * * * * 1

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	int i=1;
	while(i<=n)
	{
		//for 1st triangle
		int j = 1;
		int start = 1;
		while(j<=n-i+1){
			cout<<start<<" ";
			start+=1;
			j+=1;
		}
		
		//for stars 1
		int star1 = i-1;
		while(star1){
			cout<<"*"<<" ";
			star1-=1;
		}
		
		//for stars 1
		int star2 = i-1;
		while(star2){
			cout<<"*"<<" ";
			star2-=1;
		}
		
		//for 2nd triangle
		int k = n-i+1;
		while(k)
		{
			cout<<k<<" ";
			k-=1;
		 } 
		
		
		
		cout<<endl;
		i+=1;
	}
	return 0;
}
