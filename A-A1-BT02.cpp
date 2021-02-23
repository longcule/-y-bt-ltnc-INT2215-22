#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=0;
	for(int i=0;i<=100;i++){
		if(i%2 == 0){
			cout<<i<<" ";
		}
	}
	while(i<100){
		if(i%2 == 0){
		cout<<i<<" "; 
	}
	i++;
}
do{
	if(i%2==0){
		cout<<i<<" ";
	}
	i++;
}while(i<100);
	
	

}
