//Minimum / Maximum in an array
#include<iostream>
#include<cmath>
using namespace std;

int getMin(int arr[],int n){
	
	int mini = pow(2,31)-1;
	int i;
	for(i=0;i<n;i++){
		mini = min(mini,arr[i]);
	}
	return mini;
}

int getMax(int arr[],int n){
	
	int maxi = -pow(2,31);
	int i;
	for(i=0;i<n;i++){
		maxi = max(maxi,arr[i]);
	}
	return maxi;
}

int main()
{
	int size;
	cout<<"Enter the size : ";
	cin>>size;
	
	int num[100];
	int i;
	for(i=0;i<size;i++)
	{
		cin>>num[i];
	}
	cout<<"MAX value : "<<getMax(num,size)<<endl;
	cout<<"MIN value : "<<getMin(num,size)<<endl;
	
	return 0;
}
