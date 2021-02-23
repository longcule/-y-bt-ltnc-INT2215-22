#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	double sum=0, neft = 0;
  for(int i=0;i<n;i++){
		cin >> a[i];
	} 
	for(int i=0;i<n;i++){
		sum += a[i];
	    neft += a[i]*a[i];	
	}
	
	cout<<sum/n<<endl;
	cout<<(double)((double)1/(n-1))*(neft-(double)(1/n)*sum*sum);
 } 
