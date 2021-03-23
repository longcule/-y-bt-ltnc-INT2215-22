#include<iostream>
using namespace std;
int size(const char *a){
	int dem =0;
	for(int i=0;*(a+i) != '\0';i++){
		dem++;
	}
	return dem;
}
char* reverse(const char *a)
{
	int n = size(a);
	char* temp = new char[n];
	for(int i=0;i<n;i++){
	      *(temp + i) = *(a + n - 1 - i);
}
return temp;

}
char* delete_char(const char *a ,const char &c)
{
	int n = size(a);
	char* temp = new char[n];
	int j = 0;
	for(int i=0;i<n;i++ ){
	   if(*(a+i) != c)
	   {
	   	
	   	*(temp + j) = *(a+i);
	   	j++;
	   }
	}
	return temp;
}
char* pad_right(const char *a, const int &n){
        int b = size(a);
        char* temp = new char [n];
        for(int i=0;i<b;i++){
        	*(temp+i) = *(a + i);
		}
		for(int i=b;i<n;i++)
		{
			*(temp + i) = ' ';
		}
	return temp;
}
char* pad_left(const char *a,const int &n){
	int b = size(a);
	char* temp = new char [n];
        for(int i=0;i<n-b;i++){
        	*(temp+i) = ' ';
		}
		int j = 0;
		for(int i=n-b;i<n;i++){
			*(temp+i) = *(a + j);
			j++;
		}
		return temp;
}
char* truncate(const char *a,const int &n)
{
	int b = size(a);
	char* temp = new char [n];
	for(int i=0;i<n;i++){
		*(temp + i) += *(a+i);
	}
	return temp;
}
bool is_palindrome(char a[])
{
	int dem=0;
	for(int i=0;i<size(a)/2;i++){
		for(int j=size(a)-size(a)/2;j<size(a);j++){
			if(*(a+i) == *(a+j)){
				dem++;
			}
		}
	}
	if(dem == size(a)/2+1) return true;
	else return false;
}
char* trim_left(const char a[]){
	int n = size(a);
	char* temp = new char [n];
	int j=0;
	for(int i=0;i<n;i++){
	if(*(a+i) != ' ')
	{
		*(temp+j) = *(a+i);
		j++;
	}
	}
	return temp;
}
char* trim_right(const char *a){
	int n = size(a);
	char* temp = new char [n];
	int i = 0;
	while(*(a+i) != ' ')
	{
		*(temp + i) = *(a+i);
		i++;
	}

	return temp;
}
int main()
{
	char a[1000] ;
	int n;
	cin >> a;
	cin >> n;
	char c = 'o';
   	cout<<reverse(a)<<endl;
    cout<<delete_char(a, c)<<endl;
    cout<<pad_right(a, n)<<endl;
    cout<<pad_left(a, n)<<endl;
    cout<<truncate(a, n)<<endl;
    cout<<is_palindrome(a)<<endl;
    cout<<trim_left(a)<<endl;
    cout<<trim_right(a)<<endl;
}

