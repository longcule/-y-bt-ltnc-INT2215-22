
#include<iostream>
using namespace std;
int LeapYear(int y)
{
    if (y % 400==0) return 1;
    else if (y % 100!=0 && y % 4==0) return 1;
    return 0;
}
int songaytrongthang(int y,int m)
{
	int songay = 0; 
	switch(m)
	{
		case 1:
		case 3:
	    case 5:
	    case 7:
	    case 8:
	    case 10:
		case 12: 
			 songay = 31;
			 break;
	    case 2:
	    	if(LeapYear(y) == true)
			 songay = 29;
			 else
	    	songay = 28;		
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		songay = 30;
	}
	return songay;
}
int main()
{
	int d,m,y;
	cin >>d>> m>> y;
	int ngay = 0;
	for(int i=1;i<m;i++){
		ngay += songaytrongthang(y,i);
}
	int ngaynam = 0;
	for(int i=1;i<y;i++)
	{
		if(LeapYear(i) == 1){
			ngaynam += 366;
		}else ngaynam += 365;	
}
int A = ngaynam+ngay+d;
switch (A%7)
	 { 
	 case 0: cout<< "Sunday";
	 break;
	 case 1: cout<< "Monday";
	 break;
	  case 2: cout<< "Tuesday";
	 break;
	  case 3: cout<< "Wednesday"; 
	 break;
	  case 4: cout<< "Thusday"; 
	 break;
	  case 5: cout<< "Friday";
	 break;
	   case 6: cout<< "Saturday";
	 break;
}
}
