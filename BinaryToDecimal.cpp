//Binary to Decimal
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n ;
	cout<<"Enter the number : ";
	cin>>n;
	
	int i =0;
	int ans = 0;
	while(n!=0)
	{
		int digit = n%10;
		if(digit==1){
			ans = (pow(2,i))+ans;
		}
		n=n/10;
		i+=1;
	}
	cout<<"Answer is : "<<ans<<endl;
	return 0;
}
