#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter a Character : ";
	cin>>ch;
	int ascii = (int)ch;
	if(ascii>=65 && ascii<=90 ){
		cout<<"Upper-case alphabet";
	}
	
	else if (ascii>=97 && ascii<=122)
	{
		cout<<"Lower-case alphabet";
		
	}
	
	else if(ascii>=48 && ascii<=57){
		cout<<"Numbers"<<endl;
	}
	else{
		cout<<"Invalid Input";
	}
	return 0;
}
