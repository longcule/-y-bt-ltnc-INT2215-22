#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int n;
	cin >> n;
	srand(time(NULL));
	int res = rand() % n;
	cout<<res;
	return 0;
}

