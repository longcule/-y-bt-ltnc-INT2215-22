#include<iostream>
using namespace std;
int size( char a[]){
	int dem =0;
	for(int i=0;*(a+i) != '\0';i++){
		dem++;
	}
	return dem;
}
string reverse(char a[])
{
	string b;
	for(int i=0;i<size(a);i++){
	      b+=*(a+size(a)-1-i);
}
return b;

}
string delete_char(char a[] , char c)
{
	string b;
	for(int i=0;i<size(a);i++ ){
		if(a[i] == c) continue;
		 b += *(a+i);
	}
	return b;
}
string pad_right(char a[], int n){
        string b=a;
        for(int i=0;i<n-size(a);i++){
        	b += " ";
		}
	return b;
}
string pad_left(char a[], int n){
	string b=a;
        for(int i=size(a);i<n;i++){
        	b = " "+b;
		}
		return b;
}
string truncate(char a[], int n)
{
	string b;
	for(int i=0;i<n;i++){
		b += *(a+i);
	}
	return b;
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
string trim_left(char a[]){
	string b;
	int dem = 0;
	for(int i=0;i<size(a);i++){
		if(a[i] == ' ' && dem ==1) continue;
		dem =0;
		b += *(a+i);
	}
	return b;
}
string trim_right(char a[]){
	string b;
	int dem = 0;
	for(int i=size(a)-1;i>=0;i--){
		if(a[i] == ' ' && dem ==1) continue;
		dem =0;
		b = *(a+i) + b;
	}

	return b;
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

