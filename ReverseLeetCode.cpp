//LeetCode-3
//Reverse Integer in the range of -2^31 to 2^31-1
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	int iNT_MAX = (pow(2,31))-1;
	int iNT_MIN = -(pow(2,31));
	
	int ans =0;
//	int i =0;
	while(n!=0){
		int digit = n%10;
		if((ans>iNT_MAX/10) || (ans<iNT_MIN/10)){
			ans = ans *10;
		    ans = ans + digit;
		    n=n/10;
		}
	}
	cout<<"ANSWER : "<<ans<<endl;
	return 0;
	
}
