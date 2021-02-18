#include<iostream>
using namespace std;
int main()
{
	int n;
	int dem = 0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
	   if(a[i]>a[j]){
	   	int temp = a[i];
	   	a[i] = a[j];
	   	a[j] = temp;
	   }
}
	}
	for(int i=0;i<n;i++){
			if(a[i] == a[i+1]){
		dem++;
	}
	}
	if(dem !=0){
		cout<<"Yes";
	}else cout<<"No";
	
}
