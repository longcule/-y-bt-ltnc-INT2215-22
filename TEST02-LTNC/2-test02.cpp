#include<iostream>
using namespace std;
int factorial(int x)
{
	cout <<"x = " << x << " at " << &x << endl;
	if(x == 1) return 1;
	 return x*factorial(x-1);
}
int main()
{
	int n;
	cin >> n;
	cout<<factorial(n);
 } 
 // chuoi gia tri duoc in ra man hinh theo thu tu giam dan.
 // vd: n = 5. 
