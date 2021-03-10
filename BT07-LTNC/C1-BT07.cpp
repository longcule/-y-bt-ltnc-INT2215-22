#include<bits/stdc++.h>
using namespace std;
int xucSac()
{
    int n;
    n=rand()%6+1;
    return n;
}
int main()
{
    srand(time(0));
    int n;
    int n1, n2;
    int diemP1=0, diemP2=0;
    while(diemP1<100 && diemP2<100)
    {
        if(diemP1<=diemP2)
        {
            n1=xucSac();
            diemP1+=n1;
            cout << "xuc xac nguoi choi 1: "<< n1 << " 	" << "Tong nguoi 1: "<< diemP1 <<endl;
            if(diemP1>=100){
            	cout<<"nguoi 1 winnn!";
			}
        
        }
        else
        {
            n2=xucSac();
            diemP2+=n2;
            cout << "xuc xac nguoi choi 2: "<< n2 << " 	" << "Tong nguoi 2: "<< diemP2 <<endl;
            if(diemP2>=100){
            	cout<<"nguoi 2 winnn!";
			} 
                          
        }
    }
}
