#include <iostream>

using namespace std;

struct String
{
	int n;
	char *str;
	String()
	{
	}
	String (const char*s)
	{
		n=sizeof(s);
		str = new char[sizeof(s)];
		for(int i=0;i<=sizeof(s);i++)
		{
			str[i] = s[i];
		}
	}
	~String()
	{
		delete []str;
	}
    void print()
	{
		for(int i=0;i<=n;i++)
		{
			cout<<str[i];
		}
	}
	void append(char *s)
	{
		char *temp = new char[50];
		for(int i=0;i<=n;i++)
		{
			temp[i] = str[i];
		}
		for(int i=n;i<=sizeof(s)+n;i++)
		{
			temp[i] = s[i-n];
		}
		delete []str;
		str = new char [n+sizeof(s)];
		for(int i=0;i<=sizeof(s)+n;i++)
		{
			str[i] = temp[i];
		}
		delete []temp;
	}
};

int main()
{
	String s("Hello");
	s.append(" hi");
	s.print();


	system("pause");
	return 0;
}
