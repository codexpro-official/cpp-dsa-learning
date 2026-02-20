#include <iostream>
using namespace std;

// pow(x^n)

double myPow(double x, int n) {
    double ans=1;
    if(n==0) return 1.0;
    if(n==1) return x;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2==0) return 1.0;
    if(x==-1 && n%2==1) return -1.0;

    if(n<0) {
        x=1/x;
        n=-n;
    }
    
    while(n>0) {
        if(n%2==1) {
            ans*=x;
        }
        n/=2;
        x*=x;
    }
    return ans;
}

int main() {
    // base
    double x;
    // exponential/power
    int n;
    // Input base
    cout << "x: ";
    cin >> x;

    // Input power
    cout << "n: ";
    cin >> n;

    // Output
    cout << myPow(x,n) << endl;

    return 0;
}