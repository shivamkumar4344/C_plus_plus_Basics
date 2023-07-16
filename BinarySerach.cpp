//Binary Search
//Time complexity = O(log N)
#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key)
{
	int start = 0, end = size - 1;
	int mid = start + (end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid] == key)
		{
			return mid;
		}
		
		//For Right 
		if(key>arr[mid])
		{
			start = mid + 1;
			
		}
		//for left
		else{
			end = mid - 1;
		}
		mid = start + (end-start)/2;
	}
	return -1;
}


int main()
{
	int even[6] = {2,4,6,14,18,20};
	int odd[5] = {3,8,9,87,98};
	
	cout<<"Index of 14 is : "<<BinarySearch(even,6,18)<<endl;
	cout<<"Index of 9 is : "<<BinarySearch(odd,5,9)<<endl;
	
	return 0;
}
