#include<iostream>
using namespace std;
int search(int key, int a[], int low, int high) {
    if (low > high) return -1;
   int mid = (low + high) / 2;
   if (a[mid] == key) return mid;
   if (a[mid] > key) return search(key, a, low, mid-1);
   return search(key, a, mid+1, high);
}
int main()
{
   int key;
   cin >> key; 
   int low = 0 , high=9;
   int a[10] = {1,2,3,4,5,6,7,8,9,10};
   if(int k = search(key, a,0,9)){
   	cout<< k;
   }
}
