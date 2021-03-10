#include<iostream>
using namespace std;
char* weird_string() { 
   char c[] = “123345”;
   return c; 
}
int main()
{	
    char c;
	cout<<weird_string(c);
}
//trinh bien dich canh bao "loi khong xac dinh duoc kich thuoc cua c", c chua duoc khoi tao.
//
