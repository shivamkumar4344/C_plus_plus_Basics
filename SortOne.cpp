//Sort 0 and 1
#include<iostream>
using namespace std;
void PrintArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void SortOne(int arr[],int n)
{
	int left = 0, right = n-1;
	while(left<right)
	{
		while(arr[left]==0 && left<right)
		{
			left++;
		}
		while(arr[right] ==1 && left<right)
		{
			right--;
		}
		if(left<right)
		{
			swap(arr[left],arr[right]);
			left++;
			right--;
		}
	}
}


int main()
{
	int arr[8] = {1,0,1,0,1,1,1,0};
	SortOne(arr,8);
	PrintArray(arr,8);
	
	return 0;
}
