// If cost price and selling price of an item is input through the keyborad,
//wap to determine whether the seller has made profit or loss. Also determine how much
//profit he made or loss he incurred.

#include<iostream>
using namespace std;

int main()
{
	int cp,sp,profit,loss;
	cout<<"Enter the cost price : ";
	cin>>cp;
	cout<<"Enter the selling price : ";
	cin>>sp;
	profit = sp - cp;
	loss = cp - sp;
	
	if(sp>cp){
		cout<<"Profit : "<<profit;
		
	}
	else if (cp>sp){
		cout<<"Loss : "<<loss;
		
	}
	else{
		cout<<"No Profit, No loss!";
	}
	return 0;
}

