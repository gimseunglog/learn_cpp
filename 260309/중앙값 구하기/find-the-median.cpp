#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int tmp;
    if(A > B){
        tmp = A;
        A = B;
        B = tmp;
    }
    if(B > C){
        tmp = C;
        C = B;
        B = tmp;
    }
    if(A > B){
        tmp = A;
        A = B;
        B = tmp;
    }
    cout << B;
    return 0;
}