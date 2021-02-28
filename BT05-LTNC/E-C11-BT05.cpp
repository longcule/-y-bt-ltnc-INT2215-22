#include<iostream>
#include<cmath>
using namespace std;
bool sothapphan(long long n){
	int p = 0;
	int dec = 0;
	while(n > 0){
		dec += (n %10 )*pow(2, p);
		p++;
		n = n/10;
	}
	cout<< dec;
}
bool sonhiphan(int n)
{
	int dem, i =1, sum = 0;
	do{
		dem = n % 2;
		sum = sum +(i*dem);
		n = n/2;
		i = i*10;
	}while(n>0);
	cout<< sum;
}
int main()
{
	int n;
	long long k;
	cin >> n >> k;
	sonhiphan(n);
	cout<<endl;
	sothapphan(k);
}
