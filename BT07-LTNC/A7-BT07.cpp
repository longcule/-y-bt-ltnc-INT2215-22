#include <iostream>
#include <string.h>
using namespace std;
int demxau(const char str1[], const char str2[]){
  int dem = 0;
  int ok=1;
  for(int i=0;i<strlen(str1);i++){
      if(str1[i] == str2[0]){
      	ok=1;
      	for(int j=0;j<strlen(str2);j++){
      		if(str2[j] != str1[i+j]){
      			ok=0;
				  break;
			  }
		  }	  
	   if(ok == 1)
	   {
		  	dem++;
     }
  }
}
  return dem; 
}

int main()
{
        char str2[]="abc";
		char str1[]="abcaabcabc";
  cout<<demxau(str1,str2);
  return 0;
}

