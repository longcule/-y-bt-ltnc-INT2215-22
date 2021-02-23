#include<iostream>
using namespace std;
int intamgiac(int m,int n)
{
	for(int i=0;i<m;i++){
	cout<<" ";
}
	for(int i=0;i<n;i++){	
		cout<<"*";	
}
}
int main()
{
	int m,n;
	cin >> m >> n;
	for(int j=1;j<=n*2;j+=2){
	     intamgiac(m,j);
	     m--;
	 cout<<endl;
	}
}
