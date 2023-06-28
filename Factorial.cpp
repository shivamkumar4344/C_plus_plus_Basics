//Print the factorial of n natural numbers.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	int factorial = 1;
	int i;
	for(i=1;i<=n;i++){
		factorial *= i; 
	}
	cout<<"Factorial of "<<n<<" is : "<<factorial<<endl;
	return 0;
 } 
