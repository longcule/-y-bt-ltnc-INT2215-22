#include<iostream>
using namespace std;
int my_swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
int myswap(int &a, int &b)
{
	int temp = a;
	 a = b;
	 b = temp;
}
int main()
{
	int m = 20, n = 25;
	my_swap(m,n);
	cout<< &m <<" "<<&n;
	cout<<endl;
	myswap(m,n);
    cout<< &m <<" "<<&n;
}
/*khi cho chay truong trinh in dia chi cua m va n thi duoc:
0x6ffe1c 0x6ffe18
0x6ffe1c 0x6ffe18
dia chi cua m va n giong nhau nhung ket qua m va n lai khac nhau
*/
