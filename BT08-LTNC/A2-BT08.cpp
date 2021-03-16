#include<iostream>
using namespace std;


int main( )
{ 
   char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   cout<<endl;
   int b[3] ={0,1,2};
   for (int i = 0; i<3; i++) {
      cout <<  &b[i] << " : " << b[i] << endl;
   }
    double c[2] ={ 0.5 , 1.5};
   cout<<&c[0]<<" : "<<c[0]<<endl<<&c[1]<<" : "<<c[1]; 
   
   return 0;
}
//a, cac bien kieu char kich thuoc la 1
//b, cac bien kieu int kich thuoc la 4
//c, cac bien kieu double kich thuoc la 8
//d, thay cp++ thanh cp+2 chuong trinh chay dai vo han.
