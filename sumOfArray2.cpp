//Print the sum of all the elements in an array
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter the array elements : ";
	int i;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	int sum =0;
	for(i=0;i<5;i++)
	{
		sum =sum+arr[i];
	}
	
	cout<<"Sum of the array elements is : "<<sum<<endl;
	return 0;
	
}
