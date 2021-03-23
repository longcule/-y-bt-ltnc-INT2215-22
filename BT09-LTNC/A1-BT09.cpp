#include<iostream>
#include<string.h>
using namespace std;
char* concat(const char* a, const char* b)
{
      int size = 0;
      string temp;
      temp = a;
      size += temp.size();
      temp = b;
      size += temp.size();
      char *m = new char [size];
      strcpy(m, a);//sao chep
      strcat(m, b);// noi chuoi
      return m;
      
}
int main()
{

	cout << concat("Hello","World");
}
