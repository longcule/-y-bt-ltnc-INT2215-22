#include<iostream>
using namespace std;
int main()
{
	int m,n;
	int dem = 0;
	cin >> m >> n;	
    char a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		  cin >> a[i][j];	
	}
}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

    for(int i=0;i<m;i++){
    	for(int j=0;j<n;j++){
    		if(a[i][j] + 2 == 0 ){
    			for(int k=i-1;k<i+1;k++){
    				for(int f=j-1;f<j+1;f++){
    					if(a[k][f] + 6 == 0 ){
    						dem++;
						}
					}
					cout<<dem;
					dem = a[i][j];
				}
			}
		}
	}
	
	/*	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
}
