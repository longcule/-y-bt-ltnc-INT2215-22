#include<iostream>
using namespace std;
int main()
{
	int n,dem = 0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n-3;i++){
		for(int j=i+1;j<n-2;j++){
			for(int k=j+1;k<n-1;k++){
				if(a[i]+a[j]+a[k] == 0){
					cout<< a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
					dem++;
				}
			}
		}
	}
	if(dem == 0) cout<<" khong co bo ba nao thoa man :((";
}
