#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	cin >> n;
	int dem = 0;
	for(int i=0;i<n.size();i++){
		if(n[i] != n[n.size()-1-i]){
			dem++;
		}
	}
	if(dem ==0){
		cout<<"Yes";
	}else cout<<"No";
}
