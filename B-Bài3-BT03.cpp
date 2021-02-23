#include<iostream>
using namespace std;
int main()
{
	int n;
	int dem=1;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
}
   for (int k = n - 1; k > 0; k--)
   for (int i = 1; i <= k; i++)
      if (a[i-1] > a[i]) {
         int temp = a[i]; 
         a[i] = a[i-1]; 
         a[i-1] =  temp;
      }

		for(int i=1;i<n;i++){
			if(a[i] == a[i-1]) dem++;
			else{
				cout<<"so "<<a[i-1]<<" xuat hien: "<<dem<<endl;
				dem = 1;
			}
		}
			cout<<"so "<<a[n-1]<<" xuat hien: "<<dem<<endl;
		}

