// taking input in array
#include<iostream>
using namespace std;
int main(){
	char vowels[5];
	int i;
	cout<<"Enter the vowels : ";
	for(i=0;i<5;i++){  
		cin>>vowels[i];//it is taking input
	}
	
	for(i=0;i<5;i++){
		cout<<vowels[i]<<" ";
	}
	return 0;
	
}
