// CodeStudio-1
#include<iostream>
using namespace std;
int unique(int arr[],int size)
{
	int ans =0;
	int i =0;
	for(;i<size;i++)
	{
		ans = ans ^ arr[i];
	}
	return ans;
}

int main()
{
	int arr[7]={23,76,89,90,89,23,76};
	cout<<unique(arr,7)<<" ";
}
