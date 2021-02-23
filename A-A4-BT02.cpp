#include<iostream>
using namespace std;
bool namnhuan(int year){
	if(year%400 == 0 ) return true;
	else if(year%100 != 0 && year%4==0) return true;
	  return false;
}
 int songaytrongthang(int year, int month)
 {
 	int songay = 0;
 	switch(month)
 	{
 		case 1:
 		case 3:
 		case 5:
 		case 7:
 		case 8:
 		case 10:
 		case 12:
 			songay = 31;
 		case 2:
 			if(namnhuan(year) == true) songay = 29;
 			else songay = 28;
 		case 4:
 		case 6:
 		case 9:
 		case 11:
 			songay =30;
	 }	 
 }
 int congngay(int day, int month, int year,int ngay){
 	
 	int songay = songaytrongthang(year, month);
 	if(ngay + day <= songay){
 		cout<< ngay+day;
	 }else if(ngay+day>songay){
	 	cout<<ngay+day-songay;
	 	month++;
	 }
 } 
int main()
{
	int day, month, year;
	int k=100,x;
	cin >> day >> month >> year;
    for(int i=0;i<k;i++){
    	cin >> x;
    	if(x == 0){
    		break;
		}
		cout<<congngay(day,month,year,x)<<" "<<month<<" "<<year;
	}
		
	
}
