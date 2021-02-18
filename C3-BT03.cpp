#include<iostream>
#include<string>
using namespace std;
bool doixungguong(int a)
{
int r,sum=0,temp;
 for(temp=a;a!=0;a=a/10){
         r=a%10;
         sum=sum*10+r;
    }
    if(temp==sum)
         return true;
    else
         return false;
}
bool demsodoiguong(int a, int b)
{
	int so = 0;
	for(int i=a;i<=b;i++){
		if(doixungguong(i) == true){
			so++;
		}
	}
	cout<<so;
}
void songuyen(){
     int T;
     cin >> T;
     int a,b;
     for(int i=0;i<T;i++){
         cin >>a>>b;
         
         demsodoiguong(a,b);
         cout<<endl;
     }
 }
int main(){
     songuyen();
	}
	



