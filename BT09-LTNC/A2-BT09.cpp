#include<iostream>
using namespace std;
int main()
{
	 int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p; // delete lam cho p2 tro vao vung bo nho p khong con hieu luc nen luc nay khai bao p2 =100 thi cout ra 100
*p2 = 100;
 cout << *p2;
 delete p2;

}
