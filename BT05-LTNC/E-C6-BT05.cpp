#include<iostream>
using namespace std;
int ucln(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    return a; 
}
int main()
{
	int a,b;
	cin >> a >> b;
	cout<<ucln(a,b)<<endl;
	if(ucln(a,b) == 1){
		cout<<"yes";
	}else cout<<"no";
	
}
