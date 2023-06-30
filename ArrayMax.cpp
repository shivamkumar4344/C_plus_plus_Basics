//Find the maximum value out of all the elements in the array.

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;
	int max = arr[0];
	cout<<"Enter the value of array elements : ";
	for(i=0;i<5;i++){
		cin>>arr[i];
	}
	
	for(i=1;i<5;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	cout<<"Maximum value of the array elements are : "<<max<<endl;
	return 0;
}
