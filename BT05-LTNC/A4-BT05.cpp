#include<iostream>
#include<string>
using namespace std;
string mang(string x)
{
	cout<< &x<<endl;
	return x;
}
int main()
{
    string n ="abcde";
    cout<<&n<<endl;
    cout<<mang(n);
//mang duoc truyen theo co che pass-by-value(truyen gia tri) 
//string duoc truyen theo co che pass-by-reference(truyen tham so)

}
