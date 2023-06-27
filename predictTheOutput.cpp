#include<iostream>
using namespace std;

//int main(){
//	int num1;
//	int p = 5, q = 10;
//	p+=q-=p;                      // you have to predict the output of the code..
//	cout<<p<<" "<<q<<endl;
//	return 0;
//}

int main()
{
	int i = 2,j =3,k,l;
	float a,b;
	
	k = i/j*j;
	l = j/i*i;
	a = i/j*j;
	b = j/i*i;
	cout<<k<<" "<<l<<" "<<a<<" "<<b;
	return 0;
}
