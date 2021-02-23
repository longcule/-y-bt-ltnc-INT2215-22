#include<iostream>
using namespace std;
int main()
{
    int a[2][3];
    int bob = 0, alice = 0;
    for(int i=0;i<2;i++){
    	for(int j=0;j<3;j++){
    		cin>> a[i][j];
		}
	}
        for(int j=0;j<3;j++){
            if(a[0][j] < a[1][j]){
            	bob++;
			}else if(a[1][j] < a[0][j]){
				alice++;
			}
        }
        cout<< alice<<" "<<bob;
}
