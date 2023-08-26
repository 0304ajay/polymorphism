#include<iostream>
using namespace std;
class base
{
public:
	virtual float area() = 0;
	virtual float perimeter() = 0;
};
class rectangle :public base
{
private:
	int length;
	int breadth;
public:
	rectangle(int l , int b);
	float area();
	float perimeter();
};
rectangle::rectangle(int l=0, int b=0)
{
	length = l;
	breadth = b;
}
float rectangle::area()
{
	return (float)length * breadth;
}
float rectangle::perimeter()
{
	return (float)2 * (length + breadth);
}
class circle :public base
{
private:
	int radius;
public:
	circle(int r = 0);
	float area();
	float perimeter();
};
circle::circle(int r)
{
	radius = r;
}
float circle::area()
{
	return (float)radius * 3.14 * radius;
}
float circle::perimeter()
{
	return (float)2 * 3.14 * radius;
}
int main()
{
	int l, b,ra;
	cout << "Enter the length and breadth of the rectangle" << endl;
	cin >> l >> b;
	rectangle c(l, b);
	base* p = &c;
	cout<<"area of the rectnagle is :"<<p->area()<<endl;
	cout << "perimeter of the rectangle is : " << p->perimeter() << endl;
	cout << "Enter the area of the circle " << "\t";
	cin >> ra;
	circle d(ra);
	p = &d;
	cout << "The area of the circle is " << p->area() << endl;
	cout << "The perimeter of the circle is " << p->perimeter() << endl;
	return 0;
}