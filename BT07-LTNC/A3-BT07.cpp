#include<iostream>
using namespace std;
void count_even(int* a , int n)
{
	int dem = 0;
	for(int i=0;i<n;i++){
		if(a[i] % 2==0){
			dem++;
		}
	}
	cout<<dem;
}
int main()
{
	int n;
	int a[n];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	count_even(a,n);
}
