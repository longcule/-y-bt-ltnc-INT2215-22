#include<iostream>
#include<string>
using namespace std;
void f(int a[])
{ 
	cout<<&a<<" "<<&a[0];
}
int main()
{
	int a[10];
	cout<<&a <<" "<<&a[0];
	cout<<endl;
	f(a);
}
/*0x6ffdf0 0x6ffdf0
0x6ffdd0 0x6ffdf0*/
//mang duoc truyen vao ham co dia chi bien mang va dia chi phan tu dau tien trong mang khac nhau
//con voi mang A duoc khoi tao thi dia chi cua bien mang va phan tu dau tien trong mang la giong nhau
