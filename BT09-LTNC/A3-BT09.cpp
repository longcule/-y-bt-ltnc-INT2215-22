#include<iostream>
using namespace std;
int main()
{
	char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a'; 
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c;
cerr << "a after deleting c:" << "-" << a << "-" << endl;
}
// lenh cerr thu 3 chay khong nhu mong muon
// Vi: sau lenh cerr thu 2 da delete c; nen luc nay a se khong con gia tri ban dau 
