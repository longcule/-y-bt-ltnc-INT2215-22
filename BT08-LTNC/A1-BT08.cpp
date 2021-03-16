#include<iostream>
using namespace std;
void f(int xval)
{
   int x;
   x = xval;
  cout<<&x<<endl;
}
void g(int yval)
{
   int y;
  cout<<&y;
}
int main()
{
   f(7);
   g(11);
   return 0;
} 
//dia chi cua hai bien la giong nhau.
// vi khi khai bao bien x thi gan bien x = val roi va khi khai bao bien y thi cungx khai bao bien y = val nen dia chi nay la cua bien val.
