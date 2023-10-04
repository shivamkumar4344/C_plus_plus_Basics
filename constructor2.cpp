//Constructors 
#include<iostream>
using namespace std;
class Cuboid{
	public:
		int l,b,h;
	
	Cuboid()//default constructor
	{
		l = 10, b = 10 , h = 12;
	}
	
	Cuboid(int x,int y ,int z)//parameterised constructor
	{
		l =x;
		b =y;
		h =z;
	}
	
	Cuboid(Cuboid& c)//copy constructor
	{
		l = c.l;
		b = c.b;
		h = c.h;
	}
	
	void volume()
	{
		cout<<l*b*h;
	}
	
	~Cuboid(){
		cout<<"Destructor"<<endl;
	}
};
int main()
{
	Cuboid c1;
	cout<<c1.l<<" "<<c1.b<<" "<<c1.h<<endl;
	c1.volume();
	Cuboid c2(25,40,60);
	cout<<endl<<c2.l<<" "<<c2.b<<" "<<c2.h<<endl;
	c2.volume();
	Cuboid c3 = c2;
	cout<<endl<<c3.l<<" "<<c3.b<<" "<<c3.h<<endl;
	
	Cuboid* c4 = new Cuboid(3,8,10);
	cout<<c4->l<<" "<<c4->b<<" "<<c4->h<<endl;
	c4->volume();
	cout<<"\n";
	delete c4;
	return 0;
}

