#include<iostream>
using namespace std;
class Rectangle{
	public:
		int l;
		int b;
	Rectangle(){ //default constructor ->no argument
		l = 10;
		b = 12;
	}
	
	Rectangle(int x , int y){ //parameterised constructor -> arguments pass
		l = x;
		b = y;
	}
	
	Rectangle(Rectangle& r){ // copy constructor-> initialised an object by another existing objcet.
		l = r.l;
		b = r.b;
	}
	
	void area(){
		cout<<l*b;
	}
	
	~Rectangle(){
		cout<<"Destructor is called"<<endl;
	}
};  
 
 
 int main()
 {
 	Rectangle r1;
 	cout<<"Default constructor: "<<r1.l<<" "<<r1.b<<endl;
 	r1.area();
 	Rectangle r2(30,40);
 	cout<<"\nParameterised constructor: "<<r2.l<<" "<<r2.b<<endl;
 	r2.area();
 	Rectangle r3 = r2;
 	cout<<"\nCopy Constructor: "<<r3.l<<" "<<r3.b<<endl;
 	Rectangle* r4= new Rectangle(38,98);
 	cout<<r4->l<<" "<<r4->b<<endl;
 	r4->area();
 	delete r4;
 	
 	return 0;
 }
