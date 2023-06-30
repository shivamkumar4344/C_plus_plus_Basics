//for loop
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,3,5,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<size;i++){
    	cout<<arr[i]<<" ";
	}
	return 0;
} 


