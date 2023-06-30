//Linear Search
//search if a given amount is present in the array or not
//If it is not present then return -1 else return the index.

#include<iostream>
using namespace std;
int main(){
	int ary[10];
	int i;
	cout<<"Enter the array elements : ";
	for(i=0;i<10;i++){
		cin>>ary[i];
	}
	
	int search;
	cout<<"Enter the element you want to search of : ";
	cin>>search;
	
	int ans = -1;
	for(i=0;i<10;i++){
		if(ary[i]==search){
			ans=i;
			break;
		}
	}
	cout<<"Index of the searched element is : "<<ans<<endl;
}
