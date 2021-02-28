#include<iostream>
#include<cmath>
using namespace std;
bool check(int n)
{
	if(n <= 1) return false;
	else{
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
}
	return true;

}
int main()
{
	int n;
	cin >> n;
	if(check(n) == true){
		cout<<"1"<<endl;
	}else cout<<"0"<<endl;
	for(int i=1;i<=n;i++){
		if(check(i) == true){
			cout<<i<<" ";
		}
	}
}
