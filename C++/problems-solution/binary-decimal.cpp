#include <iostream>
using namespace std;

// Binary -> Decimal
int main() {
    int binaryNum=101;
    int ans=0, pows=1;

    while(binaryNum>0){
        int lastDigit=binaryNum%10;
        binaryNum/=10;
        ans+=pows*lastDigit;
        pows*=2;
    }
    // Output
    cout << ans << endl;
    return 0;
}
