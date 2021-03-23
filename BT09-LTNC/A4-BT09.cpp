#include<iostream>
using namespace std;
int main()
{
	int a;
	cin  >> a;
	cerr << &a<<endl;
	cerr <<a<<endl;
	int *p = new int [a];	
	cerr<< *p;

	delete p;
}
//neu cerr << *p thi con tro se tro toi vung bo nho bat ki nao do ma khong phai dia chi cua a;

