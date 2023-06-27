//print first multiple of 5 which is also a multiple of 7.
#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=5;;i+=5){
		if(i%7==0){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
	
}
