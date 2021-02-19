#include<iostream>
using namespace std;
int main()
{
	int n;
	int dem = 0;
	cin >> n;
	float a[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin >> a[i][j];
		}
} 
float max = a[0][0];
    for (int k = n - 1; k > 0; k--)
   for (int i = 1; i <= k; i++)
      if (a[i-1][0] > a[i][0]) {
         float temp = a[i][0]; 
         a[i][0] = a[i-1][0]; 
         a[i-1][0] =  temp;
      }
 for (int k = n - 1; k > 0; k--)
   for (int i = 1; i <= k; i++)
      if (a[i-1][1] > a[i][1]) {
         float temp = a[i][1]; 
         a[i][1] = a[i-1][1]; 
         a[i-1][1] =  temp;
      }
      
for(int i=0;i<n;i++){
    		if(a[i][0] < a[i][1]){
    			dem++;
			}
	}
if(dem != 0){
	cout<< "khong co cach xep :((";
}if(dem == 0){
	cout<<" co cach roiii";
}
}

