#include<iostream>
using namespace std;
int main(){

    long long T,n,a,sum[n];
    cin >> T;
    long long val = 0;
    for(int t = 0; t < T; t++){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a;
            val += a;
            sum[i] = val;
            cout<<val;
        }
        if(n == 1)cout << "YES" << endl;
        else if(n == 2)cout << "NO" << endl;
        else{
            bool OK = true;
            for(int i = 1; i < n; i++){
                if(sum[i-1] == (sum[n-1]-sum[i])){
                    cout << "YES" << endl;
                    OK = false;
                }
            }
            if(OK)cout << "NO" << endl;
        }
    }
  
    return 0;
}
