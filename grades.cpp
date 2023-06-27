// Take the marks of 5 subjects and calculate the percentage and then award the grade 
//according to that -:1)>=91 : Excellent 2)>=71 and <90 : Very good 3)>=51 and =<71 : can
//do better 4)<51 : average.

#include<iostream>
using namespace std;
int main(){
	float p,c,m,b,ip;
	cout<<"Enter the marks of all 5 subjects out of 100 : "<<endl;
	cin>>p>>c>>m>>b>>ip;
	float per = (p+c+m+b+ip) /5 ;
	cout<<"Your Percentage is : "<<per<<"%"<<endl;
	if(per>=91) cout<<"Excellent"<<endl;
	else if(per>=71) cout<<"Very good"<<endl;
	else if(per>=51) cout<<"Can do Better"<<endl;
	else cout<<"Average";
	return 0;
	
}
