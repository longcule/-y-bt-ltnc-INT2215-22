#include <iostream>

using namespace std;

struct Point
{
	int x,y;
	void Print()
	{
		cout<<x<<" "<<y;
	}
};

void print1(Point p)
{
	cout<<"\nDia chi p ham 1: "<<&p;
}

void print2(Point &p)
{
	cout<<"\nDia chi p ham 2: "<<&p;
}

Point mid_point(const Point p1, const Point p2)
{
	Point p3;
	p3.x = (p1.x + p2.x)/2;
	p3.y = (p1.y + p2.y)/2;
	return p3;
}

int main()
{
	Point p;
	cin>>p.x>>p.y;
	p.Print();
	cout<<"\nDia chi p main :"<<&p;
	print1(p);
	print2(p);
	system("pause");
	return 0;
}
