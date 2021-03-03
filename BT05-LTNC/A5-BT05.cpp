#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int* b = &n;
	int *c;
	cin >> n >> m;
	cout<< n <<" "<< b;
	b = &m;
	cout<<endl<<b;
}
//a--> cung la 1 bien
//b--> co the
//c--> co the.
