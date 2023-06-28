//Find out the sum of following series
//S = 1-2+3-4+5-.......n
#include<iostream>
using namespace std;
int main()
{
	int n ;
	cout<<"Enter a Number :";
	cin>>n;
	
	int sum =0;
	int i;
	for(i=1;i<=n;i++){
		if(i%2==0){
			sum-=i;
		}
		else{
			sum+=i;
		}
		
	}
	cout<<"Sum of the given series is : "<<sum<<endl;
	return 0;
}
