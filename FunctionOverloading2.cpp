//Function Overloading-2
#include<iostream>
using namespace std;
float pi = 3.14;
class Shape{
	public:
		void Area(float r)
		{
			float Circle_area = pi*r*r;
			cout<<Circle_area<<endl;
		}
		
		void Area(float l , float b){
			float Rec_area = l*b;
			cout<<Rec_area<<endl;
		}
};


int main()
{
	Shape s;
	cout<<"Area of Circle is : ";
	s.Area(5);
	cout<<"\nArea of Rectangle is : ";
	s.Area(3,9.9);
	return 0;
}
