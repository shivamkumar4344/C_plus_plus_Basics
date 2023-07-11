//Decimal To Binary
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	int ans = 0;
	int i = 0;
	while(n!=0)
	{
		int bit = n&1;
		ans = (bit*pow(10,i))+ans;
		n=n>>1;
		i+=1;
	}
	cout<<"Answer is : "<<ans<<endl;
	return 0;
}
