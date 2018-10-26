#include<iostream>
using namespace std;

class rectangle 
{	
	public:
	float length;
	float breadth;
	float area();
	float perimeter();
};
float rectangle::area()
{
	return length*breadth;
}
float rectangle :: perimeter()
{
	return (2*(length+breadth));
}

int main()
{	 //user should give input to two rectangles
	 //so there must be two objects of rectangle type
	 rectangle r1,r2;
	 cout<<"\n Enter the length and breadth of first rectangle ";
	 cin>>r1.length>>r1.breadth;
	 cout<<"\n Enter the length and breadth of second rectangle ";
	 cin>>r2.length>>r2.breadth;
	 if(r1.area()>r2.area())
	 cout<<"\n Area of first rectangle is greater ";
	 else if(r1.area()<r2.area())
	 cout<<"\n Area of second rectangle is greater ";
	 else 
	 cout<<"\n Both the rectangles have equal areas ";
	 cout<<"\n AND";
	 if(r1.perimeter()>r2.perimeter())
	 cout<<"\n Perimeter of first rectangle is greater ";
	 else if(r1.perimeter()<r2.perimeter())
	 cout<<"\n Perimeter of second rectangle is greater ";
	 else 
	 cout<<"\n Both the rectangles have equal perimeters ";
	 cout<<"\n";
	 return 0;
}
 
