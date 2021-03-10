#include<iostream>
using namespace std;
const int size = 10;

int vonglap(int key, int *a, int low, int high){
    while(low!=high){
        if(low>high) return -1;
        int d = (low+high)/2;
        if(a[d]==key) return d;
        if(a[d]>key){
            high = d-1;
        }else if(a[d]<key){
            low = d+1;
        }
    }
    return low;
}
int main(){
    int a[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << vonglap(13, a, 0, 9) << endl;
    return 0;
}
