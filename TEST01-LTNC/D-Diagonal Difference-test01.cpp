#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0,neft = 0;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		sum += a[i][i];
		neft += a[i][n-i-1];
	}
    int x= sum-neft;
   cout<<abs(x);
	
}
