#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	int sum=0, neft=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int min=a[0], max = a[0];
	for(int i=0;i<n;i++){
	  if(a[i] < min){
	  	min = a[i];
	  }if(a[i]> max){
	  	max = a[i];
	  }
		if(a[i]%2 == 0){
			sum+=a[i];
		}else if(a[i]%2 != 0){
		neft += a[i];
	}
	}
	cout<< min <<" "<< max<<" "<<sum<<" "<<neft;
}
