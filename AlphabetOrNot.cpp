//Wap to check a character is an alphabet or not
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter an alphabet : ";
	cin>>ch;
	int x = (int)ch;
	if((x>=65 && x<=90)||(x>=97 && x<=122)){
		cout<<"Alphabet"<<endl;
	}
	else{
		cout<<"Not an alphabet"<<endl;
	}
	return 0;
	}

