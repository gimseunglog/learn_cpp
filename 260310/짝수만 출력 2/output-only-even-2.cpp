#include <iostream>
using namespace std;

int main() {
    int B, A;
    cin >> B >> A;
    if(B % 2){
        B--;
    }
    while(B >= A){
        cout << B << ' ';
        B -=2;
    }
    return 0;
}