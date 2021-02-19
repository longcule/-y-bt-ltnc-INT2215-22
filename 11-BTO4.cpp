#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverse(string s)
{
	string ans="";
	for(int i=s.length()-1;i>=0;i--){
		ans += s[i];
	}
	return ans;
}
int main()
{
	int dem = 0;
	int n;
	cin >> n;
	string a[n], as[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		as[i] = reverse(a[i]);
	}
	int flag = 1;
	for(int i=0;i<n && flag;i++){
		for(int j=i+1;j<n;j++){
			if(as[j] == a[i]){
			int dem = as[i].length();
			cout<<dem<<" ";
			cout<<as[i][dem/2]<<endl;
			flag = 0;
			break;	
			}
		}
	}
}
