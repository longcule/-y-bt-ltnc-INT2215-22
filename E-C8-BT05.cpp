#include<iostream>
#include<cmath>
using namespace std;
int ceilx(float n){
    return (int)(n-(int)n>0?n+1:n);
}
int main()
{
	double n;
	cin >> n;
	int x = ceil(n);
	cout<<x<<endl;
	cout<<ceilx(n)<<endl; 
	cout<<(int)n; 
 } 
