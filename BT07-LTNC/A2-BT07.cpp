#include<iostream>
using namespace std;
void f(int *a, int n)
{
	for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
cout<<endl;
}
int main()
{
	int n;
	int b[n];
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<sizeof(a[10])<<endl;
	f(a, sizeof(n)/sizeof(int));
	cout<<endl;
	cout<<sizeof(b[n]);
}
//kich thuoc cua mang ben trong ham f va ben ngoai-noi khai bao mang A deu bang nhau va =4;
