//Pass By Value

#include<iostream>
using namespace std;

int twice(int p){
	return p=p*2;
}

int main(){
	
	cout<<twice(4);
	return 0;
	
}
