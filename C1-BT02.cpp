#include<iostream>
#include<cmath>
using namespace std;
bool check(int n)
{
	if(n<2) return false;
	else if(n>=2){
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return false;
		}
	}
	return true;
}
int main()
{
	int n=100,x;
	for(int i=0;i<n;i++){
		cin >> x;
		if(check(x) == true){
			cout<<"yes"<<endl;
		}else cout<<"no"<<endl;
	}
}
