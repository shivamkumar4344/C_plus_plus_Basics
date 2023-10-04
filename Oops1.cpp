#include<iostream>
using namespace std;
class Fruit{
public:
	string name;
	string color;
	int weight;
};

int main()
{
	Fruit apple;
	apple.name = "Apple";
	apple.color = "Red";
	apple.weight = 30;
	
	Fruit *mango = new Fruit();
	mango->name = "Mango";
	mango->color = "Yellow";
	mango->weight = 51;
	
	cout<<"Name : "<<apple.name<<"\n"<<"Color : "<<apple.color<<"\n"<<"Weight : "<<apple.weight<<endl<<endl;
	cout<<"Name : "<<mango->name<<"\n"<<"Color : "<<mango->color<<"\n"<<"Weight : "<<mango->weight<<endl;
	return 0;
}
