#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a;
    double b;
    cin >> a >> b;
    int mu = 1;
    while (b > 0) {
        mu *= a;
        b--;
    }    
    cout << mu;
    return 0;
}
