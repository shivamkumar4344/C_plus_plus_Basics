//CodeStudio-5
//First and Last position of an element in Sorted Array.
#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key)
{
	int s = 0, e = n-1 , ans = -1;
	int mid = s + (e-s)/2;
	while(s<=e)
	{
		if(arr[mid] == key)
		{
			ans = mid;
			e = mid - 1;
		}
		
		else if(key > arr[mid])
		{
			//right part
			s = mid + 1;
		}
		else if(key < arr[mid])
		{
			e = mid - 1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}

int lastOcc(int arr[],int n,int key)
{
	int s = 0, e = n - 1 , ans = -1;
	int mid = s + (e - s)/2;
	while(s<=e)
	{
		if(arr[mid] == key)
		{
			ans = mid;
			s = mid + 1;
		}
		else if(key > arr[mid])
		{
			s = mid + 1;
		}
		else if(key < arr[mid])
		{
			e = mid - 1;
			
		}
		mid = s + (e - s)/2;	
	}
	return ans;
}

int main()
{
	int arr[7] = {1,2,4,4,4,4,9};
	
	cout<<"Index of first 4 is : "<<firstOcc(arr,7,4)<<endl;
	cout<<"Index of last 4 is : "<<lastOcc(arr,7,4)<<endl;
	
	cout<<"Total number of occurences of 4 : "<<(lastOcc(arr,7,4) - firstOcc(arr,7,4))+1<<endl;
}
