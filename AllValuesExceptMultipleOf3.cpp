//print all the values between 1 and 50 except for the multiple of 3.
#include<iostream>
using namespace std;
int main()
{
	int n;
	for(n=1;n<=50;n++){
		if(n%3==0){
			continue ;
			
		}
		cout<<n<<endl;
	}
	return 0;
	
}
