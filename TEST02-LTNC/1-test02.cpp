#include<iostream>
#include<string>
using namespace std;
int main()
{
	int m;
	int n;
	cin >> m >> n;
	int a[m];
	char b[n];
	for(int i=0;i<m;i++)
	{
		cin >> a[i];
		int *a = &a[i];
	}
	for(int j=0;j<n;j++){
		cin >> b[j];
	}
	int c = 100, d = 50;
	cout<<&c<<endl;
	for(int i=0;i<m-2;i++){
		cout<<&a[i]<<" "<<&a[i+1]<<" "<<&a[i+2]<<endl;
}
cout<<&d<<endl;
//dia chi cac bien cach nhau 4 byte = kich th7uoc cua int
    char e ='e' , t = 't';
    cout<<(void *)&e<<endl;
    for(int j=0;j<n-2;j++){
    	cout<<(void *)&b[j]<<" "<<(void *)&b[j+1]<<" "<<(void *)&b[j+2]<<endl;
	}
cout<<(void *)&t<<endl;
}
//dia chi cac bien cach nhau 1 byte = kich thuoc cua char
//gia tri cua dia chi co chieu giam dan.

